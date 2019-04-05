#ifndef CAR_H
#define CAR_H

#include <iostream>

using namespace std;

class Car{
    char* brand;
	int licence_number;
	int owner_id;
	int price;
    Car* next;
public:
    Car(char* brand,int licence_number,int owner_id,int price);
    //prints all data of this car
    ~Car(){};//deletes all data of this car
    void print();//prints data off this car
    //other methods if necessary
    void set_brand(char* new_brand){brand=new_brand;};
    void set_licence_number(int number){licence_number=number;};
    void set_owner_id(int id){owner_id=id;};
    void set_price(int new_price){price=new_price;};
    char* get_brand(){return brand;};
    int get_licence_number(){return licence_number;};
    int get_owner_id(){return owner_id;};
    int get_price(){return price;};
    Car* get_next(){return next;};
    void set_next(Car* new_car){next=new_car;};
};
#endif 

