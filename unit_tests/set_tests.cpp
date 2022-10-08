#include <iostream>
#include <set>
#include <unistd.h>
#include "../containers/set.hpp"



void compare_times(double first, double second)
{
    std::string result;
    double ratio = first / second;
    if (ratio > 1)
        result = "first is " + std::to_string(ratio) + " times faster than second";
    else if (ratio < 1)
        result = "second is " + std::to_string(1 / ratio) + " times faster than first";
    else
        result = "both are equal";
    std::cout << result << std::endl;
}



int main()
{

    std::cout << "1 2 3 ...\n GO!" << std::endl;

    double ft_start = clock();
    ft::set<int> ft_set;
    double ft_end = clock();

    double std_start = clock();
    usleep(2);
    std::set<int> std_set;
    double std_end = clock();



    compare_times(ft_start - ft_end, std_start - std_end);
   

return 0;

}