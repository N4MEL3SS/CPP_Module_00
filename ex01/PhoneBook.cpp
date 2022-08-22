#include "PhoneBook.hpp"

//		CONSTRUCTOR
PhoneBook::PhoneBook()
{
//	std::cout << "Class PhoneBook constructed" << std::endl;
}

//		DESTRUCTOR
PhoneBook::~PhoneBook()
{
//	std::cout << "Class PhoneBook destructed" << std::endl;
}

void PhoneBook::getStartInstruction()
{
	std::cout << INSTRUCTION_COLOR << INSTRUCTION << END;
}

void PhoneBook::getSearchInstruction()
{
	std::cout << SEARCH_INFO;
}

void PhoneBook::setContact(int index)
{
	std::string buffer;

	contacts[index].setFirstName(buffer);
	contacts[index].setLastName(buffer);
	contacts[index].setNickName(buffer);
	contacts[index].setPhoneNumber(buffer);
	contacts[index].setDarkestSecret(buffer);
}

void PhoneBook::addContact()
{
	static int index = 0;

	if (contacts[index].isEmpty())
	{
		setContact(index);
		index++;
	}
	else
	{
		std::cout << "Contact ";
		std::cout << index + 1 << REPLACE_WARNING << std::endl;
		setContact(index);
		index++;
	}
	if (index >= PHONE_BOOK_SIZE)
		index = 0;
}

void PhoneBook::searchContact()
{
	std::string command;

	std::cout << DECOR << std::endl;
	std::cout << TITLE << std::endl;
	std::cout << DECOR << std::endl;
	if (contacts[0].isEmpty())
	{
		std::cout << EMPTY << std::endl;
		std::cout << DECOR << std::endl;
		return;
	}
	for (int i = 0; i < PHONE_BOOK_SIZE && !contacts[i].isEmpty(); i++)
	{
		std::cout << "|" <<"         " << i + 1 << "|";
		contacts[i].showColumn(contacts[i].getFirstName());
		contacts[i].showColumn(contacts[i].getLastName());
		contacts[i].showColumn(contacts[i].getNickName());
		std::cout << std::endl;
	}
	std::cout << DECOR << std::endl;
	getSearchInstruction();
	while (std::getline(std::cin, command) && command != "MENU")
	{
		if (command.length() == 1 && (command[0] > '0' && command[0] < '9'))
		{
			contacts[(command[0] - '0') - 1].showContactInfo();
			return;
		}
		getSearchInstruction();
	}
}
