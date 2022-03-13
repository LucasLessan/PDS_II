#ifndef JETPLANE_H_
#define JETPLANE_H_
#include <string>
#include "aeroplane.h"

class Jet_Plane: public Aeroplane {
	public:
	    Jet_Plane(int number_of_turbines, int size_in_meters, int number_of_passengers, float autonomy_in_kilometers, float top_speed, std::string name, std::string company);
		void fly_with_max_capacity();
		void stop_and_get_passengers(int number_of_extra_passengers);
		int fly();
		std::string get_company();

	private:
		std::string _company;
};

#endif /* JETPLANE_H_ */
