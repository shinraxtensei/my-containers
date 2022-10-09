
#pragma once

#include <sys/time.h>

#include <__tree>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <map>
#include <memory>
#include <set>
#include <stack>
#include <string>
#include <type_traits>
#include <utility>
#include <vector>

#include "/Users/ahouari/Desktop/triz_work/contonirs/containers/RB_tree.hpp"
#include "/Users/ahouari/Desktop/triz_work/contonirs/containers/map.hpp"
#include "/Users/ahouari/Desktop/triz_work/contonirs/containers/vector.hpp"
#include "/Users/ahouari/Desktop/triz_work/contonirs/containers/stack.hpp"
#include "/Users/ahouari/Desktop/triz_work/contonirs/containers/set.hpp"



#define PRINT(...) std::cout, L_CYAN, __VA_ARGS__, RESET, "\n"


#define L_CYAN "\033[1;96m"
#define REDD "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN "\033[1;36m"
#define WHITE "\033[1;37m"
#define RESET "\033[0m"

#define FT_START ft_start = clock();
#define FT_END  ft_end = clock();
#define STD_START std_start = clock();
#define STD_END  std_end = clock();
#define COMPARE_TIMES compare_times(ft_start - ft_end, std_start - std_end);




template <typename T>
std::ostream& operator,(std::ostream& out, const T& t) {
  out << t;
  return out;
}