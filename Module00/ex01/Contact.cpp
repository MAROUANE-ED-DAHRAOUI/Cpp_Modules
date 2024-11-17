#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <string>
#include <iostream>

std::string Contact::getFirstName(void)
{
    return (firstName);
}

std::string Contact::getLastName(void)
{
    return (lastName);
}
            
std::string Contact::getNickName(void)
{
    return (nickName);
}
 
std::string Contact::getPhoneNumber(void)
{
    return (phoneNumber);
}
            
std::string Contact::getDarkestSecret(void)
{
    return (darkestSecret);
}
            
void        Contact::setFirstName(std::string _firstName)
{
    firstName = _firstName;
}
            
void        Contact::setLastName(std::string _lastName)
{
    lastName = _lastName;
}
            
void        Contact::setNickName(std::string _nickName)
{
    nickName = _nickName;
}
            
void        Contact::setPhoneNumber(std::string darkestSecret)
{
    darkestSecret = _darkestSecret;
}
