
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
    if (str[0] == '+') i++; // Allow numbers starting with "+"
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
            std::cout << "Field cannot be empty. Please try again.\n";
            continue;
        }
        if (i == 3 && !allDigits(inputs[i])) {
            std::cout << "Invalid phone number! Please try again.\n";
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
        std::cout << "Invalid input.\n";
        return;
    }

    if (!allDigits(_index) || _index.length() > 1) {
        std::cout << "Invalid index.\n";
        return;
    }

    int idx = _index[0] - '0';
    if (idx < 0 || idx >= (index < 8 ? index : 8)) {
        std::cout << "Index out of range.\n";
        return;
    }

    const Contact& contact = Contacts[idx];
    std::cout << "First Name: " << contact.getFirstName() << "\n";
    std::cout << "Last Name: " << contact.getLastName() << "\n";
    std::cout << "Nick Name: " << contact.getNickName() << "\n";
    std::cout << "Phone Number: " << contact.getPhoneNumber() << "\n";
    std::cout << "Darkest Secret: " << contact.getDarkestSecret() << "\n";
}

void printHeader() 
{
    std::cout << "/-------------------------------------------\\\n";
    std::cout << "|   Index  | FirstName | LastName | NickName |\n";
    std::cout << "|----------|-----------|----------|----------|\n";
}

void PhoneBook::searchContacts() 
{
    if (index == 0)
    {
        std::cout << "No contacts available. Please add some contacts first.\n";
        return;
    }

    int size = (index < 8) ? index : 8;
    printHeader();
    for (int i = 0; i < size; i++) 
    {
        printContactRow(i, Contacts[i]);
        if(i == size)
            std::cout << "\\-------------------------------------------/\n";
        else
            std::cout << "\n|----------|----------|----------|----------|" << std::endl;
    }

    getAllContactDetails();
}
