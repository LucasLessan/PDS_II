#ifndef PDS2_DESTINATIONPACKAGES_H
#define PDS2_DESTINATIONPACKAGES_H

#include <map>
#include <vector>
#include <string>

#include "package.h"

class DestinationPackages {
  private:
    std::map<std::string,std::vector<Package*> > dest;
  public:
//    DestinationPackages();
    void add_package(Package* g);
    double custo_total();
    double custo_total(std::string s);
};

#endif
