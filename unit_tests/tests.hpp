
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


#define L_CYAN "\033[1;96m"
#define RESET "\033[0m"
#define PRINT(...) std::cout, L_CYAN, __VA_ARGS__, RESET, "\n"

template <typename T>
std::ostream& operator,(std::ostream& out, const T& t) {
  out << t;
  return out;
}