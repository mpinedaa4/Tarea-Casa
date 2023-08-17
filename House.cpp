#include <iostream>
#include "Person.hpp"
#include "Room.hpp"
#include "Kitchen.cpp"
#include "LivingRoom.cpp"
#include "BedR.cpp"

using namespace std;

class House{
    private:
        Person owner;
        Room rooms[3];
    public:
        House(Person dueno){
            owner = dueno;
            BedR bedroom;
            Kitchen kitchen;
            LivingRoom livingroom;
            rooms[0] = bedroom;
            rooms[1] = kitchen;
            rooms[2] = livingroom;
            dueno.main_room = bedroom;
            dueno.current_room = bedroom;
            cout<<dueno.name<<" es ahora dueñ@ de una casa.";
        }
};