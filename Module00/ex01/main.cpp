#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>

std::string read_line(std::string str)
{
    std::string input;

    std::cout << MAGENTA << str << RESET;
    std::cin >> input;
    return (input);
}

int main()
{
    PhoneBook PhoneBooks;
    std::string   input;

    while(1)
    {
        input = read_line("\nEnter a cammand : ");
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
            std::cout << "Invalid command !! \n\tYou only have three options : " << std::endl;
            std::cout << "\t\t(1 : ADD\t2 : SEARCH\t3 : EXIT)\n";  
        }
    }
    return 0;
}