#include <iostream>

#include "package.cpp"
#include "twodaypackage.cpp"
#include "overnightpackage.cpp"
#include "destinationpackages.cpp"

int main() {
    Package *p1 = new Package(2,5, "Josias", "Alfeneiros");
    Package *p2 = new Package(5,5, "Carlos", "Alfeneiros");
    Package *p3 = new Package(4,5, "Maria", "Alfeneiros");
    Package *p4 = new Package(2,5, "Maria", "Alfeneiros");
    Package *p5 = new Package(1,5, "Josias", "Alfeneiros");

    DestinationPackages pacotes;
    pacotes.add_package(p1);
    pacotes.add_package(p2);
    pacotes.add_package(p3);
    pacotes.add_package(p4);
    pacotes.add_package(p5);

    std::cout << "Josias: " << pacotes.custo_total("Josias") << std::endl;
    std::cout << "Maria: " << pacotes.custo_total("Maria") << std::endl;
    std::cout << "Carlos: " << pacotes.custo_total("Carlos") << std::endl;
    std::cout << "Total: " << pacotes.custo_total() << std::endl;
    std::cout << std::endl;
    std::cout << "Marcos: " << pacotes.custo_total("Marcos") << std::endl;
    DestinationPackages pacotes2;
    std::cout << "Pacotes2: " << pacotes2.custo_total() << std::endl;

    std::cout << std::endl;

    Package *p6 = new OverNightPackage(2, 5, 7, "Maria", "Rio");
    Package *p7 = new OverNightPackage(3, 2, 1, "Paulo", "Juazeiro");
    Package *p8 = new TwoDayPackage(5, 2, 4, "Josias", "Juazeiro");
    Package *p9 = new TwoDayPackage(2, 5, 3, "Maria", "Juazeiro");
    Package *p0 = new Package(5, 7, "Paulo", "Juazeiro");

    pacotes2.add_package(p6);
    pacotes2.add_package(p7);
    pacotes2.add_package(p8);
    pacotes2.add_package(p9);
    pacotes2.add_package(p0);

    std::cout << "Josias: " << pacotes2.custo_total("Josias") << std::endl;
    std::cout << "Maria: " << pacotes2.custo_total("Maria") << std::endl;
    std::cout << "Paulo: " << pacotes2.custo_total("Paulo") << std::endl;
    std::cout << "Total2: " << pacotes2.custo_total() << std::endl;
    std::cout << std:: endl;

    delete p1;
    delete p2;
    delete p3;
    delete p4;
    delete p5;
    delete p6;
    delete p7;
    delete p8;
    delete p9;
    delete p0;

//    Package p(2, 3, "Meu", "Aqui");
//    std::cout << "Package:" << std::endl;
//    std::cout << "Custo: " << p.get_custo_por_quilo() << std::endl;
//    std::cout << "Peso: " << p.get_peso() << std::endl;
//    std::cout << "Custo: " << p.calculate_cost() << std::endl;
//    std::cout << std::endl;
//
//    TwoDayPackage t(2, 7, 3, "Meu", "Aqui");
//    std::cout << "TwoDayPackage:" << std::endl;
//    std::cout << "Custo: " << t.get_custo_por_quilo() << std::endl;
//    std::cout << "Peso: " << t.get_peso() << std::endl;
//    std::cout << "Custo: " << t.calculate_cost() << std::endl;
//    std::cout << std::endl;
//
//    Package *pacote = new TwoDayPackage(2, 7, 7, "Meu", "Aqui");
//    std::cout << "Package* = TwoDayPackage:" << std::endl;
//    std::cout << "Custo: " << pacote->get_custo_por_quilo() << std::endl;
//    std::cout << "Peso: " << pacote->get_peso() << std::endl;
//    std::cout << "Custo: " << pacote->calculate_cost() << std::endl;
//    std::cout << std::endl;
//    delete pacote;
//
//    OvernightPackage o(2, 5, 2, "Meu", "Aqui");
//    std::cout << "OvernightPackage:" << std::endl;
//    std::cout << "Custo: " << o.get_custo_por_quilo() << std::endl;
//    std::cout << "Peso: " << o.get_peso() << std::endl;
//    std::cout << "Custo: " << o.calculate_cost() << std::endl;
//    std::cout << std::endl;
//
//    Package *pct = new OvernightPackage(2, 5, 2, "Meu", "Aqui");
//    std::cout << "Package* = OvernightPackage:" << std::endl;
//    std::cout << "Custo: " << pct->get_custo_por_quilo() << std::endl;
//    std::cout << "Peso: " << pct->get_peso() << std::endl;
//    std::cout << "Custo: " << pct->calculate_cost() << std::endl;
//    delete pct;
}
