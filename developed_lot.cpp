#include "developed_lot.hpp"

developed_lot::DevelopedLot::DevelopedLot(double lat, double lon, double w, double h, double a, int num_floors) : lot::Lot::Lot(lat, lon, w, h){
    floor_area = a;
    floors = num_floors;
}


double developed_lot::DevelopedLot::floor_area_ratio(){
    return floor_area * floors / land_area();
}

double developed_lot::DevelopedLot::value(){
    return lot::Lot::value() + floor_area * floors * 100;
}

office::Office::Office(double lat, double lon, double w, double h, double a, int num_floors, int num_offices) : developed_lot::DevelopedLot::DevelopedLot(lat, lon, w, h, a, num_floors){
	offices = num_offices;
}

double office::Office::value(){
	return developedlot::DevelopedLot::value() + floor_area * floors + num_offices * 200;
