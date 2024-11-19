#ifndef PhoneBook_HPP
#define	PhoneBook_HPP
#include "Contact.hpp"
#include <iomanip>

#define FN "Pleas enter First Name : "
#define LN "Pleas enter Last Name : "
#define NKN "Pleas enter Nick Name : "
#define PN "Pleas enter Phone Number : "
#define DS "Pleas enter Darkest Secret : "

#define RED         "\033[31m"      // Red text
#define GREEN       "\033[32m"      // Green text
#define YELLOW      "\033[33m"      // Yellow text
#define BOLD        "\033[1m"       // Bold text
#define MAGENTA     "\033[35m"
#define RESET       "\033[0m"

class PhoneBook
{
    private :
            Contact Contacts[8];
            int     index;
    public:
            PhoneBook();

            int     addContact();
            void    searchContacts();
            void    getAllContactDetails();
};

#endif