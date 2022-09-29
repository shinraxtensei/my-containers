#pragma once

#include <functional>
#include <memory>
#include "../type_traits.../pair.hpp"
#include "../iterators/RBT_iterator.hpp"

namespace ft
{

    template <class Key, class T , class Compare = std::less<Key> , class Allocator = std::allocator<ft::pair<const Key , T> > >
    class map
    {
        public:
            typedef Key key_type;
            typedef T mapped_type;
            typedef ft::pair<const key_type , mapped_type> value_type;
            typedef Compare key_compare;




            class value_compare
            {
                template <class T1,class T2,class T3>
                friend class RBTree;
                template <class T1,class T2,class T3>
                friend class map;

                protected:
                    Compare _comp;
                    value_compare(const Compare&c = Compare()); : _comp(c){}
                public:
                    bool operator()(const value_type& lhs, const value_type& rhs)
                    {
                        return (_comp(lhs.first, rhs.first));
                    }
            };

            typedef Allocator allocator_type;
            typedef value_type& reference;
            typedef const value_type& const_reference;
            typedef typename Allocator::pointer pointer;
            typedef typename Allocator::const_pointer const_pointer;

            typedef typename Allocator::template rebind<ft::TreeNode<value_type> >::other node_allocator_type;
            typedef RBTree<value_type , value_compare , node_allocator_type> rbtree;

            typedef typename rbtree::iterator iterator;
            typedef typename rbtree::const_iterator const_iterator;
            typedef typename rbtree::reverse_iterator reverse_iterator;
            typedef typename rbtree::const_reverse_iterator const_reverse_iterator;

            typedef std::size_t size_type;
            typedef std::ptrdiff_t difference_type;

        private:
            allocator_type _allocator;
            key_compare _key_compare;
            value_compare _value_compare;
            rbtree _rbtree;

        public:


            explicit map(const key_compare & comp = key_compare(), const allocator_type& alloc = allocator_type())
            : _allocator(alloc) , _key_compare(comp) , _value_compare(value_compare(comp)), _rbtree(_value_compare) {}



            template<class InputIterator>
            map(InputIterator first, InputIterator last,
            const key_compare & comp = key_compare(), const allocator_type& alloc = allocator_type())
            : _allocator(alloc) , _key_compare(comp) ,_value_compare(value_compare(comp)), _rbtree(_value_compare) 
            {this->insert(first ,last); }

            map(const map& rhs): _allocator(rhs._allocator) , _key_compare(rhs._key_compare) , _value_compare(rhs._value_compare) , _rbtree(rhs._rbtree) {}

    
            ~map(void) {}


            map& operator= (const map& rhs)
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


            iterator begin(void)  {return (this->_rbtree.begin());}
            const_iterator begin(void) const {return (this->_rbtree.begin());}

            iterator end(void)  {return (this->_rbtree.end());}
            const_iterator end(void) const {return (this->_rbtree.end());}   

            reverse_iterator rbegin(void) {return (this->_rbtree.rbegin());}
            consnt_reverse_iterator rbegin(void)const {return (this->_rbtree.rbegin());}

            reverse_iterator rend(void) {return (this->_rbtree.rend());}
            consnt_reverse_iterator rend(void)const {return (this->_rbtree.rend());}


            bool empty(void) const {return (this->_rbtree.IsEmpty());}
            size_type size(void) const {return (this->_rbtree.GetSize());}
            size_type max_size(void) const {return (this->_rbtree.GetMaxSize());}

            mapped_type& operator[] (const key_type& key)
            {
                iterator tmp = this->find(key);
                if (tmp == this->end())
                    return (this->insert(ft::make_pair(key , mapped_type)).first->second);
                return ((*tmp).second);
            }

            ft::pair<iterator , bool> insert (const value_type& value)
            {
                if (this->_rbtree.KeyExists(value))
                {
                    struct ft::TreeNode<value_type>* node = this->_rbtree.GetNode(value);
                    return (ft::pair<iterator , bool>(iterator(node ,_rbtree.GetRoot()), false));
                }
                else
                {
                    this->_rbtree.InsertNode(value);
                    struct ft::TreeNode<value_type>* node = this->_rbtree.GetNode(value);
                    return (ft::pair<iterator, bool>(iterator(node, _rbtree.RBGetRoot()), true));
                }
            }


            iterator insert (iterator pos , const value_type& value)
            {
                static_cast<void>(pos) ;
                return (this->insert(value).first);
            }

            template <class InputIterator>
            void insert (InputIterator first , InputIterator last)
            {
                for (;first != last; ++first)
                    this->insert(*first);
            }


            void erase(iterator pos)
            {
                this->_rbtree.Delete(*pod);
            }


            size_type erase(const key_type& key)
            {
                if (this->_rbtree.KeyExists(ft::make_pair(key , mapped_type())))
                {
                    this->_rbtree.Delete(this->_rbtree.GetNode(ft::make_pair(key , mapped_type())));
                    return (1)
                }
                else
                    return (0);
            }


            void erase (iterator first , iterator last)
            {
                for (iterator next = first; first != last; first = next)
                {
                    next++;
                    this->_rbtree.Delete(*first);
                }
            }

            void swap(map &rhs)
            {
                std::swap(this->_allocator , rhs._allocator);
                std::swap(this->_key_compare , rhs._key_compare);
                std::swap(this->_value_compare , rhs._value_compare);
                this->_rbtree.Swap(rhs._rbtree);
            }

            void clear(void) {this->_rbtree.Clear();}


            key_compare key_comp(void) const {return (this->_key_compare);}
            value_compare value_comp(void) const {return (this->_value_compare);}


            iterator find(const key_type& key)
            {
                if (this->_rbtree.KeyExists(ft::make_pair(key , mapped_type())))
                    return (iterator(this->_rbtree.GetNode(ft::make_pair(key, mapped_type())), _rbtree.GetRoot()));
                else
                    return(this->end());
            }


            const_iterator find(const key_type& key)
            {
                if (this->_rbtree.KeyExists(ft::make_pair(key , mapped_type())))
                    return (const_iterator(this->_rbtree.GetNode(ft::make_pair(key, mapped_type())), _rbtree.GetRoot()));
                else
                    return(this->end());
            }

            size_type count (const key_type& key) const
            {
                if (this->_rbtree.KeyExists(ft::make_pair(key , mapped_type())))
                    return (1);
                else
                    return (0);
            }

            iterator lower_bound(const key_type& key)
            {
                return (iterator(this->_rbtree.LowerBound(value_type(key , mapped_type())), _rbtree.GetRoot()));
            }

            const_iterator lower_bound(const key_type& key)
            {
                return (const_iterator(this->_rbtree.LowerBound(value_type(key , mapped_type())), _rbtree.GetRoot()));
            }

            iterator upper_bound(const key_type& key)
            {
                return (iterator(this->_rbtree.UpperBound(value_type(key , mapped_type())), _rbtree.GetRoot()));
            }

            const_iterator upper_bound(const key_type& key)
            {
                return (const_iterator(this->_rbtree.UpperBound(value_type(key , mapped_type())), _rbtree.GetRoot()));
            }


            pair <itarator , iterator> equal_range (const key_type& key)
            {
                return (ft::make_pair(lower_bound(key) , upper_bound(key)));
            }

            pair <const_itarator , const_iterator> equal_range (const key_type& key)
            {
                return (ft::make_pair(lower_bound(key) , upper_bound(key)));
            }

            allocator_type get_allocator(void) const {return (this->_allocator);}





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


};