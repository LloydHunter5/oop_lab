#include "lot.hpp"


lot::Lot::Lot(double lat, double lon, double w, double l){
    latitude = lat;
    longitude = lon;
    width = w;
    length = l;
}


double lot::Lot::value(){
    return land_area() * 16;
}

double lot::Lot::land_area(){
    return width * length;
}

double lot::Lot::get_latitude(){
    return latitude;
}

double lot::Lot::get_longitude(){
    return longitude;
}
