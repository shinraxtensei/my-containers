#pragma once

#include <iostream>

#include "../iterators/RBT_iterator.hpp"
#include "../iterators/reverse_iterator.hpp"
#include "../type_traits.../lexicographical&&comp.hpp"

namespace ft
{

    #define BLACK false;
    #define RED true;



    template <class T>
    struct Node
    {
        bool color;
        bool is_nil;
        T key;
        Node *left;
        Node *right;
        Node *parent;

        Node(void) : color(BLACK) , is_nil(false) , left(nullptr) , right(nullptr) , parent(nullptr) {}
    
        Node(T key): color(BLACK) , is_nil(false) , key(key) , left(nullptr) , right(nullptr) , parent(nullptr) {}
    
    };




    template <class T, class Comarator , class Allocator>
    class RBtree
    {

        public:
            typedef T key_type;
            typedef ft::Node<key_type> *NodePtr;
            typedef Allocator allocator_type;
            typedef Comarator comparator_type;
            typedef T* pointer;
            typedef std::size_t size_type;

            // iterators

            typedef rbtree_iterator<key_type , RBtree<key_type, comparator_type ,allocator_type> > iterator;
            typedef rbtree_iterator<const KeyType, RBTree<KeyType, comparator_type, allocator_type> > const_iterator;
		    typedef ft::reverse_iterator<iterator> reverse_iterator;
		    typedef ft::reverse_iterator<const_iterator> const_reverse_iterator;

        private:
            NodePtr		nil;
            NodePtr		root;
            allocator_type	allocator;
            comparator_type	comparator;
            size_type		size;
        
        public:

            RBtree(const comparator_type comp) : nil(NewNode()), root(this->nil), allocator(allocator_type()), comparator(comp), size(0)
            {
                this->nil->is_nil = true;
            }

            RBTree(const RBTree &other)
            {
                this->size = 0;
                this->nil = NewNode();
                this->nil->is_nil = true;
                this->allocator = other.allocator;
                this->comparator = other.comparator;
                this->root = CopyTree(other.root, other.nil, this->nil);
            
            }

            const RBTree <T, Comarator , Allocator> &operator = (const RBTree<T, Comparator, Allocator>& tree)
            {
                DestroyNode(this->nil);
                DeleteTree(this->root);
                this->size = 0;
                this->nil = NewNode();
                this->nil->is_nil = true;
                this->allocator = tree.allocator;
                this->comparator = tree.comparator;
                this->root = CopyTree(tree.root, tree.nil, this->nil);
                return (*this);
            }


            ~RBTree()
            {
                DeleteTree(this->root);
                DestroyNode(this->nil);
            }

            NodePtr SearchNode(NodePtr node , const KeyType& key)const
            {
                while(node)
                {
                    if (this->comparator(key , node->key))
                        node = node->left;
                    else if (this->comparator(node->Key , Key))
                        node = node->right;
                    else
                        return node;
                }
                return (this->nil);
            }

            NodePtr Minimum(NodePtr node) const
            {
                while(node != this->nil && node->left != this->nil)
                    node = node->right;
                return (node);
            }


            NodePtr Maximum(NodePtr node) const
            {
                while(node != this->nil && node->right != this->nil)
                    node = node->right;
                return (node);
            }


            NodePtr Predecessor(NodePtr node)
            {
                NodePtr parent;
                
                if (node == this->nil)
                	return(Minimum(this->root));
                if (node->left != this->nil)
                    return (Maximum(this->left));
                parent = node->parent;
                while(parent!= this->nil && node == parent->left)
                {
                    node = parent;
                    parent = parent->parent;
                }
                return (parent);
            }


            NodePtr Successor(NodePtr node)
            {
                NodePtr parent;
                
                if (node == this->nil)
                	return(Maximum(this->root));
                if (node->right != this->nil)
                    return (Minimum(this->right));
                parent = node->parent;
                while(parent!= this->nil && node == parent->right)
                {
                    node = parent;
                    parent = parent->parent;
                }
                return (parent);
            }



            iterator begin(void)        {return (iterator(Minimum(this->root) , root)); }
            const_iterator begin(void) const        { return (const_iterator(Minimum(this->root) , root));}

            iterator end(void)      {return (iterator(this->nil, root));}
            const_iterator end(void) const      {return (const_iterator(this->nil, root));}
        
            reverse_iterator rbegin(void)       {return (reverse_iterator(end()));}
            const_reverse_iterator rbegin(void) const       { return (const_reverse_iterator(end()));}

