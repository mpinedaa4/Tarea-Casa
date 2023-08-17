#include "Person.hpp"
#include <iostream>

/*
class Person{
    public:
        //Constructor
        Person(std::string nombre){
            name = nombre;
        }

        void move(Room room){
            current_room = room;
            cout<<"Te has movido al "<<room.name<<".\n";
        }

        void view_room(){
            cout<<name<<" se encuentra en el "<<current_room.name<<"\n";
        }
};
*/

Person::Person(std::string nombre){
    name = nombre;
}

void Person::move(Room room){
    current_room = room;
    std::cout<<"Te has movido al "<<room.name<<".\n";
}

void Person::view_room(){
    std::cout<<name<<" se encuentra en el "<<current_room.name<<"\n";
}