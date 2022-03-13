#include "fleet.h"
#include <string>
#include <iostream>
#include <vector>

void Fleet::print_fleet_data(std::vector<Aeroplane*> fleet) {

    for (unsigned int i=0; i<fleet.size();i++) {
		std::cout << "Plane name: "<< fleet[i]->get_name() << std::endl;
		std::cout << "Current speed: "<< fleet[i]->fly() << std::endl;
		std::cout << "Top speed: "<< fleet[i]->get_top_speed() << std::endl;
		std::cout << "Autonomy: "<< fleet[i]->get_autonomy() << std::endl;
		std::cout << "Number of passengers: "<< fleet[i]->get_number_of_passengers() << std::endl;
		std::cout << "Number of Turbines: " << fleet[i]->get_number_of_turbines() << std::endl;

		if (Fighter_Aircraft* aircraft = dynamic_cast<Fighter_Aircraft*>(fleet[i])){
			 std:: cout << "Number of missiles: " << aircraft->get_number_of_missiles() << std::endl;
			 aircraft->shoot();
		     std:: cout << "Number of missiles: " << aircraft->get_number_of_missiles() << std::endl;
		}
		std::cout << std::endl;
	}
}

std::vector<Aeroplane*> Fleet::instantiate_fleet(int number_of_planes) {

    std::vector<Aeroplane*> fleet;

    Aeroplane *concorde = new Jet_Plane(5, 62, 580, 12000.8, 2179.2, "Concorde", "British Aircraft Corporation");
	Aeroplane *f22 = new Fighter_Aircraft(5, 22, 2, 2000.0, 2414.016, "F22", 8);
	Aeroplane *f16 = new Fighter_Aircraft(3, 19, 1, 3015.6, 2830.50, "F16", 12);
	Aeroplane *su_27 = new Fighter_Aircraft(7, 20, 1, 3030.2, 7200, "SU-27", 12);
	Aeroplane *f_12 = new Fighter_Aircraft(3, 18, 1, 1812.2, 2329.2, "F12", 6);
	Aeroplane *boeing777 = new Jet_Plane(2, 35, 300, 4000.2, 870.5, "Boeing 777", "LATAM");
	Aeroplane *a380 = new Jet_Plane(3, 30, 420, 3750.7, 700.89, "AirBus 380", "Air France");
	//Aeroplane *hercules;
	Aeroplane *antonov = NULL;

    if (number_of_planes > 6)
        antonov = new Jet_Plane(10, 84, 1280, 14003.35, 450.80, "Antonov An-225", "Mryia Cargo");

    fleet.push_back(concorde);
    fleet.push_back(f22);
    fleet.push_back(f16);
    fleet.push_back(su_27);
    fleet.push_back(boeing777);
    fleet.push_back(a380);
    fleet.push_back(antonov);
    fleet.push_back(f_12);
    //fleet.push_back(hercules);

    return fleet;
}
