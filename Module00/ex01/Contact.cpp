#include "Contact.hpp"

std::string Contact::getFirstName(void) const
{
    return firstName;
}

std::string Contact::getLastName(void) const
{
    return lastName;
}

std::string Contact::getNickName(void) const
{
    return nickName;
}

std::string Contact::getPhoneNumber(void) const
{
    return phoneNumber;
}

std::string Contact::getDarkestSecret(void) const
{
    return darkestSecret;
}

// Setter methods
void Contact::setFirstName(std::string _firstName)
{
    firstName = _firstName;
}

void Contact::setLastName(std::string _lastName)
{
    lastName = _lastName;
}

void Contact::setNickName(std::string _nickName)
{
    nickName = _nickName;
}

void Contact::setPhoneNumber(std::string _phoneNumber)
{
    phoneNumber = _phoneNumber;
}

void Contact::setDarkestSecret(std::string _darkestSecret)
{
    darkestSecret = _darkestSecret;
}
