#ifndef AEROPLANE_H_
#define AEROPLANE_H_
#include <string>

class Aeroplane {
	public:
		Aeroplane(int number_of_turbines, int size_in_meters, int number_of_passengers, float autonomy_in_kilometers, float top_speed, std::string name);
		virtual ~Aeroplane();
		virtual int fly();
		int get_number_of_turbines();
		int get_size();
		int get_number_of_passengers();
		float get_autonomy();
		float get_top_speed();
		std::string get_name();

	protected:
		int _number_of_turbines;
		int _size_in_meters;
		int _number_of_passengers;
		int _current_speed;
		float _autonomy_in_kilometers;
		float _top_speed;
		std::string _name;

};

#endif /* AEROPLANE_H_ */
