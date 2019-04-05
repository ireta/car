#include <iostream>
#include <cstring>
#include "CarList.h"

using namespace std;

CarList::~CarList(){
    Car* erase=head;
    while(head!=NULL){
        erase=head;
        head=head->get_next();
        delete erase;
    }
    //cout<<"deleting carlist"<<endl;
}

void CarList::add_car(Car *new_car){
    if(head==NULL){   
        head=new_car;
        return;
    }
    Car *current=head;  
    Car *old=head;     
    if(current->get_licence_number()>new_car->get_licence_number()){
        head=new_car;
        new_car->set_next(old);
        return;
    }
    current=current->get_next();
    while(current!=NULL){
        if(current->get_licence_number()>new_car->get_licence_number()){
            old->set_next(new_car);
            new_car->set_next(current);
            return;
        }
        old=old->get_next();
        current=current->get_next();
    }
    old->set_next(new_car);
    return;
}

void CarList::print(){
    Car *current=head;
    while(current!=NULL){
        cout<<current->get_brand()<<" "<<current->get_licence_number()<<" "<<current->get_owner_id()<<" "<<current->get_price()<<endl;
        current=current->get_next();
    }
    cout<<endl;
    return;
}

void CarList::remove_brand(int id){
    Car* current=head;
    if(current!=NULL){
        int times{0};
        int deletation{0};
        Car* other=head;
        while(current->get_next()!=NULL){
            if(current->get_owner_id()==id){
                if(current==head){
                    Car* temp=head;
                    head=head->get_next();
                    current=head;
                    delete temp->get_brand();
                    delete temp;
                    deletation++;
                    times++;
                    continue;
                }else{
                    Car *temp=current;
                    other=head;
                    for(int i=0;i<times-deletation-1;i++){
                        other=other->get_next();
                    }
                    current=current->get_next();
                    other->set_next(current);
                    delete temp->get_brand();
                    delete temp;
                }
                deletation++;
            }
            if(current->get_next()!=NULL){
                current=current->get_next();
            }
            times++;
        }
        if(current->get_owner_id()==id){
            if(current==head){
                Car* temp=head;
                head=NULL;
                delete temp->get_brand();
                delete temp; //when i put return program crashes?
            }else{
                Car *temp=current;
                other=head;
                for(int i=0;i<times-deletation-1;i++){
                    other=other->get_next();
                }
                delete temp->get_brand();
                delete temp;
                other->set_next(NULL);
            }
        }
    }
	return;

}

CarList::CarList(const CarList &x){
    head=NULL;
    Car *current=x.head;
    while(current!=NULL){
        Car *new_car;
        new_car=new Car(current->get_brand(),current->get_licence_number(),current->get_owner_id(),current->get_price());
        add_car(new_car);
        current=current->get_next();
    }
}/*
CarList &CarList::operator=(const CarList &x){
    head=NULL;
    Car *current=x.head;
    while(current!=NULL){
        Car *new_car;
        new_car=new Car(current->get_brand(),current->get_licence_number(),current->get_owner_id(),current->get_price());
        add_car(new_car);
        current=current->get_next();
    }
    return *this;
}*/