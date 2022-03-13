#ifndef FIGHTERAIRCRAFT_H_
#define FIGHTERAIRCRAFT_H_
#include "aeroplane.h"
#include <string>

class Fighter_Aircraft: public Aeroplane {
	public:
		Fighter_Aircraft(int number_of_turbines, int size_in_meters, int number_of_passengers, float autonomy_in_kilometers, float top_speed, std::string name, int number_of_missiles);
		void fly_at_max_speed();
		void shoot();
		void shoot(int number_of_missiles_to_fire);
		int fly();
		int get_number_of_missiles();

	private:
		int _number_of_missiles;

};


#endif /* FIGHTERAIRCRAFT_H_ */
