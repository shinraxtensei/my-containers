#pragma once 


#include <functional>
#include <memory>
#include "../type_traits.../pair.hpp"
#include "RB_tree.hpp"
#include <iostream>


namespace ft
{
    template <class T, class Compare = std::less<T> , class Allocator = std::allocator<T> >
    class set
    {
        public:
            typedef T key_type;
            typedef T value_type;
            typedef Compare key_compare;
            typedef Compare value_compare;
            typedef Allocator allocator_type;
            typedef typename allocator_type::reference reference;
            typedef typename allocator_type::const_reference const_reference;
            typedef typename allocator_type::pointer pointer;
            typedef typename allocator_type::const_pointer const_pointer;

		    typedef typename Allocator::template rebind<ft::TreeNode<value_type> >::other node_allocator_type;
		    typedef RBTree<value_type, value_compare, node_allocator_type> rbtree;
           
            typedef typename rbtree::iterator iterator;
            typedef typename rbtree::const_iterator const_iterator;
            typedef typename rbtree::reverse_iterator reverse_iterator;
            typedef typename rbtree::const_reverse_iterator const_reverse_iterator;
            typedef std::size_t size_type;
            typedef std::ptrdiff_t difference_type;

		private :

		    allocator_type	_allocator;
		    key_compare		_key_compare;
		    value_compare	_value_compare;
		    rbtree			_rbtree;
    
        public:

        explicit set (const key_compare &comp = key_compare() , const allocator_type &alloc = allocator_type())
        : _allocator(alloc), _key_compare(comp) , _value_compare(comp) , _rbtree(_value_compare){}

        template<class InputIterator>
        set (InputIterator first, InputIterator last , const key_compare &comp = key_compare(), const allocator_type &alloc = allocator_type())
        : _allocator(alloc), _key_compare(comp), _value_compare(comp) , _rbtree(_value_compare)
        {
            this->insert(first, last);
        }


        set (const set &rhs) 
        : _allocator(rhs._allocator) , _key_compare(rhs._key_compare) , _value_compare(rhs._value_compare) , _rbtree(rhs._rbtree) {}



        ~set() {}


        set& operator = ( const set& rhs)
        {
            if (this != &rhs)
            {
                this->_allocator = rhs._allocator;
                this->_key_compare = rhs._key_compare;
                this->_value_compare = rhs._value_compare;
                this->_rbtree = rhs._rbtree;
            }
            return (*this);
        }


        iterator begin(void) {return (this->_rbtree.begin());}
        const_iterator begin(void)const {return (this->_rbtree.begin());}

        iterator end(void) {return (this->_rbtree.end());}
        const_iterator end(void)const {return (this->_rbtree.end());}

        reverse_iterator rbegin(void) {return (this->_rbtree.rbegin());}
        const_reverse_iterator rbegin(void) const {return (this->_rbtree.rbegin());}

        reverse_iterator rend(void) {return (this->_rbtree.rend());}
        const_reverse_iterator rend(void) const {return (this->_rbtree.rend());}




        bool empty(void) const {return (this->_rbtree.IsEmpty());}

        size_type size(void) const {return (this->_rbtree.GetSize());}

        size_type max_size(void) const {return (this->_rbtree.GetMaxSize());}
    
    
    
		ft::pair<iterator, bool> insert(const value_type& value)
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


    	iterator insert(iterator position, const value_type& value)
		{
			static_cast<void>(position);
			return (this->insert(value).first);
		}

		template<class InputIterator>
		void insert(InputIterator first, InputIterator last)
		{
			for (; first != last; ++first)
				this->insert(*first);
		}
    

        void erase(iterator pos)
        {
            this->_rbtree.Delete(*pos);
        }
    
        size_type erase (const key_type& key)
        {
            if (this->_rbtree.KeyExists(key))
            {
                this->_rbtree.Delete(key);
                return (1);
            }
            else
                return (0);
        }

        void erase(iterator first , iterator last)
        {
            for (iterator next; first != last; first = next)
            {
                next= first.successor();
                this->erase(first);
            }
        }

