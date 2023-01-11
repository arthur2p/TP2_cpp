#include "Hotel.h"

Hotel::Hotel(int id, std::string name, std::string city): _id(id), _name(name), _city(city)
{

}

int Hotel::id() const {
	return _id;
}

std::string Hotel::name() const {
	return _name;
}

std::string Hotel::city() const {
	return _city;
}

void Hotel::addChambre(Chambre chambre) {
	_room.push_back(chambre);
}

void Hotel::removeChambre(int position) {
	_room.erase(_room.begin()+position);
}

void Hotel::DisplayChambre() {
	if (_room.size() != 0) {
		for (int i = 0; i < _room.size(); i++) {
			std::cout << "La chambre " << _room.at(i).number() << " de type " << _room.at(i).type() << " est au prix de " << _room.at(i).price() << "€" << std::endl;
		}
	}
	else
		std::cout << "Il n'existe pas de chambre dans cet hotel !" << std::endl;
}