#include "PhoneBook.hpp"
#include <string>
#include <stdlib.h>

int validString(std::string str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] < 32 || str[i] > 126)
            return (0);
        i++;
    }
    return (1);
}

int validNumber(std::string str)
{
    if (str.size() > 1)
        return (0);
    else if (str[0] >= '0' && str[0] <= '7')
        return (1);
    return (0);
}

int main(void)
{
    PhoneBook phoneBook;
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
    std::string option;
    std::string index;
    std::string temp;

    system("clear");
    while (1)
    {
        std::cout << GREEN << "╔════════════" << NC << " PHONEBOOK OPTIONS " << GREEN << "════════════╗" << std::endl;
        std::cout << "║" << NC << "      ADD        SEARCH         EXIT       " << GREEN << "║" << std::endl;
        std::cout << "╚═══════════════════════════════════════════╝" << NC << std::endl;
        while (option.empty())
            std::cin >> option;
        std::getline(std::cin, temp);
        option.append(temp);

        int i = 0;
        while (option[i])
        {
            option[i] = toupper(option[i]);
            i++;
        }
        
        if (option == "ADD")
        {
            std::cout << "Input the first name: ";
            while (firstName.empty() || !validString(firstName))
            {
                firstName.clear();
                temp.clear();
                std::cin >> firstName;
                std::getline(std::cin, temp);
                firstName.append(temp);
            }
            std::cout << "Input the last name: ";
            while (lastName.empty() || !validString(lastName))
            {
                lastName.clear();
                temp.clear();
                std::cin >> lastName;
                std::getline(std::cin, temp);
                lastName.append(temp);
            }
            std::cout << "Input the nickname: ";
            while (nickname.empty() || !validString(nickname))
            {
                nickname.clear();
                temp.clear();
                std::cin >> nickname;
                std::getline(std::cin, temp);
                nickname.append(temp);
            }
            std::cout << "Input the phone number: ";
            while (phoneNumber.empty() || !validString(phoneNumber))
            {
                phoneNumber.clear();
                temp.clear();
                std::cin >> phoneNumber;
                std::getline(std::cin, temp);
                phoneNumber.append(temp);
            }
            std::cout << "Input the darkest secret: ";
            while (darkestSecret.empty() || !validString(darkestSecret))
            {
                darkestSecret.clear();
                temp.clear();
                std::cin >> darkestSecret;
                std::getline(std::cin, temp);
                darkestSecret.append(temp);
            }
            phoneBook.AddContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
            firstName.clear();
            lastName.clear();
            nickname.clear();
            phoneNumber.clear();
            darkestSecret.clear();
        }
        else if (option == "SEARCH")
        {
            phoneBook.Display();
            while (1)
            {
                std::cout << "Input the contact index you want to look (0-7) or 'q' to exit this menu: ";
                std::cin >> index;
                std::getline(std::cin, temp);
                index.append(temp);
                if (validNumber(index))
                {
                    phoneBook.Display(atoi(index.c_str()));
                    break ;
                }
                else if (index == "q" || index == "Q")
                    break ;
                else
                    std::cout << RED << "* ERROR: Wrong index" << NC << std::endl;
                index.clear();
            }
        }
        else if (option == "EXIT")
            break ;
        else
            std::cout << RED << "* ERROR: Wrong option" << NC << std::endl;
        option.clear();
    }
    return (0);
}