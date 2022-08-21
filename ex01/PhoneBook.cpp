#include "PhoneBook.hpp"

//		CONSTRUCTOR
PhoneBook::PhoneBook()
{
	std::cout << "Class PhoneBook constructed" << std::endl;
}

//		DESTRUCTOR
PhoneBook::~PhoneBook()
{
	std::cout << "Class PhoneBook destructed" << std::endl;
}

void PhoneBook::getInstruction()
{
	std::cout << INSTRUCTION_COLOR << INSTRUCTION << END;
}

void PhoneBook::fillContact(int index)
{
	std::string buffer;

	contacts[index].SetFirstName(buffer);
	contacts[index].SetLastName(buffer);
	contacts[index].SetNickName(buffer);
	contacts[index].SetPhoneNumber(buffer);
	contacts[index].SetDarkestSecret(buffer);
}

void PhoneBook::addContact()
{
	static int index = 0;

	if (index < PHONE_BOOK_SIZE)
	{
		fillContact(index);
		index++;
	}
	else
	{
		std::cout << REPLACE_WARNING << std::endl;
		index = 0;
		fillContact(index);
		index++;
	}
}
