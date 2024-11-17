#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <string>
#include <iostream>

PhoneBook::PhoneBook()
{
    index = 0;
}

bool	allDigits(std::string str)
{
	int	i;

	i = 0;
	if (str[0] == '+')
		i++;
	while (i < (int)str.size())
	{
		if (!std::isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}

int     PhoneBook::addContact()
{
    std::string arr[5] = {FN, LN, NKN, PN, DS};
    std::string input[5];
    int         i = 0;
 
    while(i <= 4)
    {
        std::cout << arr[i];
        if(!std::getline(std::cin, input[i]))
            return (1);
        if(i == 3)
        {
            if (!allDigits(input[i]))   
            {
                std::cout << "Invalide Phone number!!\n";
                i--;
                continue ;
            }
        }

        if(input[i].empty())
        {
            std::cout << "First Name is empty!! \n";
            i--;
            continue;
        }
        i++;
    }
    Contact[index] = Contact(input[0], input[1], input[2], input[3], input[4]);
    index++;
    return (0); 
}

std::string read_index(std::string str, std::string _index)
{
    std::cout << str;
    if (!std::getline(std::cin, _index))
		return NULL;
    return (_index);
}

void    Print_infos(int i)
{
    std::cout << "First Name :" << contacts[i].getFirstName() << "\n";
	std::cout << "Last Name :" << contacts[i].getLastName() << "\n";
	std::cout << "Nick Name :" << contacts[i].getNickName() << "\n";
	std::cout << "Darkest Secret :" << contacts[i].getDarkestSecret() << "\n";
	std::cout << "Phone Number :" << contacts[i].getPhoneNumber() << std::endl;
}

void    PhoneBook::getAllContactDetails()
{
    std::string _index;
    int         idx;

    _index = read_index("PLeas enter index of a ");
    if(_index == NULL)
        return ;
    idx = _index[0] - '0';
    if(idx > 7 || _index.length() > 1 || !allDigits(_index) || idx > (index - 1))
    {
            std::cout << "\nInvalid input \n";
            return ;
    }
    Print_infos(idx);
}

void   PhoneBook::searchContacts()
{
    

}
