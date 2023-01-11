#pragma once
#include "Date.h"
#include "Hotel.h"
#include "Client.h"
#include <assert.h> 

class Reservation
{
public:
	Reservation(Date& firstDate, int numberNights, Hotel& hotel, int chambreId, Client& client);
	Date firstDate() const;
	int numberOfNights() const;
	int hotelId() const;
	int chambreId() const;
	int clientId() const;
	int totalprice() const;
	void updateDate(int day, int month, int year);
	void updateNumberOfNights(int newNumber);
	int calculprice(Hotel hotel, int chambreId);
private:
	Date _firstDate;
	int _numberOfNights;
	int _hotelId;
	int _chambreId;
	int _clientId;
	int _totalPrice;
};

bool isNumberNights(int number);
bool isDate(Date date);
bool isChambreFree(Hotel hotel, int ChambreId);