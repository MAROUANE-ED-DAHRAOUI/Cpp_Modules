#ifndef PhoneBook_HPP
#define	PhoneBook_HPP
#include "Contact.hpp"
#include <iomanip>

#define FN "Pleas enter First Name : "
#define LN "Pleas enter Last Name : "
#define NKN "Pleas enter Nick Name : "
#define PN "Pleas enter Phone Number : "
#define DS "Pleas enter Darkest Secret : "

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