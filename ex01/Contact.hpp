#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include "Message.hpp"

class Contact
{
public:
	Contact();
	~Contact();

	std::string GetFirstName() const;
	std::string GetLastName() const;
	std::string GetNickName() const;
	std::string GetPhoneNumber() const;
	std::string GetDarkestSecret() const;

	void SetFirstName(std::string buffer);
	void SetLastName(std::string buffer);
	void SetNickName(std::string buffer);
	void SetPhoneNumber(std::string buffer);
	void SetDarkestSecret(std::string buffer);

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
};


#endif //CONTACT_HPP
