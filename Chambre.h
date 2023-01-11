#pragma once
#include <iostream>
#include <string>
#include <assert.h> 

class Chambre
{
public:
	Chambre(int number, std::string type, int price);
	int number() const;
	std::string type() const;
	int price() const;
	bool reserved() const;
	void updatePrice(int price);
	void updateReserved(bool status);
private:
	int _number;
	enum _types { Simple, Double, Suite };
	std::string _type;
	int _price;
	bool _reserved = false;
};


bool isType(std::string type);