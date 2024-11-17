#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>

std::string read_line(std::string str)
{
    std::string input;

    std::cout << str;
    std::cin >> input;
    return (input);
}

int main()
{
    PhoneBook PhoneBooks;
    std::string   input;
    int           index;

    index = 0;
    while(1)
    {
        input = read_line("Enter a cammand : ");
        if(!input)
            break ;
        if(input == "ADD")
        {
            if (PhoneBooks.addContact(index % 8))
                    break ;
        }
        else if(input == "SEARCH")
            PhoneBooks.searchContacts(index);
        else if(input == "EXIT")
            break ;
        else
            std::cout << "Invalid command !! \nYou only have three options : " << endl;
            std::cout << "1 : ADD\t2 : SEARCH\t3 : EXIT\n";  
    }
    return 0;
}