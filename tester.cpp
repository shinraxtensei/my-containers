#include "unit_tests/tests.hpp"
#include <iomanip>


void loading()
{
    std::cout <<YELLOW << "loading: ";
    std::string points= "...";
    for (int i = 0; i < 3; i++)
    {
        std::cout << points.substr(0, i % 3);
        std::cout.flush();
        sleep(1);
    }
    std::cout << RESET <<  std::endl;
}


void compare_times(double first, double second)
{
    double ratio = first / second;
    if (ratio > 1)
        std::cout << BLUE << "FT is " << std::fixed << std::setprecision(3) << ratio << " times faster than STD" << RESET << std::endl;
    else if (ratio < 1)
        std::cout <<BLUE << "STD is " << std::fixed << std::setprecision(3) << 1 / ratio << " times faster than FT" << RESET<< std::endl;
    else
        std::cout << BLUE << "both are equal"<< RESET << std::endl;
}


int main ()
{
    std::cout << BLUE << "\n\n" <<  billboard << std::endl << std::endl;
  
    while (6969696969)
    {

        std::cout << GREEN << "\n\nchoose the container you want to test" << RESET << std::endl;
        std::cout << YELLOW << "1. vector\t\t\a" << RESET ;
        std::cout << YELLOW << "2. stack\t\t\a" << RESET;
        std::cout << YELLOW << "3. map\t\t\a" << RESET ;
        std::cout << YELLOW << "4. set\t\t\a" << RESET ;
        std::cout << YELLOW << "5. all\t\t\a" << RESET ;
        std::cout << REDD << "6 - exit \n\a" << RESET ;
        std::cout << "your choice: ";
        std::string choice;
        std::cin >> choice;

        switch (choice[0])
        {
        case '1':
            LOAD;
            vector_unit_tests();
            break;
        case '2':
            LOAD;
            stack_unit_tests();
            break;
        case '3':   
            LOAD;
            map_unit_tests();
            break;
        case '4':
            LOAD;
            set_unit_tests();
            break;
        case '5':
            LOAD;
            vector_unit_tests();
            stack_unit_tests();
            map_unit_tests();
            set_unit_tests();
            break;
        case '6':
            std::cout << "exiting..." << std::endl;
            return (0);
        default:
            std::cout << REDD << "invalid choice" << RESET << std::endl;
            break;

        }
    }
}