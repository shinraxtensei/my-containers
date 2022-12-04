/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:48:53 by ahouari           #+#    #+#             */
/*   Updated: 2022/12/02 13:30:32 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_tests/tests.hpp"



void loading()
{
    std::cout <<YELLOW << "loading: ";
    std::string points= "...";
    for (int i = 0; i < 3; i++)
    {
        std::cout << points.substr(0, i %3);
        std::cout.flush();
        sleep(1);
    }
    std::cout << RESET <<  std::endl;
}


void compare_times(double first, double second)
{
    std::string result;
    double ratio = first / second;
    if (ratio > 1)
        result = "FT is " + std::to_string(ratio) + " times faster than STD";
    else if (ratio < 1)
        result = "STD is " + std::to_string(1 / ratio) + " times faster than FT";
    else
        result = "both are equal";
    std::cout<< BLUE << result << RESET << std::endl;
}


int main ()
{
    std::cout << BLUE << "\n\n" <<  billboard << std::endl << std::endl;
    
  
    while (69)
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