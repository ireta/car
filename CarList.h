#ifndef CARLIST_H
#define CARLIST_H
#include "Car.h"

class CarList{
    Car* head;
public:
    CarList(){head=NULL;}; //initialises empty list
    ~CarList();//deletes all cars
    void add_car(Car* new_car);
    void remove_brand(int owner_id);
    void print();
    CarList(const CarList &x);
    //CarList &operator=(const CarList &x);
};

#endif

