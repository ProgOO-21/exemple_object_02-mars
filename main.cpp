#include <iostream>

#include "car.h"

using namespace std;

// class => private
class Truck_o {
  public:
    // méthodes
    void set_door_nbr(int nbr_door) 
    { 
        this->nbr_door = nbr_door;
    }

    int get_door_nbr() 
    { 
        // log ...
        return nbr_door;
    }

  private:
    int nbr_door;
    int nbr_wheel;
};

// struct => public


typedef struct
{
    int nbr_door;
    int nbr_wheel;

    // poniteur-fonction
} Car;

typedef struct
{
    int nbr_door;
    int nbr_wheel;
} Truck;

void set_door_car_nbr(Car* car, int nbr) { car->nbr_door = nbr * 2; }

void set_door_truck_nbr(Truck* t, int nbr) {}

int main()
{
    int a = 0;

    cout << "Bonjour, a = " << a << endl;

    Car_o co;
    co.set_door_nbr(4);
    co.nbr_door = 4;

    Truck_o to;

    Truck_o tab_truck[10];
    tab_truck[0].set_door_nbr(2);
    tab_truck[1].set_door_nbr(4);

    to.set_door_nbr(3);

    cout << "Nbr door : " << co.get_door_nbr() << endl;

    Car c;
    Truck t;

    c.nbr_door = 3;

    set_door_car_nbr(&c, 5);
    set_door_truck_nbr(&t, 4);

    cout << sizeof(Car_o) << "  / " << sizeof(Car) << endl;
}
