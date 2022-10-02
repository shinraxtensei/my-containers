#pragma once

#include <functional>
#include <memory>
#include "../iterators/RBT_iterator.hpp"
#include "../type_traits.../pair.hpp"
#include "../iterators/RBT_iterator.hpp"
#include "../containers/RB_tree.hpp"
#include "../type_traits.../enable_if.hpp"
#include "../type_traits.../is_ingeral.hpp"
#include "../type_traits.../lexicographical&&comp.hpp"
#include "../type_traits.../pair.hpp"

namespace ft
{
	template <
		class Key,
		class T,
		class Compare = std::less<Key>,
		class Allocator = std::allocator<ft::pair<const Key, T> > >
	class map
	{
		public :

		typedef Key key_type;
		typedef T mapped_type;
		typedef ft::pair<const key_type, mapped_type> value_type;
		typedef Compare key_compare;

		class value_compare
		{
			template<class T1, class T2, class T3>
			friend class RBTree;
			template<class T1, class T2, class T3, class T4>
			friend class map;

			protected :

			Compare	_comp;
			value_compare(const Compare &c = Compare()) : _comp(c) {}

			public :


			bool operator()(const value_type& x, const value_type& y) const
			{
				return (_comp(x.first, y.first));
			}
		};

		typedef Allocator allocator_type;
		typedef value_type& reference;
		typedef const value_type& const_reference;
		typedef typename Allocator::pointer pointer;
		typedef typename Allocator::const_pointer const_pointer;

		typedef typename Allocator::template rebind<ft::TreeNode<value_type> >::other node_allocator_type;
		typedef ft::RBTree<value_type, value_compare, node_allocator_type> rbtree;

		typedef typename rbtree::iterator iterator;
		typedef typename rbtree::const_iterator const_iterator;
		typedef typename rbtree::reverse_iterator reverse_iterator;
		typedef typename rbtree::const_reverse_iterator const_reverse_iterator;

		typedef std::size_t size_type;
		typedef std::ptrdiff_t difference_type;


		private : 
		// variable
		allocator_type	_allocator;
		key_compare		_key_compare;
		value_compare	_value_compare;
		rbtree			_rbtree;

		public :

		/********************************************
		 * 				COPLIEN FORM				*
		 ********************************************/

		/**
		 * default (1)
		 */

		explicit map(const key_compare& comp = key_compare(),
			const allocator_type& alloc = allocator_type()) :
			_allocator(alloc),
			_key_compare(comp),
			_value_compare(value_compare(comp)),
			_rbtree(_value_compare)
		{
		}

		/**
		 * range (2)
		 */

		template<class InputIterator>
		map(InputIterator first, InputIterator last,
			const key_compare& comp = key_compare(),
			const allocator_type& alloc = allocator_type()) :
			_allocator(alloc),
			_key_compare(comp),
			_value_compare(value_compare(comp)),
			_rbtree(_value_compare)
		{
			this->insert(first, last);
		}

		/**
		 * copy (3)
		 */

		map(const map& x) :
			_allocator(x._allocator),
			_key_compare(x._key_compare),
			_value_compare(x._value_compare),
			_rbtree(x._rbtree)
		{
		}

		/**
		 * destructor
		 */

		~map(void)
		{
		}

		/**
		 * operator =
		 */

		map& operator=(const map& other)
		{
			if (this != &other)
			{
				this->_allocator = other._allocator;
				this->_key_compare = other._key_compare;
				this->_value_compare = other._value_compare;
				this->_rbtree = other._rbtree;
			}
			return (*this);
		}

		/********************************************
		 * 				ITERATORS					*
		 ********************************************/

		/**
		 * begin
		 */

		iterator begin(void)
		{
			return (this->_rbtree.begin());
		} 

		const_iterator begin(void) const
		{
			return (this->_rbtree.begin());
		}

		/**
		 * end
		 */

		iterator end(void)
		{
			return (this->_rbtree.end());
		}

		const_iterator end(void) const
		{
			return (this->_rbtree.end());
		}

		/**
		 * rbegin
		 */

		reverse_iterator rbegin(void)
		{
			return (this->_rbtree.rbegin());
		}

		const_reverse_iterator rbegin(void) const
		{
			return (this->_rbtree.rbegin());
		}

