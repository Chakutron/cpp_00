#include "Contact.hpp"

Contact::Contact(void)
{
    //constructor
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret)
{
    //constructor parametrique
    _firstName = firstName;
    _lastName = lastName;
    _nickname = nickname;
    _phoneNumber = phoneNumber;
    _darkestSecret = darkestSecret;
}

Contact::~Contact(void)
{
    //destructor
}

void    Contact::Display(int index)
{
    if (_firstName.empty())
        // empty contact
        (void)_firstName;
    else
    {
        std::cout << GREEN << "║" << NC << std::setw(10) << std::right << index << GREEN << "║" << NC;
        if (_firstName.size() > 10)
            std::cout << std::setw(9) << std::right << _firstName.substr(0, 9) << GREEN << ".║" << NC;
        else
            std::cout << std::setw(10) << std::right << _firstName << GREEN << "║" << NC;
        if (_lastName.size() > 10)
            std::cout << std::setw(9) << std::right << _lastName.substr(0, 9) << GREEN << ".║" << NC;
        else
            std::cout << std::setw(10) << std::right << _lastName << GREEN << "║" << NC;
        if (_nickname.size() > 10)
            std::cout << std::setw(9) << std::right << _nickname.substr(0, 9) << GREEN << ".║" << NC << std::endl;
        else
            std::cout << std::setw(10) << std::right << _nickname << GREEN << "║" << NC << std::endl;
    }
}

void    Contact::FullDisplay()
{
    if (_firstName.empty())
        std::cout << YELLOW << "* Empty contact" << NC << std::endl;
    else
    {
        std::cout << GREEN << "*" << NC << " First Name: " << _firstName << std::endl;
        std::cout << GREEN << "*" << NC << " Last Name: " << _lastName << std::endl;
        std::cout << GREEN << "*" << NC << " Nickname: " << _nickname << std::endl;
        std::cout << GREEN << "*" << NC << " Phone number: " << _phoneNumber << std::endl;
        std::cout << GREEN << "*" << NC << " Darkest Secret: " << _darkestSecret << std::endl;
    }
}