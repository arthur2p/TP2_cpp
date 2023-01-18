#include "date.h"
#include "Client.h"
#include "Hotel.h"
#include "Reservation.h"
#include "Room.h"
#include <iostream>

int main(int argc, char const* argv[]) {
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
	std::vector<Client> client_list;
	client_list.push_back(Client(1, "PATAILLE", "Arthur"));
	client_list.push_back(Client(2, "BRAUN", "Gwendal"));
	client_list.push_back(Client(3, "FREUD", "Sigmond"));
	client_list.push_back(Client(4, "EULER", "Leonard"));
	client_list.push_back(Client(5, "STIVELL", "Alan"));

	for (Client client : client_list) std::cout << client;
	

	std::vector<Reservation> reservation_list;


	std::cout << "Entrer le nom d'un client :" << std::endl;
	std::string client_name, client_firstname;
	std::cin >> client_name >> client_firstname;
	bool client_in_list = false;
	for (Client client : client_list) {
		if (client.name() == client_name && client.firstname() == client_firstname) {
			std::cout << client << std::endl;
			client_in_list = true;
			break;
		}
	}
	if (!client_in_list)
	{
		client_list.push_back(Client(client_list.size() + 1, client_name, client_firstname));
	}

	for (Client client : client_list) std::cout << client;

}