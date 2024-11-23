
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>

int main()
{
    PhoneBook PhoneBooks;
    std::string   input;

    while(1)
    {
        std::cout << GREEN << "\nEnter a cammand : " << RESET;
        if(!std::getline(std::cin, input))
                break;
        if (std::cin.eof())
        {
            std::cout << "INVALD CTRL D\n";
            break;
        }
        if(input == "ADD")
        {
            if (PhoneBooks.addContact())
                    break ;
        }
        else if(input == "SEARCH")
            PhoneBooks.searchContacts();
        else if(input == "EXIT")
            return (0);
        else
        {
            std::cout << RED << "Invalid command !! \n" << RESET << YELLOW << "\tYou only have three options : " << RESET << std::endl;
            std::cout << "\t\t(" << GREEN << "1 : ADD\t2 : SEARCH\t3 : EXIT" << RESET << ")\n";  
        }
    }
    return 0;
}