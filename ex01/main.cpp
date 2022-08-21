#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook phoneBookList;
	std::string command;

	PhoneBook::getStartInstruction();
	while (std::getline(std::cin, command) && command != "EXIT")
	{
		if (command == "ADD")
			phoneBookList.addContact();
		else if (command == "SEARCH")
			phoneBookList.searchContact();
		PhoneBook::getStartInstruction();
	}
	std::cout << RED << EXIT_MSG << END << std::endl;
	return (0);
}
