#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook phoneBookList;
	std::string command;

	PhoneBook::getInstruction();
	while (std::getline(std::cin, command))
	{
		if (command == "EXIT")
		{
			std::cout << EXIT_MSG << std::endl;
			return (0);
		}
		else if (command == "ADD")
		{
			phoneBookList.addContact();
		}
		else if (command == "SEARCH")
		{

		}
		PhoneBook::getInstruction();
	}
	return (0);
}
