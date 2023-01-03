#include "Chambre.h"

Chambre::Chambre(int number, std::string type, int price) : _number(number), _type(type), _price(price)
{

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

void Chambre::updatePrice(int price) {
	_price = price;
}