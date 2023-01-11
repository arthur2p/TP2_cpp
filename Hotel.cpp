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

std::vector<Chambre> Hotel::room() const {
	return _room;
}

void Hotel::addChambre(Chambre chambre) {
	if (_room.size() == 0)
		_room.push_back(chambre);
	for (int i = 0; i < _room.size(); i++) {
		if (_room.at(i).number() == chambre.number())
			std::cout << "Le numéro de la chambre existe déjà !" << std::endl;
		else
			_room.push_back(chambre);

	}
}

void Hotel::removeChambre(int position) {
	if (_room.size() < position+1)
		std::cout << "Cette chambre n'existe pas dans cet hotel !" << std::endl;
	else
		_room.erase(_room.begin()+position);
}

void Hotel::DisplayAllChambre() {
	if (_room.size() != 0) {
		for (int i = 0; i < _room.size(); i++) {
			std::cout << "La chambre " << _room.at(i).number() << " de type " << _room.at(i).type() << " est au prix de " << _room.at(i).price() << "€" << std::endl;
		}
	}
	else
		std::cout << "Il n'existe pas de chambre dans cet hotel !" << std::endl;
}