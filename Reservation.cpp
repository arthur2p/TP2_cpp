#include "Reservation.h"

Reservation::Reservation(Date& firstDate, int numberNights, Hotel& hotel, int chambreId, Client& client) : 
    _firstDate(firstDate), _numberOfNights(numberNights), _hotelId(hotel.id()), _chambreId(chambreId), _clientId(client.id()), _totalPrice(calculprice(hotel, chambreId))
{
    bool status = isNumberNights(numberNights);
    assert(status && "Number of nights is not valid");
    bool statusBis = isDate(firstDate);
    assert(statusBis && "Date is not valid");
    bool statusBisBis = isChambreFree(hotel, chambreId);
    assert(statusBisBis && "Chambre is not free");
}

Date Reservation::firstDate() const {
    return _firstDate;
}

int Reservation::numberOfNights() const {
    return _numberOfNights;
}

int Reservation::hotelId() const {
    return _hotelId;
}

int Reservation::chambreId() const {
    return _chambreId;
}

int Reservation::clientId() const {
    return _clientId;
}

int Reservation::totalprice() const {
    return _totalPrice;
}

void Reservation::updateDate(int day, int month, int year) {
    _firstDate.updateDay(day);
    _firstDate.updateMonth(month);
    _firstDate.updateYear(year);
}

void Reservation::updateNumberOfNights(int newNumber) {
    _numberOfNights = newNumber;
}


int Reservation::calculprice(Hotel hotel, int chambreId) {
    return hotel.room().at(chambreId-1).price() * _numberOfNights;
}


bool isNumberNights(int number) {
    if (number > 0)
        return true;
    else
        return false;
}

bool isDate(Date date) {
    if (date.year() >= 2023)
        return true;
    else
        return false;
}

bool isChambreFree(Hotel hotel, int chambreId) {
    if (hotel.room().at(chambreId-1).reserved())
        return false;
    else
        return true;
}