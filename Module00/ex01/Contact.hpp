#ifndef Contact.HPP
#define Contact.HPP
#include <iostream>
#include <string>


class Contact
{
    private:
            std::string firstName;
            std::string lastName;
            std::string nickName;
            std::string phoneNumber;
            std::string darkestSecret;
    public:
            std::string getFirstName(void);
            std::string getLastName(void);
            std::string getNickName(void);
            std::string getPhoneNumber(void);
            std::string getDarkestSecret(void);
            void        setFirstName(std::string firstName);
            void        setLastName(std::string lastName);
            void        setNickName(std::string nickName);
            void        setPhoneNumber(std::string darkestSecret);

};

#endif
