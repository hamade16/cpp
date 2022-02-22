/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houbeid <houbeid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 01:29:59 by houbeid           #+#    #+#             */
/*   Updated: 2022/02/22 12:04:36 by houbeid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.h"

int not_digit(std::string s)
{
	int i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\t') )
		i++;
	while (s[i])
	{
		if (!isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

std::string norm_output(std::string str)
{
	std::string tmp;

	if (str.length() > 10)
	{
		tmp = str.substr(0, 10);
		tmp[9] = '.';
		return (tmp);
	}
	return (str);
}


int check_whitspace(std::string s)
{
	int i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\t' ) )
		i++;
	if (s[i])
		return (1);
	return (0);
}


std::string ft_getline(std::string prompt)
{
	std::string input;
	std::cout << prompt;
	while (std::getline(std::cin, input))
	{
		if (!input.empty() && check_whitspace(input))
			break;
		std::cout << prompt;
	}
	return (input);
}

std::string ft_getline_phone(std::string prompt)
{
	std::string input;
	std::cout << prompt;
	while (std::getline(std::cin, input))
	{
		if (!input.empty() && check_whitspace(input) && not_digit(input))
			break;
		std::cout << prompt;
	}
	return (input);
}

void phoneBook::add(int len)
{
    std::string input;
    
	std::cout << "\nEnter This information:\n";
	input = ft_getline("First Name: ");
	contact[len].setfhirst(input);
	input = ft_getline("Last Name: ");
	contact[len].setlast(input);
	input = ft_getline("Nickname: ");
	contact[len].setnick(input);
	input = ft_getline_phone("Phone Number: ");
	contact[len].setphone(input);
	input = ft_getline("Darkest Secret: ");
	contact[len].setdark(input);
	std::cout << "\n\033[1;31mYou have been add new contact ...\033[0m\n\n";
	++len;
}

void    phoneBook::search(int tmp)
{
    int d = 0;
    int ind;
    
    std::cout << std::setw(11) << "index|";
    std::cout << std ::setw(11) << "first name|";
    std::cout << std::setw(11) << "last name|";
    std::cout << std::setw(11) << "nickname|" << std::endl;
    
    while (d < tmp)
    {
        std::cout << std::setw(10) << d << "|";
        std::cout << std::setw(10) << norm_output(contact[d].getfhirst()) << "|";
        std::cout << std::setw(10) << norm_output(contact[d].getlast()) << "|";
        std::cout << std::setw(10) << norm_output(contact[d].getnick()) << "|" << std::endl;
        d++;
    }
    std::cout << "entrez ind:";
    std::cin >> ind;
    std::cout << "first name: " << contact[ind].getfhirst() << std::endl;
    std::cout << "last name: " << contact[ind].getlast() << std::endl;
    std::cout << "nickneam: " << contact[ind].getnick() << std::endl;
    std::cout << "phone number: " << contact[ind].getphone() << std::endl;
    std::cout << "darkest_secret: " << contact[ind].getdark() << std::endl;    
}

void    phoneBook::exitt(void)
{
    std::cout << "exit" << std::endl;
    exit(0);
}
