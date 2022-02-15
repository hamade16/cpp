/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houbeid <houbeid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 01:29:59 by houbeid           #+#    #+#             */
/*   Updated: 2022/02/07 15:20:53 by houbeid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include " PhoneBook.class.h"

void phoneBook::add(int nb)
{
    std::string first_name;
    std::string last_name;
    std::string nickneame;
    std::string phone_number;
    std::string darkest_secret;
    
    std::cout << "entrez first name:";
    std::cin >> first_name;
    contacts[nb].setfhirst(first_name);
    std::cout << "entrez last name:";
    std::cin >> last_name;
    contacts[nb].setlast(last_name);
    std::cout << "entrez nickneame:";
    std::cin >> nickneame;
    contacts[nb].setnick(nickneame);
    std::cout << "entrez phone_number:";
    std::cin >> phone_number;
    contacts[nb].setphone(phone_number);
    std::cout << "entrez darkest_secret:";
    std::cin >> darkest_secret;
    contacts[nb].setdark(darkest_secret);
}

void    phoneBook::search(int nb, int tmp)
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
        std::cout << std::setw(10) << contacts[d].getfhirst() << "|";
        std::cout << std::setw(10) << contacts[d].getlast() << "|";
        std::cout << std::setw(10) << contacts[d].getnick() << "|" << std::endl;
        d++;
    }
    std::cout << "entrez ind:";
    std::cin >> ind;
    std::cout << "first name: " << contacts[ind].getfhirst() << std::endl;
    std::cout << "last name: " << contacts[ind].getlast() << std::endl;
    std::cout << "nickneam: " << contacts[ind].getnick() << std::endl;
    std::cout << "phone number: " << contacts[ind].getphone() << std::endl;
    std::cout << "darkest_secret: " << contacts[ind].getdark() << std::endl;    
}

void    phoneBook::exitt(void)
{
    std::cout << "exit" << std::endl;
    exit(0);
}
