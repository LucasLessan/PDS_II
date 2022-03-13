#include "fighteraircraft.h"
#include <string>

Fighter_Aircraft::Fighter_Aircraft(int number_of_turbines, int size_in_meters, int number_of_passengers, float autonomy_in_kilometers, float top_speed, std::string name, int number_of_missiles)
    : Aeroplane(number_of_turbines, size_in_meters, number_of_passengers, autonomy_in_kilometers, top_speed, name), _number_of_missiles(number_of_missiles) {}

void Fighter_Aircraft::fly_at_max_speed() {
	_current_speed = _top_speed; // cast to int (?)
}

void Fighter_Aircraft::shoot() {
	_number_of_missiles -= 1;
}

void Fighter_Aircraft::shoot(int number_of_missiles_to_fire) {
	_number_of_missiles -= number_of_missiles_to_fire;
}

int Fighter_Aircraft::fly() {
	_current_speed = _number_of_turbines*700;
	if (_current_speed > _top_speed) {
		_current_speed = _top_speed;
	}

	return _current_speed;
}

//int Fighter_Aircraft::fly() {
//	current_speed = number_of_turbines*(700 + size_in_meters);
//	return current_speed;
//}

int Fighter_Aircraft::get_number_of_missiles() {
	return _number_of_missiles;
}
