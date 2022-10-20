#ifndef RB_TREE_HPP
#define RB_TREE_HPP

#include <iostream>
#include "../iterators/RBT_iterator.hpp"
#include "../iterators/reverse_iterator.hpp"
#include "../type_traits.../lexicographical&&comp.hpp"




namespace ft
{
	#define BLACK false
	#define RED true

	template<class T>
	struct TreeNode
	{
		bool		color;
		bool		is_nil;
		T			key;
		TreeNode	*left;
		TreeNode	*right;
		TreeNode	*parent;

		TreeNode(void) :
			color(BLACK),
			is_nil(false),

			left(NULL),
			right(NULL),
			parent(NULL)
		{}

		TreeNode(T k) :
			color(BLACK),
			is_nil(false),
			key(k),
			left(NULL),
			right(NULL),
			parent(NULL)
		{}
	};


	template <class T,
	class Comparator,
	class Allocator>
	class RBTree
	{
		public :

		typedef T KeyType;
		typedef ft::TreeNode<KeyType> *NodePointer;
		typedef Allocator allocator_type;
		typedef Comparator comparator_type;
		typedef T* pointer;
		typedef std::size_t size_type;

		typedef rbtree_iterator<KeyType, RBTree<KeyType, comparator_type, allocator_type> > iterator;
		typedef rbtree_iterator<const KeyType, RBTree<KeyType, comparator_type, allocator_type> > const_iterator;
		typedef ft::reverse_iterator<iterator> reverse_iterator;
		typedef ft::reverse_iterator<const_iterator> const_reverse_iterator;


		RBTree(void) :
			nil(CreateNode()),
			root(nil),
			allocator(allocator_type()),
			comparator(comparator_type()),
			size(0)
		{
		}


		RBTree(const comparator_type comp) :
			nil(CreateNode()),
			root(this->nil),
			allocator(allocator_type()),
			comparator(comp),
			size(0)
		{
			this->nil->is_nil = true;
		}

		/**
		 * Copy constructor
		 */

		RBTree(const RBTree &other)
		{
			this->size = 0;
			this->nil = CreateNode();
			this->nil->is_nil = true;
			this->allocator = other.allocator;
			this->comparator = other.comparator;
			this->root = CopyTree(other.root, other.nil, this->nil);
		}

		/**
		 * Copy operator
		 */

		const RBTree<T, Comparator, Allocator> &operator =(const RBTree<T, Comparator, Allocator>& tree)
		{
			DestroyNode(this->nil);
			DeleteTree(this->root);
			this->size = 0;
			this->nil = CreateNode();
			this->nil->is_nil = true;
			this->allocator = tree.allocator;
			this->comparator = tree.comparator;
			this->root = CopyTree(tree.root, tree.nil, this->nil);
			return (*this);
		}

		/**
		 * Destructor
		 */

		~RBTree(void)
		{
			DeleteTree(this->root);
			DestroyNode(this->nil);
		}





		NodePointer	Search(NodePointer node, const KeyType &key) const
		{
			while (node)
			{
				if (this->comparator(key, node->key))
					node = node->left;
				else if (this->comparator(node->key, key))
					node = node->right;
				else
					return node;
			}
			return (this->nil);
		}

		NodePointer	Minimum(NodePointer node) const
		{
			while (node != this->nil && node->left != this->nil)
				node = node->left;
			return (node);
		}

		NodePointer Maximum(NodePointer node) const
		{
			while (node != this->nil && node->right != this->nil)
				node = node->right;
			return (node);
		}

		NodePointer Predecessor(NodePointer node)
		{
			NodePointer	parent;

			if (node == this->nil)
				return (Minimum(this->root));
			if (node->left != this->nil)
				return (Maximum(node->left));
			parent = node->parent;
			while (parent != this->nil && node == parent->left)
			{
				node = parent;
				parent = parent->parent;
			}
			return (parent);
		}

		NodePointer Successor(NodePointer node)
		{
			NodePointer	parent;

			if (node == this->nil)
				return (Maximum(this->root));
			if (node->right != this->nil)
				return (Minimum(node->right));
			parent = node->parent;
			while (parent != this->nil && node == parent->right)
			{
				node = parent;
				parent = parent->parent;
			}
			return (parent);
		}


		iterator begin(void)	{return (iterator(Minimum(this->root), root));}
		const_iterator begin(void) const	{return (const_iterator(Minimum(this->root), root));} 

