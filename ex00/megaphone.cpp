/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fibarros <fibarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:28:20 by fibarros          #+#    #+#             */
/*   Updated: 2024/12/06 18:00:12 by fibarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // enables the use of std::cout and std::endl for output and insert newline
#include <string> // used to handle std::string objects
#include <cctype> //converts each character of the inpit string to uppercase


int main(int argc, char **argv)
{
    if (argc == 1){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    } else {
        for (int i = 1; i < argc; i++) {
            std::string arg = argv[i];
            
        }
    }
}
