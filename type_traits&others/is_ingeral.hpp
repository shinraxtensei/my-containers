#pragma once



namespace ft 
{

    // ----------------- the base class for all type traits ------------------------
    template <typename T ,T v>
    struct integral_constant
    {
        typedef integral_constant<T ,v> type;
        typedef T value_type;
        static const T value = v;
        operator value_type() const { return value; }
    };

    // ------------------ specializations of the integral_constant base class ----------------


    typedef integral_constant<bool , true> true_type;
    typedef integral_constant<bool , false> false_type;

    template <class T> struct is_integral : public false_type{};
    template <class T> struct is_integral<const T> : public false_type{};
    template <class T> struct is_integral<volatile T> : public false_type{};
    template <class T> struct is_integral<volatile const T> : public false_type{};
    template <> struct is_integral<bool> : public true_type{};
    template <> struct is_integral<char> : public true_type{};
    template <> struct is_integral<wchar_t> : public true_type{};
    template <> struct is_integral<signed char> : public true_type{};
    template <> struct is_integral<short int> : public true_type{};
    template <> struct is_integral<int> : public true_type{};
    template <> struct is_integral<long > : public true_type{};
    template <> struct is_integral< long long > : public true_type{};
    template <> struct is_integral<unsigned char> : public true_type{};
    template <> struct is_integral<unsigned short int> : public true_type {};
    template <> struct is_integral<unsigned int> : public true_type {};
    template <> struct is_integral<unsigned long > : public true_type {};
    template <> struct is_integral<unsigned long long > : public true_type {};


};