            reverse_iterator rend(void)     {return (reverse_iterator(begin()));}
            const_reverse_iterator rend(void) const        {return (const_reverse_iterator(begin()));}


            void DeleteNode(NodePtr node)
            {
                NodePtr old_node;
                NodePtr sibling;
                bool old_node_color;

                old_node = node;
                old_node_color = old_node->color;
                if (node->left == this->nil)
                {
                    sibling = node->right;
                    Transplant(node , node->right);
                }
                else if (node->right == this->nil)
                {
                    sibling = node->left;
                    Transplant(node , node->left);
                }
                else
                {
                    old_node = Minimum(node->right);
                    old_node_color = old_node->color;
                    sibling = old_node->right;
                    if (old_node->parent == node)
                        sibling->parent = old_node;
                    else
                    {
                        Transplant(old_node , old_node->right);
                        old_node->right = node->right;
                        old_node->right->parent = old_node;
                    }
                    Transplant(node, old_node);
                    old_node->left = node->left;
                    old_node->left->parent = old_node;

                    old_node->color = node->color;
                }
                this->size -= 1;
                DestroyNode(node);
                if (old_node_color == BLACK)
                    DeleteFixup(sibling);

            }

            void DeleteNode(key_type key)
            {
                NodePtr node;
                node = SearchNode(this->root , key);
                if (node != this->nil)
                    DeleteNode(node);
            }


            void InsertNode(NodePtr node)
            {
                NodePtr child_copy;
                NodePtr child;

                child_copy = this->nil;
                child = this->root;

                while(child != this->nil)
                {
                    child_copy = child;
                    if (this->comparator(node->key , child->key))
                        child = child->left;
                    else
                        child = child->right;
                }
                node->parent = child_copy;
                if (child_copy == this->nil)
                    this->root = node;
                else if (this->comparator(node->key , child_copy->key))
                    child_copy->left = node;
                else
                    child_copy->right = node;
                node->left = this->nil;
                node->right = this->nil;
                node->color = RED;
                InserFixup(node);
            }

            void InsertNode(const key_type &key)
            {
                NodePtr node;

                node = CreateNode(key);
                InsertNode(node);
            }

            bool KeyExists(const Key_type &key) const
            {
                NodePtr node;

                node = SearchNode(this->root, key);
                return (node != this->nil);
            }


            NodePtr GetNode(const Key_type &key)
            {
                NodePtr node;
                node = SearchNode(this->root, key);
                return (node);
            }

            void ClearTree(void)
            {
                DeleteTree(this->root);
                this->root = this->nil;
            }


            void Swap(RBtree &tree)
            {
                std::swap(root, tree.root);
                std::swap(nil, tree.nil);
                std::swap(allocator, tree.allocator);
                std::swap(comparator, tree.comparator);
                std::swap(size, tree.size);
            }

            bool IsEmpty(void) const
            {
                return (this->root == this->nill)
            }

            size_type GetSize(void) const
            {
                return (this->size);
            }

            size_type GetMaxSize(void) const
            {
                return (this->alloactor.max_size());
            }


            NodePtr LowerBound(Key_type key)
            {
                NodePtr node = this->root;
                NodePtr best = this->nil;
            
                while(node != this->nil)
                {
                    if (comparator(node->key , key))
                        node = node->right;
                    else
                    {
                        if (best == this->nil || comparator(node->key , best->key))
                            best = node;
                        node = node->left;
                    }
                }
                return (best);
            }


            NodePtr LowerBound(Key_type key)
            {
                NodePtr node = this->root;
                NodePtr best = this->nil;
            
                while(node != this->nil)
                {
                    if (!comparator(key , node->key))
                        node = node->right;
                    else
                    {
                        if (best == this->nil || comparator(node->key , best->key))
                            best = node;
                        node = node->left;
                    }
                }
                return (best);
            }
            NodePtr GetNil(void) const {return (this->nil);}

            NodePtr GetRoot(void) const {return (this->root);}
            

        // helpers



            void Transplant(NodePtr u , NodePtr v)
            {
                if (u->parent == this->nil)
                    this->root = v;
                else if(u == v->parent->left)
                    u->parent->left = v;
                else
                    u->parent->right = v;
                v->parent = u->parent;
            }

