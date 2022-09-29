#pragma once


#include "./iterator_traits.hpp"

namespace ft
{
	template<class T>
	struct TreeNode;
	template<class T, class Comparator, class Allocator>
	class RBTree;

	template<
		class T,
		class RBTree,
		class Category = ft::bidirectional_iterator_tag,
		class Distance = ptrdiff_t,
		class Pointer = T*,
		class Reference = T&>
	struct rbtree_iterator : public ft::iterator<T, ft::bidirectional_iterator_tag>
	{
		typedef typename rbtree_iterator::difference_type difference_type;
		typedef typename rbtree_iterator::value_type value_type;
		typedef typename rbtree_iterator::pointer pointer;
		typedef typename rbtree_iterator::reference reference;
		typedef typename rbtree_iterator::iterator_category iterator_category;

		typedef typename RBTree::NodePointer	NodePtr;

		NodePtr			node_ptr;
		NodePtr			root_ptr;

		rbtree_iterator() : node_ptr(0), root_ptr(0) {}
		rbtree_iterator(NodePtr node, NodePtr root)	: node_ptr(node), root_ptr(root) {}
		rbtree_iterator(const rbtree_iterator &it)	: node_ptr(it.node_ptr)	, root_ptr(it.root_ptr)	{}
		~rbtree_iterator() {}

		rbtree_iterator &operator=(const rbtree_iterator &rhs)
		{
			node_ptr = rhs.node_ptr;
			root_ptr = rhs.root_ptr;
			return (*this);
		}
		reference operator*() const	{return (node_ptr->key);}

		pointer operator->() const	{return &(operator*());}

		rbtree_iterator &operator++()
		{
			if (node_ptr->is_nil)
			{
				node_ptr = root_ptr;
				while (!node_ptr->left->is_nil)
					node_ptr = node_ptr->left;
			}
			else if (!node_ptr->right->is_nil)
			{
				node_ptr = node_ptr->right;
				while (!node_ptr->left->is_nil)
					node_ptr = node_ptr->left;
			}
			else
			{
				NodePtr parent = node_ptr->parent;
				while (!parent->is_nil && node_ptr == parent->right)
				{
					node_ptr = parent;
					parent = parent->parent;
				}
				node_ptr = parent;
			}
			return (*this);
		}

		rbtree_iterator operator++(int)
		{
			rbtree_iterator tmp(*this);
			++*this;
			return (tmp);
		}

		rbtree_iterator &operator--()
		{
			if (node_ptr->is_nil)
			{
				node_ptr = root_ptr;
				while (!node_ptr->right->is_nil)
					node_ptr = node_ptr->right;
			}
			else if (!node_ptr->left->is_nil)
			{
				node_ptr = node_ptr->left;
				while (!node_ptr->right->is_nil)
					node_ptr = node_ptr->right;
			}
			else
			{
				NodePtr parent = node_ptr->parent;
				while (!parent->is_nil && node_ptr == parent->left)
				{
					node_ptr = parent;
					parent = parent->parent;
				}
				node_ptr = parent;
			}
			return (*this);
		}

		rbtree_iterator operator--(int)
		{
			rbtree_iterator tmp(*this);
			--*this;
			return (tmp);
		}
		
		bool operator==(const rbtree_iterator &rhs) const	{return (node_ptr == rhs.node_ptr);}

		bool operator!=(const rbtree_iterator &rhs) const	{return (node_ptr != rhs.node_ptr);}

		operator rbtree_iterator<const T, RBTree>() const	{return (rbtree_iterator<const T, RBTree>(node_ptr, root_ptr));}



		rbtree_iterator successor (void)
		{
			rbtree_iterator	tmp(*this);

			tmp++;
			return (tmp);
		}

		rbtree_iterator predecessor (void)
		{
			rbtree_iterator	tmp(*this);

			tmp--;
			return (tmp);
		}



	};

	template <class Iterator>
	typename Iterator::difference_type
	distance (const Iterator &first,
	const Iterator &last)
	{
		typename Iterator::difference_type	n = 0;
		Iterator	tmp(first);

		// while (tmp != last)
		// {
		// 	++tmp;
		// 	++n;
		// }
		for (; tmp != last ; ++tmp , ++n);
		return (n);
	}
} // namespace ft