		iterator end(void)	{return (iterator(this->nil, root));}
		const_iterator end(void) const	{return (const_iterator(this->nil, root));}

		reverse_iterator rbegin(void)	{return (reverse_iterator(end()));}
		const_reverse_iterator rbegin(void) const	{return (const_reverse_iterator(end()));}

		reverse_iterator rend(void)	{return (reverse_iterator(begin()));}
		const_reverse_iterator rend(void) const	{return (const_reverse_iterator(begin()));}





	

		void	Delete(NodePointer node)
		{
			NodePointer	old_node;
			NodePointer	sibling;
			bool old_node_original_color;

			old_node = node;
			old_node_original_color = old_node->color;
			if (node->left == this->nil)
			{
				sibling = node->right;
				Transplant(node, node->right);
			}
			else if (node->right == this->nil)
			{
				sibling = node->left;
				Transplant(node, node->left);
			}
			else
			{
				old_node = Minimum(node->right);
				old_node_original_color = old_node->color;
				sibling = old_node->right;
				if (old_node->parent == node)
					sibling->parent = old_node;
				else
				{
					Transplant(old_node, old_node->right);
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
			if (old_node_original_color == BLACK)
				DeleteFixup(sibling);
		}

		/**
		 * Delete a node corresponding to a given key from the tree
		 */

		void	Delete(KeyType key)
		{
			NodePointer	node;

			node = Search(this->root, key);
			if (node != this->nil)
				Delete(node);
		}

		/**
		 * insert node to tree
		 */

		void	InsertNode(NodePointer node)
		{
			NodePointer	child_cpy;
			NodePointer	child;

			child_cpy = this->nil;
			child = this->root;
			while (child != this->nil)
			{
				child_cpy = child;
	//			if (node->key < child->key)
				if (this->comparator(node->key, child->key))
					child = child->left;
				else
					child = child->right;
			}
			node->parent = child_cpy;
			if (child_cpy == this->nil)
				this->root = node;
			else if (this->comparator(node->key, child_cpy->key))
				child_cpy->left = node;
			else
				child_cpy->right = node;
			node->left = this->nil;
			node->right = this->nil;
			node->color = RED;
			InsertFixup(node);
		}

		/**
		 * Create a new node from value and insert it to tree
		 */

		void	InsertNode(const KeyType &key)
		{
			NodePointer node;

			node = CreateNode(key);
			InsertNode(node);
		}

		/**
		 * Check if key is in the tree
		 */

		bool	KeyExists(const KeyType &key) const
		{
			NodePointer	node;

			node = Search(this->root, key);
			return (node != this->nil);
		}

		/**
		 * Get node corresponding to key
		 */

		NodePointer	GetNode(const KeyType &key)
		{
			NodePointer	node;

			node = Search(this->root, key);
			return (node);
		}

		/**
		 * Clear the tree
		 */

		void	Clear(void)
		{
			DeleteTree(this->root);
			this->root = this->nil;
		}

		/**
		 * Swap two trees
		 */

		void	Swap(RBTree &tree)
		{
			std::swap(root, tree.root);
			std::swap(nil, tree.nil);
			std::swap(allocator, tree.allocator);
			std::swap(comparator, tree.comparator);
			std::swap(size, tree.size);
		}

		/**
		 * Is the tree empty?
		 */

		bool	IsEmpty(void) const
		{
			return (this->root == this->nil);
		}

		/**
		 * Get the number of nodes in the tree
		 */

		size_type	GetSize(void) const
		{
			return (this->size);
		}

		/**
		 * Maximum number of nodes in the tree
		 */

		size_type	GetMaxSize(void) const
		{
			return (this->allocator.max_size());
		}

		/**
		 * Lower bound of the tree
		 */

		NodePointer	LowerBound(KeyType key)
		{
			NodePointer	node = this->root;
			NodePointer best = this->nil;

			while (node != this->nil)
			{
				if (comparator(node->key, key))
					node = node->right;
				else
				{
					if (best == this->nil || comparator(node->key, best->key))
						best = node;
					node = node->left;
				}
			}
			return (best);
		}

		/**
		 * Upper bound of the tree
		 */

		NodePointer	UpperBound(KeyType key)
		{
			NodePointer	node = this->root;
			NodePointer best = this->nil;

			while (node != this->nil)
			{
				if (!comparator(key, node->key))
					node = node->right;
				else
				{
					if (best == this->nil || comparator(node->key, best->key))
						best = node;
					node = node->left;
				}
			}
			return (best);
		}

		/**
		 * Get the nil node
		 */

		NodePointer	GetNil(void) const
		{
			return (this->nil);
		}

		/**
		 * Get the root node
		 */

		NodePointer	GetRoot(void) const
		{
			return (this->root);
		}

		private :

		/**
		 * Defining class members
		 */

		NodePointer		nil;
		NodePointer		root;
		allocator_type	allocator;
		comparator_type	comparator;
		size_type		size;

		/**
		 * Helper function
		 * Transplant is used in conjonction of Delete
		 * It replace the subtree rooted at node u
		 * 	with the the subree rooted at node v.
		 */

		void	Transplant(NodePointer u, NodePointer v)
		{
			if (u->parent == this->nil)	// if u is the root
				this->root = v;
			else if (u == u->parent->left) // if u is the left child of its parent
				u->parent->left = v;
			else // if u is the right child of its parent
				u->parent->right = v;
			v->parent = u->parent;
		}

		/**
		 * Helper function
		 * DeleteFixup is used in conjonction of Delete
		 * It will fix problems in the tree after the delete.
		 */

		void	DeleteFixup(NodePointer node)
		{
			NodePointer	sibling;

			while (node != this->root && node->color == BLACK)
			{
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
					if (sibling->left->color == BLACK
					&& sibling->right->color == BLACK)
					{
						sibling->color = RED;
						node = node->parent;
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
					if (sibling->right->color == BLACK
					&& sibling->left->color == BLACK)
					{
						sibling->color = RED;
						node = node->parent;
					}
					else if (sibling->left->color == BLACK)
					{
						sibling->right->color = BLACK;
						sibling->color = RED;
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
			}
			node->color = BLACK;
		}

		/**
		 * Helper function to rotate the tree to the left
		 */

		void	LeftRotate(NodePointer node)
		{
			NodePointer	sibling;

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

		/**
		 * Helper function to rotate the tree to the right
		 */

		void	RightRotate(NodePointer node)
		{
			NodePointer	sibling;

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

		/**
		 * Helper function to insert a node to the tree
		 */

		void	InsertFixup(NodePointer node)
		{
			NodePointer parents_sibling;

			while (node->parent->color == RED)
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
						if (node == node->parent->right)
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
						if (node == node->parent->left)
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

		/**
		 * Create new node
		 */

		NodePointer CreateNode(void)
		{
			NodePointer	node;

			node = this->allocator.allocate(1);
			this->allocator.construct(node, KeyType());
			return (node);
		}

		NodePointer CreateNode(const T &key)
		{
			NodePointer	node;

			node = this->allocator.allocate(1);
			this->allocator.construct(node, key);
			this->size += 1;
			return (node);
		}

		/**
		 * Destroy node
		 */

		void	DestroyNode(NodePointer node)
		{
			this->allocator.destroy(node);
			this->allocator.deallocate(node, 1);
		}

		/**
		 * Delete all node in the tree
		 */

		void	DeleteTree(NodePointer node)
		{
			if (node != this->nil)
			{
				DeleteTree(node->left);
				DeleteTree(node->right);
				DestroyNode(node);
				this->size -= 1;
			}
		}

		/**
		 * Copy the tree
		 */

		NodePointer	CopyTree(NodePointer node, NodePointer other_nil, NodePointer parent)
		{
			NodePointer	new_node;

			if (node == other_nil)
				return (this->nil);
			new_node = CreateNode(node->key);
			new_node->parent = parent;
			new_node->is_nil = node->is_nil;
			new_node->color = node->color;
			new_node->left = CopyTree(node->left, other_nil, new_node);
			new_node->right = CopyTree(node->right, other_nil, new_node);
			return (new_node);
		}
	};

	template<class RBTree>
	bool operator<(const RBTree& lhs, const RBTree& rhs){
		return (ft::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end()));
	}

	template<class RBTree>
	bool operator>(const RBTree& lhs, const RBTree& rhs){
		return (lhs < rhs);
	}

	template<class RBTree>
	bool operator==(const RBTree& lhs, const RBTree& rhs){
		return (lhs.GetSize() == rhs.GetSize() && ft::equal(lhs.begin(), lhs.end(), rhs.begin()));
	}

}

#endif