            void DeleteFixup(NodePtr node)
            {
                NodePtr sibling;
                
                if (node == node->parent->left)
                {
                    sibling = node->parent->right;
                    if (sibling->color == RED)
                    {
                        sibling->color = BLACK;
                        node->parent->color = RED;
                        LeftRotate(node->parent);
                        sibling = node->parent->right;
                    }
                    if (sibling->right->color == BLACK && sibling->left->color == BLACK)
                    {
                        sibling->color = RED;
                        node =  node->parent;
                    }
                    else if (sibling->right->color == BLACK)
                    {
                        sibling->left->color = BLACK;
                        sibling->color = RED;
                        RightRotate(sibling);
                        sibling = node->parent->right;
                    }
                    else
                    {
                        sibling->color = node->parent->color;
                        node->parent->color = BLACK;
                        sibling->right->color = BLACK;
                        LeftRotate(node->parent);
                        node = this->root;
                    }
                }
                else
                {
                   sibling = node->parent->left;
                    if (sibling->color == RED)
                    {
                        sibling->color = BLACK;
                        node->parent->color = RED;
                        RightRotate(node->parent);
                        sibling = node->parent->left;
                    }
                    if (sibling->right->color == BLACK && sibling->left->color == BLACK)
                    {
                        sibling->color = RED;
                        node =  node->parent;
                    }
                    else if (sibling->left->color == BLACK)
                    {
                        sibling->right->color = BLACK;
                        sibling->color = RED:
                        LeftRotate(sibling);
                        sibling = node->parent->left;
                    }
                    else
                    {
                        sibling->color = node->parent->color;
                        node->parent->color = BLACK;
                        sibling->left->color = BLACK;
                        RightRotate(node->parent);
                        node = this->root;
                    }
                }
                node->color = BLACK;
            }

            void LeftRotate(NodePtr node)
            {
                NodePtr sibling;

                sibling = node->right;
                node->right = sibling->left;
                if (sibling->left != this->nil)
                    sibling->left->parent = node;
                sibling->parent = node->parent;
                if (node->parent == this->nil)
                    this->root = sibling;
                else if (node == node->parent->left)
                    node->parent->left = sibling;
                else
                    node->parent->right = sibling;
                sibling->left = node;
                node->parent = sibling;
            }

            void RightRotate(NodePtr node)
            {
                NodePtr sibling;

                sibling = node->left;
                node->left = sibling->right;
                if (sibling->right != this->nil)
                    sibling->right->parent = node;
                sibling->parent = node->parent;
                if (node->parent == this->nil)
                    this->root = sibling;
                else if (node == node->parent->left)
                    node->parent->left = sibling;
                else
                    node->parent->right = sibling;
                sibling->right = node;
                node->parent = sibling;
            }


            void InsertFixup(NodePtr node)
            {
                NodePtr parents_sibling;

                while(node->parent->color->RED)
                {
                    if (node->parent == node->parent->parent->left)
                    {
                        parents_sibling = node->parent->parent->right;
                        if (parents_sibling->color == RED)
                        {
                            parents_sibling->color = BLACK;
                            node->parent->color = BLACK;
                            node->parent->parent->color = RED;
                            node = node->parent->parent;
                        }
                        else
                        {
                            if (node = node->parent->right)
                            {
                                node = node->parent;
                                LeftRotate(node);
                            }
                            node->parent->color = BLACK;
                            node->parent->parent->color = RED;
                            RightRotate(node->parent->parent);
                        }
                    }
                    else 
                    {
                        parents_sibling = node->parent->parent->left;
                        if (parents_sibling->color == RED)
                        {
                            parents_sibling->color = BLACK;
                            node->parent->color = BLACK;
                            node->parent->parent->color = RED;
                            node = node->parent->parent;
                        }
                        else
                        {
                            if (node = node->parent->left)
                            {
                                node = node->parent;
                                RightRotate(node);
                            }
                            node->parent->color = BLACK;
                            node->parent->parent->color = RED;
                            LeftRotate(node->parent->parent);      
                        }
                    }
                }
                this->root->color = BLACK;
            }

            NodePtr CreateNode(void)
            {
                NodePtr node;

                node = this->allocator.allocate(1);
                this->allocator.construct(node, Key_type());
                return (node);
            }

            NodePtr CreateNode(const T &key)
            {
                NodePtr node;
                node = this->allocator.allocate(1);
                this->allocator.construct(node, key);
                this->size += 1;
                return (node);
            }

            void DestroyNode(NodePtr node)
            {
                this->allocator.destroy(node);
                this->allocator.deallocate(node, 1);
            }

            void DeleteTree(NodePtr node)
            {
                if (node != this->nil)
                {
                    DeleteTree(node->left);
                    DeleteTree(node->right);
                    DestroyNode(node);
                    this->size -= 1;
                }
            }


    };

};