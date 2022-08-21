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

	static void getInstruction();
	void addContact();

private:
	Contact contacts[PHONE_BOOK_SIZE];

	void fillContact(int index);
};

#endif //PHONEBOOK_HPP
