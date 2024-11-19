
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <string>
#include <iostream>
#include <iomanip>

std::string read_line(std::string str);

PhoneBook::PhoneBook()
{
    index = 0;
}

bool allDigits(std::string str)
{
    int i = 0;
    if (str[0] == '+') 
            i++;
    while (i < (int)str.size()) {
        if (!std::isdigit(str[i]))
            return false;
        i++;
    }
    return true;
}

int PhoneBook::addContact()
{
    std::string prompts[5] = {FN, LN, NKN, PN, DS};
    std::string inputs[5];
    int i = 0;

    while (i < 5) 
    {
        // std::cout << prompts[i];
        inputs[i] = read_line(prompts[i]);
        if (inputs[i].empty())
        {
            std::cout << RED << "Field cannot be empty. Please try again.\n" << RESET;
            continue;
        }
        if (i == 3 && !allDigits(inputs[i])) {
            std::cout << RED << "Invalid phone number! Please try again.\n" << RESET;
            continue;
        }
        i++;
    }

    // Use the current index in a circular way
    int currentIndex = index % 8;
    Contacts[currentIndex].setFirstName(inputs[0]);
    Contacts[currentIndex].setLastName(inputs[1]);
    Contacts[currentIndex].setNickName(inputs[2]);
    Contacts[currentIndex].setPhoneNumber(inputs[3]);
    Contacts[currentIndex].setDarkestSecret(inputs[4]);
    index++;
    return 0;
}

void printContactRow(int idx, const Contact& contact) 
{
    std::cout << "|" << std::setw(10) << idx << "|";
    if(contact.getFirstName().size() >= 10)
            std::cout << std::setw(10) <<  contact.getFirstName().erase(9) + "." << "|";
    else
            std::cout << std::setw(10) << contact.getFirstName() << "|";

    if(contact.getLastName().size() >= 10)
            std::cout << std::setw(10) <<  contact.getLastName().erase(9) + "." << "|";
    else
            std::cout << std::setw(10) << contact.getLastName() << "|";
    
    if(contact.getNickName().size() >= 10)
            std::cout << std::setw(10) <<  contact.getNickName().erase(9) + "." << "|";
    else
            std::cout << std::setw(10) << contact.getNickName() << "|";
}

void PhoneBook::getAllContactDetails() 
{
    std::string _index;

    _index = read_line("Enter index to view details: ");
    if (_index.empty()) {
        std::cout << RED << "Invalid input.\n" << RESET;
        return;
    }

    if (!allDigits(_index) || _index.length() > 1) {
        std::cout << RED << "Invalid index.\n" << RESET;
        return;
    }

    int idx = _index[0] - '0';
    if (idx < 0 || idx >= (index < 8 ? index : 8)) {
        std::cout << RED << "Index out of range.\n" << RESET;
        return;
    }

    const Contact& contact = Contacts[idx];
    std::cout << YELLOW <<"First Name: " << GREEN << contact.getFirstName() << "\n" << RESET;
    std::cout << YELLOW << "Last Name: " << GREEN << contact.getLastName() << "\n" << RESET;
    std::cout << YELLOW << "Nick Name: " << GREEN << contact.getNickName() << "\n" << RESET;
    std::cout << YELLOW << "Phone Number: " << GREEN << contact.getPhoneNumber() << "\n" << RESET;
    std::cout << YELLOW << "Darkest Secret: " << GREEN << contact.getDarkestSecret() << "\n" << RESET;
}

void printHeader() 
{
    std::cout << BOLD << "/-------------------------------------------\\\n" << RESET;
    std::cout << BOLD << "|   Index  | FirstName | LastName | NickName |\n" << RESET;
    std::cout << BOLD << "|----------|-----------|----------|----------|\n" << RESET;
}

void PhoneBook::searchContacts() 
{
    if (index == 0)
    {
        std::cout << MAGENTA << "No contacts available. Please add some contacts first.\n" << RESET;
        return;
    }

    int size = (index < 8) ? index : 8;
    printHeader();
    for (int i = 0; i < size; i++) 
    {
        printContactRow(i, Contacts[i]);
        if(i == size)
            std::cout << BOLD << "\\-------------------------------------------/\n" << RESET;
        else
            std::cout << BOLD <<"\n|----------|----------|----------|----------|" << std::endl << RESET;
    }

    getAllContactDetails();
}
