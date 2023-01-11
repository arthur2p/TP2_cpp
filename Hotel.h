#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Chambre.h"
class Hotel
{
public:
	Hotel(int id, std::string name, std::string city);
	int id() const;
	std::string name() const;
	std::string city() const;
	void addChambre(Chambre chambre);
	void removeChambre(int position);
	void DisplayChambre();
private:
	int _id;
	std::string _name;
	std::string _city;
	std::vector<Chambre> _room;
};



