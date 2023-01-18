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
#include "Reservation.h"
#include "Room.h"
#include <iostream>

int main(int argc, char const* argv[]) {
	/*Hotel a(1, "Ibis", "Dijon");
	std::cout << a.id() << " " << a.name() << " " << a.city() << std::endl;
	Chambre room1(1, "Simple", 50);
	a.addChambre(room1);
	Chambre room2 (2, "Double", 100);
	a.addChambre(room2);
	a.DisplayAllChambre();
	Hotel b(2, "Motel", "Lyon");
	b.DisplayAllChambre();
	a.removeChambre(1);
	a.DisplayAllChambre();
	Client client(1, "Arthure", "PATAILLE");
	client.updateFirstname("Arthur");
	std::cout << client.firstname() << " " << client.id() << std::endl;
	Date date(2023, 1, 11);
	Reservation reservation(date, 5, a, 1, client);
	std::cout << reservation.clientId() << " " << reservation.hotelId() << " " << reservation.totalprice() << std::endl;*/

	//Ajout de d'un hotel avec 10 chambres
	std::vector<Room> chambreHotel1;
	for (int i = 1; i < 4; i++) {
		chambreHotel1.push_back(Room(i, RoomType::Simple, 1, 100));
	}
	for (int i = 4; i < 9; i++) {
		chambreHotel1.push_back(Room(i, RoomType::Double, 2, 125));
	}
	chambreHotel1.push_back(Room(9, RoomType::Suite, 2, 200));
	chambreHotel1.push_back(Room(10, RoomType::Suite, 2, 210));
	for (int i = 0; i < chambreHotel1.size(); i++) {
		std::cout << chambreHotel1.at(i);
	}
	Hotel hotel1(1, "Ibis", "Dijon", chambreHotel1);
	std::cout << hotel1;

	//Création de clients
	std::vector<Client> clientHotel1;
	clientHotel1.push_back(Client(1, "PATAILLE", "Arthur"));
	clientHotel1.push_back(Client(2, "BRAUN", "Gwendal"));
	clientHotel1.push_back(Client(3, "FREUD", "Sigmond"));
	clientHotel1.push_back(Client(4, "EULER", "Leonard"));
	clientHotel1.push_back(Client(5, "STIVELL", "Alan"));

	for (int i = 0; i < clientHotel1.size(); i++) {
		std::cout << clientHotel1.at(i);
	}



	return 0;
}