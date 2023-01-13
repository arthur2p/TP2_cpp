#include "Chambre.h"
//Constructeur
Chambre::Chambre(int number, std::string type, int price) : _number(number), _type(type), _price(price)
{
	bool status = isType(type);
	assert(status && "Type is not valid (only Simple, Double or Suite) !");
}

//Getters
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

//Setters
void Chambre::updatePrice(int price) {
	_price = price;
}

void Chambre::updateReserved(bool status) {
	_reserved = status;
}

//Helper function 
bool isType(std::string type) {
	if (type == "Simple" || type == "Double" || type == "Suite")
		return true;
	else
		return false;
}

//Friend function
std::ostream& operator<<(std::ostream& os, const Chambre& room)
{
	os << "Chambre : Numero : " << room.number() << ", type : " << room.type() << ", prix : " << room.price() << std::endl;
	return os;
}