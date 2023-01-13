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
	friend std::ostream& operator<<(std::ostream& os, const Chambre& room);
private:
	int _number;
	std::string _type;
	int _price;
	bool _reserved = false;
};

//Helper function
bool isType(std::string type);