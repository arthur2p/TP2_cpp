#include "Room.h"
#include <iostream>

//Constructeur
Room::Room(int number, RoomType type, int bed_amount, int price)
	: _number(number), _type(type), _bed_amount(bed_amount), _price(price), _reserved(false)
{
	if (bed_amount != 1 && type == RoomType::Simple)
	{
		throw std::string("Simple room can only have 1 bed");
	}
	else if (bed_amount != 2 && type == RoomType::Double)
	{
		throw std::string("Double room can only have 2 beds");
	}
	else if (bed_amount < 1)
	{
		throw std::string("Room can't have less than 1 bed");
	}
}

//Getters
int Room::number() const {
	return _number;
}

RoomType Room::type() const {
	return _type;
}

int Room::bed_amount() const {
	return _bed_amount;
}

int Room::price() const {
	return _price;
}

bool Room::reserved() const {
	return _reserved;
}

//Setters
bool Room::addReservation(int bed_taken) {
	if (_reserved)
		return false;
	if (bed_taken <= 0 || bed_taken > _bed_amount)
		return false;
	_reserved = true;
	_bed_taken = bed_taken;
	return true;
}

bool Room::removeReservation() {
	if (_reserved) {
		_reserved = false;
		return true;
	}
	return false;
}

//Helper function 
bool isType(std::string type) {
	if (type == "Simple" || type == "Double" || type == "Suite")
		return true;
	else
		return false;
}

//Friend function
std::ostream& operator<<(std::ostream& os, const Room& room)
{
	os << "Chambre : Numero : " << room.number() << ", type : " << room.type() << ", prix : " << room.price() << std::endl;
	return os;
}