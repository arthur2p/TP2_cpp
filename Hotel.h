#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Chambre.h"
class Hotel
{
public:
	Hotel(int id, std::string name, std::string city, std::vector<Chambre> room);
	Hotel(int id, std::string name, std::string city);
	int id() const;
	std::string name() const;
	std::string city() const;
	std::vector<Chambre> room() const;
	void addChambre(Chambre chambre);
	void removeChambre(int position);
	void DisplayAllChambre();
	friend std::ostream& operator<<(std::ostream& os, const Hotel& hotel);
private:
	int _id;
	std::string _name;
	std::string _city;
	std::vector<Chambre> _room;
};