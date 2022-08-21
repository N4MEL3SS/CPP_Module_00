#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"
# include "Message.hpp"

# define PHONE_BOOK_SIZE 8

class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();

	static void getStartInstruction();

	void addContact();
	void searchContact();

private:
	Contact contacts[PHONE_BOOK_SIZE];

	static void getSearchInstruction();
	void setContact(int index);
};

#endif //PHONEBOOK_HPP
