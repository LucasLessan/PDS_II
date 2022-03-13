#ifndef FLEET_H_
#define FLEET_H_
#include "fleet.h"
#include "aeroplane.h"
#include "fighteraircraft.h"
#include "jetplane.h"
#include <vector>

class Fleet {
	public:
		void print_fleet_data(std::vector<Aeroplane*> fleet);
		std::vector<Aeroplane*> instantiate_fleet(int number_of_planes);
};


#endif /* FIGHTERAIRCRAFT_H_ */