		/**
		 * rend
		 */

		reverse_iterator rend(void)
		{
			return (this->_rbtree.rend());
		}

		const_reverse_iterator rend(void) const
		{
			return (this->_rbtree.rend());
		}

		/********************************************
		 * 				CAPACITY					*
		 ********************************************/

		/**
		 * empty
		 */

		bool empty(void) const
		{
			return (this->_rbtree.IsEmpty());
		}

		/**
		 * size
		 */

		size_type size(void) const
		{
			return (this->_rbtree.GetSize());
		}

		/**
		 * max_size
		 */

		size_type max_size(void) const
		{
			return (this->_rbtree.GetMaxSize());
		}

		/********************************************
		 * 				ELEMENT ACCESS				*
		 ********************************************/

		/**
		 * operator[]
		 */

		mapped_type& operator[] (const key_type& key)
		{
			iterator tmp = this->find(key);

			if (tmp == this->end())
				return (this->insert(ft::make_pair(key, mapped_type())).first->second);
			return ((*tmp).second);
		}

		/********************************************
		 * 				MODIFIERS					*
		 ********************************************/

		/**
		 * insert (1)
		 * single element
		 */

		ft::pair<iterator, bool> insert (const value_type& value)
		{
			if (this->_rbtree.KeyExists(value))
			{
				struct ft::TreeNode<value_type>* node = this->_rbtree.GetNode(value);
				return (ft::pair<iterator, bool>(iterator(node, _rbtree.GetRoot()), false));
			}
			else
			{
				this->_rbtree.InsertNode(value);
				struct ft::TreeNode<value_type>* node = this->_rbtree.GetNode(value);
				return (ft::pair<iterator, bool>(iterator(node, _rbtree.GetRoot()), true));
			}
		}

		/**
		 * insert (2)
		 * with hint
		 */

		iterator insert (iterator position, const value_type& value)
		{
			static_cast<void>(position);
			return (this->insert(value).first);
		}

		/**
		 * insert (3)
		 * range
		 */

		template<class InputIterator>
		void insert(InputIterator first, InputIterator last)
		{
			for (; first != last; ++first)
				this->insert(*first);
		}

		/**
		 * erase (1)
		 * from iterator
		 */

		void erase(iterator position)
		{
			this->_rbtree.Delete(*position);
		}

		/**
		 * erase (2)
		 * from key
		 */

		size_type erase(const key_type& key)
		{
			if (this->_rbtree.KeyExists(ft::make_pair(key, mapped_type())))
			{
				this->_rbtree.Delete(this->_rbtree.GetNode(ft::make_pair(key, mapped_type())));
				return (1);
			}
			else
				return (0);
		}

		/**
		 * erase (3)
		 * range
		 */

		void erase(iterator first, iterator last)
		{
			for (iterator next = first; first != last; first = next) {
				next++;
				this->_rbtree.Delete(*first);
			}
		}

		/**
		 * swap
		 */

		void swap(map& x)
		{
			std::swap(this->_allocator, x._allocator);
			std::swap(this->_key_compare, x._key_compare);
			std::swap(this->_value_compare, x._value_compare);
			this->_rbtree.Swap(x._rbtree);
		}

		/**
		 * clear
		 */

		void clear(void)
		{
			this->_rbtree.Clear();
		}

		/********************************************
		 * 				OBSERVERS					*
		 ********************************************/

		/**
		 * key_comp
		 */

		key_compare key_comp(void) const
		{
			return (this->_key_compare);
		}

		/**
		 * value_comp
		 */

		value_compare value_comp(void) const
		{
			return (this->_value_compare);
		}

		/********************************************
		 * 				OPERATIONS					*
		 ********************************************/

		/**
		 * find (1)
		 */

		iterator find(const key_type& key)
		{
			if (this->_rbtree.KeyExists(ft::make_pair(key, mapped_type())))
				return (iterator(this->_rbtree.GetNode(ft::make_pair(key, mapped_type())), _rbtree.GetRoot()));
			else
				return (this->end());
		}

		/**
		 * find (2)
		 * const
		 */

