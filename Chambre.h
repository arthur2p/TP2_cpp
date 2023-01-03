#pragma once
#include <iostream>
#include <string>
class Chambre
{
public:
	Chambre(int number, std::string type, int price);
	int number() const;
	std::string type() const;
	int price() const;
	void updatePrice(int price);
private:
	int _number;
	std::string _type;
	int _price;
};

