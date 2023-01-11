#include "Chambre.h"

Chambre::Chambre(int number, std::string type, int price) : _number(number), _type(type), _price(price)
{
	bool status = isType(type);
	assert(status && "Type is not valid (only Simple, Double or Suite) !");
}

int Chambre::number() const {
	return _number;
}

std::string Chambre::type() const {
	return _type;
}

int Chambre::price() const {
	return _price;
}

bool Chambre::reserved() const {
	return _reserved;
}

void Chambre::updatePrice(int price) {
	_price = price;
}

void Chambre::updateReserved(bool status) {
	_reserved = status;
}


bool isType(std::string type) {
	if (type == "Simple" || type == "Double" || type == "Suite")
		return true;
	else
		return false;
}