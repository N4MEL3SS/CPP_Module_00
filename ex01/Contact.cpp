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

std::string Contact::GetFirstName() const
{
	return std::string(this->_firstName);
}

std::string Contact::GetLastName() const
{
	return std::string(this->_lastName);
}

std::string Contact::GetNickName() const
{
	return std::string(this->_nickName);
}

std::string Contact::GetPhoneNumber() const
{
	return std::string(this->_phoneNumber);
}

std::string Contact::GetDarkestSecret() const
{
	return std::string(this->_darkestSecret);
}


//		SET FUNCTION

void Contact::SetFirstName(std::string buffer)
{
	std::cout << GREEN << "FIRST NAME: ";
	while (std::getline(std::cin, buffer) && buffer.empty())
		std::cout << GREEN << "FIRST NAME: ";
	this->_firstName = buffer;
}

void Contact::SetLastName(std::string buffer)
{
	std::cout << GREEN << "LAST NAME: ";
	while (std::getline(std::cin, buffer) && buffer.empty())
		std::cout << GREEN << "LAST NAME: ";
	this->_lastName = buffer;
}

void Contact::SetNickName(std::string buffer)
{
	std::cout << GREEN << "NICK NAME: ";
	while (std::getline(std::cin, buffer) && buffer.empty())
		std::cout << GREEN << "NICK NAME: ";
	this->_nickName = buffer;
}

void Contact::SetPhoneNumber(std::string buffer)
{
	std::cout << GREEN << "PHONE NUMBER: ";
	while (std::getline(std::cin, buffer) && buffer.empty())
		std::cout << GREEN << "PHONE NUMBER: ";
	this->_phoneNumber = buffer;
}

void Contact::SetDarkestSecret(std::string buffer)
{
	std::cout << GREEN << "DARKEST SECRET: ";
	while (std::getline(std::cin, buffer) && buffer.empty())
		std::cout << GREEN << "DARKEST SECRET: ";
	this->_darkestSecret = buffer;
}
