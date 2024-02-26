#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    //constructor
    _index = 0;
}

PhoneBook::~PhoneBook()
{
    //destructor
}

void    PhoneBook::AddContact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret)
{
    _phoneBook[_index] = Contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
    _index++;
    if (_index > 7)
        _index = 0;
}

void    PhoneBook::Display()
{
    int i;

    std::cout << GREEN << "╔══════════╦════" << NC << " CONTACT LIST " << GREEN << "═══╦══════════╗" << std::endl;    
    std::cout << GREEN << "║" << NC << "  INDEX   " << GREEN << "║" << NC << "   NAME   " << GREEN << "║" << NC << " LASTNAME " << GREEN << "║" << NC << " NICKNAME " << GREEN << "║" << NC << std::endl;
    std::cout << GREEN << "╠══════════╬══════════╬══════════╬══════════╣" << NC << std::endl;
    i = 0;
    while (i < 8)
    {
        _phoneBook[i].Display(i);
        i++;
    }
    std::cout << GREEN << "╚══════════╩══════════╩══════════╩══════════╝" << NC << std::endl;
}

void    PhoneBook::Display(int index)
{
    _phoneBook[index].FullDisplay();
}