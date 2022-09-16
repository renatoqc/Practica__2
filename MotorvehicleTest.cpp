#include <iostream>
#include "MotorVehicle.h"

using namespace std;

int main(){

    MotorVehicle auto1{"RedBull", "E10", 2022, "Azul con rojo", 1000};
    MotorVehicle auto2{"Ferrari", "E10", 2022, "Rojo", 1000};
    
    auto1.displayCarDetails();
    
    auto2.displayCarDetails();