#include "Client.h"

Client::Client(std::string id, std::string name, std::string firstname) :_id(id), _name(name), _firstname(firstname){

}

std::string Client::id() const {
	return _id;
}

std::string Client::name() const {
	return _name;
}

std::string Client::firstname() const {
	return _firstname;
}


void Client::updateName(std::string name) {
	_name = name;
}

void Client::updateFirstname(std::string firstname) {
	_firstname = firstname;
}