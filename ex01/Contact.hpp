#pragma once

#include <string>
#include <iostream>
#include <iomanip>

#define RED "\e[31m"
#define GREEN "\e[32m"
#define YELLOW "\e[33m"
#define NC "\e[0m"

class   Contact
{
    public:
        Contact();
        Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret);
        ~Contact();
        void    Display(int index);
        void    FullDisplay();
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNumber;
        std::string _darkestSecret;
};