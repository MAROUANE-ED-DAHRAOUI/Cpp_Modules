#ifndef PhoneBook_HPP
#define	PhoneBook_HPP
#include "Contact.hpp"
#include <iomanip>

#define FN "enter First Name : "
#define LN "enter Last Name : "
#define NKN "enter Nick Name : "
#define PN "enter Phone Number : "
#define DS "enter Darkest Secret : "

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