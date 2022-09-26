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
    };

};