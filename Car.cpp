#include "Car.h"
#include <iostream>
#include <cstring>

using namespace std;

Car::Car(char* new_brand,int number,int id,int new_price){
    brand=new char[strlen(new_brand)];
    strcpy(brand,new_brand);
    licence_number=number;
    owner_id=id;
    price=new_price;
    next=NULL;
    //cout<<brand<<" "<<licence_number<<" "<<owner_id<<" "<<price<<endl;
}

void Car::print(){
    cout<<brand<<" "<<licence_number<<" "<<owner_id<<" "<<price<<endl;
    return;
}

