#pragma once

#include "Contact.hpp"

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        void    AddContact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret);
        void    Display();
        void    Display(int index);
    private:
        Contact _phoneBook[8];
        int     _index;
};