		const_iterator find(const key_type& key) const
		{
			if (this->_rbtree.KeyExists(ft::make_pair(key, mapped_type())))
				return (const_iterator(this->_rbtree.GetNode(ft::make_pair(key, mapped_type())), _rbtree.GetRoot()));
			else
				return (this->end());
		}

		/**
		 * count
		 */

		size_type count(const key_type& key) const
		{
			if (this->_rbtree.KeyExists(ft::make_pair(key, mapped_type())))
				return (1);
			else
				return (0);
		}

		/**
		 * lower_bound (1)
		 */

		iterator lower_bound(const key_type& key)
		{
			return (iterator(this->_rbtree.LowerBound(value_type(key, mapped_type())), _rbtree.GetRoot()));
		}

		/**
		 * lower_bound (2)
		 * const
		 */

		const_iterator lower_bound(const key_type& key) const
		{
			return (const_iterator(this->_rbtree.LowerBound(value_type(key, mapped_type())), _rbtree.GetRoot()));
		}

		/**
		 * upper_bound (1)
		 */

		iterator upper_bound(const key_type& key)
		{
			return (iterator(this->_rbtree.UpperBound(value_type(key, mapped_type())), _rbtree.GetRoot()));
		}

		/**
		 * upper_bound (2)
		 * const
		 */

		const_iterator upper_bound(const key_type& key) const
		{
			return (const_iterator(this->_rbtree.UpperBound(value_type(key, mapped_type())), _rbtree.GetRoot()));
		}

		/**
		 * equal_range (1)
		 */

		pair <iterator, iterator> equal_range(const key_type& key)
		{
			return (ft::make_pair(lower_bound(key), upper_bound(key)));
		}

		/**
		 * equal_range (2)
		 * const
		 */

		pair <const_iterator, const_iterator> equal_range(const key_type& key) const
		{
			return (ft::make_pair(lower_bound(key), upper_bound(key)));
		}

		/********************************************
		 * 				ALLOCATOR					*
		 ********************************************/

		/**
		 * return allocator
		 */

		allocator_type get_allocator(void) const
		{
			return (this->_allocator);
		}

		/********************************************
		 * 				COMPARAISON					*
		 ********************************************/

		template<class _Key, class _T, class _Compare, class _Alloc>
		friend bool operator==(const map<_Key, _T, _Compare, _Alloc> & lhs,
				const map<_Key, _T, _Compare, _Alloc>& rhs);

		template<class _Key, class _T, class _Compare, class _Alloc>
		friend bool operator<(const map<_Key, _T, _Compare, _Alloc> & lhs,
				const map<_Key, _T, _Compare, _Alloc>& rhs);
	};

	template<class Key, class T, class Compare, class Alloc>
	bool operator==(const map<Key, T, Compare, Alloc> & lhs, const map<Key, T, Compare, Alloc> & rhs){
			return (lhs._rbtree == rhs._rbtree); 
	}

	template<class Key, class T, class Compare, class Alloc>
	bool operator!=(const map<Key, T, Compare, Alloc> & lhs, const map<Key, T, Compare, Alloc> & rhs){
			return !(lhs == rhs); 
	}

	template<class Key, class T, class Compare, class Alloc>
	bool operator<(const map<Key, T, Compare, Alloc> & lhs, const map<Key, T, Compare, Alloc> & rhs){
			return (lhs._rbtree < rhs._rbtree);
	}

	template<class Key, class T, class Compare, class Alloc>
	bool operator>(const map<Key, T, Compare, Alloc> & lhs, const map<Key, T, Compare, Alloc> & rhs){
			return (rhs < lhs);
	}

	template<class Key, class T, class Compare, class Alloc>
	bool operator<=(const map<Key, T, Compare, Alloc> & lhs, const map<Key, T, Compare, Alloc> & rhs){
			return !(lhs > rhs);
	}

	template<class Key, class T, class Compare, class Alloc>
	bool operator>=(const map<Key, T, Compare, Alloc> & lhs, const map<Key, T, Compare, Alloc> & rhs){
			return !(lhs < rhs);
	}

	template<class Key, class T, class Compare, class Alloc>
	void swap(map<Key, T, Compare, Alloc> & lhs, map<Key, T, Compare, Alloc> & rhs){
			lhs.swap(rhs);
	}
} // namespace ft