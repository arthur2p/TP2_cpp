#pragma once
#include <iostream>
#include <string>
class Client
{
public:
	Client(std::string id, std::string name, std::string firstname);
	std::string id() const;
	std::string name() const;
	std::string firstname() const;
	void updateName(std::string name);
	void updateFirstname(std::string firstname);

private:
	std::string _id;
	std::string _name;
	std::string _firstname;
};
