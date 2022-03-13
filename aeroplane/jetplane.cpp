#include "jetplane.h"
#include <string>

Jet_Plane::Jet_Plane(int number_of_turbines, int size_in_meters, int number_of_passengers, float autonomy_in_kilometers, float top_speed, std::string name, std::string company)
    : Aeroplane(number_of_turbines, size_in_meters, number_of_passengers, autonomy_in_kilometers, top_speed, name), _company(company) {}

void Jet_Plane::fly_with_max_capacity() {
	_current_speed = _top_speed/3; // cast to int (?)
}

void Jet_Plane::stop_and_get_passengers(int number_of_extra_passengers) {
	_number_of_passengers+= number_of_extra_passengers;
}

int Jet_Plane::fly() {
	_current_speed = _number_of_turbines*300;
	if (_current_speed > _top_speed) {
		_current_speed = _top_speed;
	}

	return _current_speed;
}

//int Jet_Plane::fly() {
//	current_speed = number_of_turbines*(300+size_in_meters)*(number_of_passengers/500);
//	return current_speed;
//}

std::string Jet_Plane::get_company() {
	return _company;
}

