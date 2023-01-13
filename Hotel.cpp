#include "Hotel.h"
//Constructeur
Hotel::Hotel(int id, std::string name, std::string city, std::vector<Chambre> room): _id(id), _name(name), _city(city), _room(room)
{

}

Hotel::Hotel(int id, std::string name, std::string city): _id(id), _name(name), _city(city)
{

}

//Getters
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

//Ajout d'une chambre
void Hotel::addChambre(Chambre chambre) {
	if (_room.size() == 0)
		_room.push_back(chambre);
	for (int i = 0; i < _room.size(); i++) {
		if (_room.at(i).number() == chambre.number())
			std::cout << "Le numero de la chambre existe deja !" << std::endl;
		else
			_room.push_back(chambre);

	}
}

//Retrait d'une chambre
void Hotel::removeChambre(int position) {
	if (_room.size() < position+1)
		std::cout << "Cette chambre n'existe pas dans cet hotel !" << std::endl;
	else
		_room.erase(_room.begin()+position);
}

//Affichage de toutes les chambres
void Hotel::DisplayAllChambre() {
	if (_room.size() != 0) {
		for (int i = 0; i < _room.size(); i++) {
			std::cout << "La chambre " << _room.at(i).number() << " de type " << _room.at(i).type() << " est au prix de " << _room.at(i).price() << " euros" << std::endl;
		}
	}
	else
		std::cout << "Il n'existe pas de chambre dans cet hotel !" << std::endl;
}

//Friend function
std::ostream& operator<<(std::ostream& os, const Hotel& hotel)
{
	os << "Hotel : Identifiant : " << hotel.id() << ", nom : " << hotel.name() << ", ville : " << hotel.city() << std::endl;
	return os;
}