/**
  * @File: main.cpp
  * @Author: d0m <dginhac@u-bourgogne.fr>
  * @Created on : 2022-10-03 10:14:42
  * @Last Modified time: 2022-10-03 15:16:54
  *
  * @Description: Final class
  */


#include "date.h"
#include "Client.h"
#include "Hotel.h"
#include <iostream>

int main(int argc, char const* argv[]) {
	Hotel a (1, "Ibis", "Dijon");
	std::cout << a.id() << " " << a.name() << " " << a.city() << std::endl;
	Chambre room1(1, "simple", 50);
	a.addChambre(room1);
	Chambre room2 (2, "double", 100);
	a.addChambre(room2);
	a.DisplayChambre();
	Hotel b(2, "Motel", "Lyon");
	b.DisplayChambre();
	a.removeChambre(1);
	a.DisplayChambre();
	Client client(1, "Arthure", "PATAILLE");
	client.updateFirstname("Arthur");
	std::cout << client.firstname() << " " << client.id() << std::endl;


	return 0;
}