        void swap(set &rhs)
        {
            std::swap(this->_allocator , rhs._allocator);
            std::swap(this->_key_compare , rhs._key_compare);
            std::swap(this->_value_compare , rhs._value_compare);
            this->_rbtree.Swap(rhs._rbtree);
        }
    

        void clear(void)
        {
            this->_rbtree.Clear();
        }
    
        key_compare key_comp(void) const {return (this->_key_compare) ;}
        value_compare value_comp(void) const {return (this->_value_compare);}



        iterator find(const key_type& key)
        {
            if (this->_rbtree.KeyExists(key))
            {
                struct ft::TreeNode<value_type>* node = this->_rbtree.GetNode(key);
                return (iterator(node , _rbtree.GetRoot()));
            }
            else
                return(this->end());
        }

        const_iterator find(const key_type& key) const
        {
            if (this->_rbtree.KeyExists(key))
            {
                struct ft::TreeNode<value_type>* node = this->_rbtree.GetNode(key);
                return (const_iterator(node , _rbtree.GetRoot()));
            }
            else
                return(this->end());
        }

        size_type count(const key_type& key) const
        {
            if (this->_rbtree.KeyExists(key))
                return (1);
            else
                return (0);
        }


        iterator lower_bound(const key_type& key)    {return (iterator(this->_rbtree.LowerBound(key), _rbtree.GetRoot()));}
        const_iterator lower_bound(const key_type& key)const  {return (const_iterator(this->_rbtree.LowerBound(key), _rbtree.GetRoot()));}

        iterator upper_bound(const key_type& key)    {return (iterator(this->_rbtree.UpperBound(key), _rbtree.GetRoot()));}   
        const_iterator upper_bound(const key_type& key)const    {return (const_iterator(this->_rbtree.UpperBound(key), _rbtree.GetRoot()));}   

    

        ft::pair<iterator, iterator> equal_range(const key_type& key)
        {
            return (ft::make_pair(this->lower_bound(key) , this->upper_bound(key)));

        }

        ft::pair<const_iterator, const_iterator> equal_range(const key_type& key) const
        {
            return (ft::make_pair(this->lower_bound(key) , this->upper_bound(key)));

        }

        allocator_type get_allocator() const    {return (this->_allocator);}


   		template<class _Key, class _Compare, class _Alloc>
		friend bool operator==(const set<_Key, _Compare, _Alloc> & lhs,
				const set<_Key, _Compare, _Alloc>& rhs);

  		template<class _Key, class _Compare, class _Alloc>
		friend bool operator<(const set<_Key, _Compare, _Alloc> & lhs,
				const set<_Key, _Compare, _Alloc>& rhs);
    };




	template<class Key, class Compare, class Alloc>
	bool operator==(const set<Key, Compare, Alloc> & lhs, const set<Key, Compare, Alloc> & rhs){
			return (lhs._rbtree == rhs._rbtree);
	}

	template<class Key, class Compare, class Alloc>
	bool operator!=(const set<Key, Compare, Alloc> & lhs, const set<Key, Compare, Alloc> & rhs){
			return !(lhs == rhs);
	}

	template<class Key, class Compare, class Alloc>
	bool operator<(const set<Key, Compare, Alloc> & lhs, const set<Key, Compare, Alloc> & rhs){
			return (lhs._rbtree < rhs._rbtree);
	}

	template<class Key, class Compare, class Alloc>
	bool operator>(const set<Key, Compare, Alloc> & lhs, const set<Key, Compare, Alloc> & rhs){
			return (rhs < lhs);
	}

	template<class Key, class Compare, class Alloc>
	bool operator<=(const set<Key, Compare, Alloc> & lhs, const set<Key, Compare, Alloc> & rhs){
			return !(lhs > rhs);
	}

	template<class Key, class Compare, class Alloc>
	bool operator>=(const set<Key, Compare, Alloc> & lhs, const set<Key, Compare, Alloc> & rhs){
			return !(lhs < rhs);
	}

	template<class Key, class Compare, class Alloc>
	void swap(set<Key, Compare, Alloc> & lhs, set<Key, Compare, Alloc> & rhs){
			lhs.swap(rhs);
	}
    
}