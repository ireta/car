#include <iostream>
#include <cstring>
#include "Car.h"
#include "CarList.h"

using namespace std;

int main(){
    //2 objects of carList:dynamic,automatic
    Car *car1{nullptr};
    car1=new Car((char*)"Audi",2,3,1000);
    Car *car2{nullptr};
    car2=new Car((char*)"Toyota",4,3,2000);
    Car *car3{nullptr};
    car3=new Car((char*)"Mercedes",3,2,3000);
    Car *car4{nullptr};
    car4=new Car((char*)"aa",1,3,1000);
    //Car *car5{nullptr};
    //car5=new Car((char*)"Toyota",6,3,2000);
    //Car *car6{nullptr};
    //car6=new Car((char*)"Mercedes",5,2,3000);
    CarList first_list;
    first_list.add_car(car1);
    first_list.add_car(car2);
    first_list.add_car(car3);
    first_list.add_car(car4);
    //first_list.add_car(car5);
    //first_list.add_car(car6);
    first_list.print();
    //first_list.remove_brand(3);
    //first_list.print();
    /*CarList* second_list{nullptr};
    second_list=new CarList();
    second_list->add_car(car1);
    second_list->add_car(car2);
    second_list->add_car(car3);
    second_list->print();
    second_list->remove_brand(2);
    second_list->print();
    delete second_list;*/
    //CarList copy(first_list);
    //copy.print();
    //CarList copy=first_list;
    //copy.print();
    return 0;
}


