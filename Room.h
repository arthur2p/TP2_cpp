#pragma once
#include <iostream>

enum class RoomType { Simple, Double, Suite };
class Room
{
public:
	Room(int number, RoomType type, int bed_amount, int price);
	
	int number() const;
	RoomType type() const;
	int bed_amount() const;
	int price() const;
	bool reserved() const;
	
	bool addReservation(int bed_taken);
	bool removeReservation();
	friend std::ostream& operator<<(std::ostream& os, const Room& room);
private:
	int _number;
	int _bed_amount;
	RoomType _type;
	int _price;
	bool _reserved;
	int _bed_taken;
	
};

//Helper function
bool isType(std::string type);