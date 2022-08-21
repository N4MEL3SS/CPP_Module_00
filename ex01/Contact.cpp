#include "Contact.hpp"

//		CONSTRUCTOR
Contact::Contact()
{
//	std::cout << "Class Contact constructed" << std::endl;
}

//		DESTRUCTOR
Contact::~Contact()
{
//	std::cout << "Class Contact destructed" << std::endl;
}


//		GET FUNCTION
std::string Contact::getFirstName() const
{
	return std::string(this->_firstName);
}

std::string Contact::getLastName() const
{
	return std::string(this->_lastName);
}

std::string Contact::getNickName() const
{
	return std::string(this->_nickName);
}

std::string Contact::getPhoneNumber() const
{
	return std::string(this->_phoneNumber);
}

std::string Contact::getDarkestSecret() const
{
	return std::string(this->_darkestSecret);
}


//		SET FUNCTION
void Contact::setFirstName(std::string buffer)
{
	std::cout << GREEN << FIRST_NAME;
	while (std::getline(std::cin, buffer) && buffer.empty())
		std::cout << GREEN << FIRST_NAME;
	this->_firstName = buffer;
}

void Contact::setLastName(std::string buffer)
{
	std::cout << GREEN << LAST_NAME;
	while (std::getline(std::cin, buffer) && buffer.empty())
		std::cout << GREEN << LAST_NAME;
	this->_lastName = buffer;
}

void Contact::setNickName(std::string buffer)
{
	std::cout << GREEN << NICK_NAME;
	while (std::getline(std::cin, buffer) && buffer.empty())
		std::cout << GREEN << NICK_NAME;
	this->_nickName = buffer;
}

void Contact::setPhoneNumber(std::string buffer)
{
	std::cout << GREEN << PHONE_NUMBER;
	while (std::getline(std::cin, buffer) && buffer.empty())
		std::cout << GREEN << PHONE_NUMBER;
	this->_phoneNumber = buffer;
}

void Contact::setDarkestSecret(std::string buffer)
{
	std::cout << GREEN << DARKEST_SECRET;
	while (std::getline(std::cin, buffer) && buffer.empty())
		std::cout << GREEN << DARKEST_SECRET;
	this->_darkestSecret = buffer;
}

bool Contact::isEmpty()
{
	return (this->_firstName.empty());
}

void Contact::showColumn(std::string buffer)
{
	if (buffer.length() > 10)
		std::cout  << buffer.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << buffer;
	std::cout << "|";
}

void Contact::showContactInfo()
{
	std::cout << "Name: " << getFirstName() << " " << getLastName() << " (" << getNickName() << ")" << std::endl;
	std::cout << "Phone Number: " << getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << getDarkestSecret() << std::endl;
}
