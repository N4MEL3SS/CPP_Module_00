#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include "Message.hpp"

class Contact
{
public:
	Contact();
	~Contact();

	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;

	void setFirstName(std::string buffer);
	void setLastName(std::string buffer);
	void setNickName(std::string buffer);
	void setPhoneNumber(std::string buffer);
	void setDarkestSecret(std::string buffer);

	bool isEmpty();
	void showColumn(std::string buffer);
	void showContactInfo();

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
};


#endif //CONTACT_HPP
