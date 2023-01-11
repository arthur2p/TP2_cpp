#pragma once
#include <iostream>
#include <string>
class Client
{
public:
	Client(int id, std::string name, std::string firstname);
	int id() const;
	std::string name() const;
	std::string firstname() const;
	void updateName(std::string name);
	void updateFirstname(std::string firstname);

private:
	int _id;
	std::string _name;
	std::string _firstname;
};