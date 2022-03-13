#include <map>
#include <vector>
#include <string>
#include <iterator>

#include "destinationpackages.h"

//DestinationPackages::DestinationPackages() {
//    dest = std::map<std::string,std::vector<Package*>> temp;
//}

void DestinationPackages::add_package(Package* g) {
    std::vector<Package*> v;
    dest.insert(std::make_pair(g->get_nome(), v));
    dest[g->get_nome()].push_back(g);
//    std::vector<Package*>iterator it1;
//    std::map<std::string,std::vector<Package*>>std::iterator it2;
//
//    it = dest.
//    it = dest.mapped_type.end();
//    dest.mapped_type.insert(it, g);
}

double DestinationPackages::custo_total() {
    std::map<std::string,std::vector<Package*> >::iterator it1;
    std::vector<Package*>::iterator it2;
    double count = 0;
    for(it1 = dest.begin(); it1 != dest.end(); ++it1)
        for(it2 = it1->second.begin(); it2 != it1->second.end(); ++it2)
            count += (*it2)->calculate_cost();
    return count;

//    for(it1 = dest.begin(); it1 != dest.end(); ++it1) {
//        for(it2 = it1.second.begin(); it2 != it2.second.end(); ++it2) {
//            count += it2->calculate_cost();
//        }
//    }
}

double DestinationPackages::custo_total(std::string s) {
    double count = 0;
    std::map<std::string,std::vector<Package*> >::iterator it1 = dest.find(s);
    if(it1 != dest.end()) {
        std::vector<Package*>::iterator it2;
        for(it2 = it1->second.begin(); it2 != it1->second.end(); ++it2)
            count += (*it2)->calculate_cost();
    }
    return count;
}
