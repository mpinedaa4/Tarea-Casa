#include <iostream>
#include "Room.hpp"
#include "Person.hpp"
#include <vector>
#include <algorithm>

/*
class Room{
    public:
        std::vector<Person> get_people_in_room(){
            for(Person i : people_in_room){
                cout<<i.name<<"\n";
            }
        }
        void get_person_in(Person persona){
            if(std::find(people_in_room.begin(), people_in_room.end(), persona.name) == people_in_room.end()){
                people_in_room.push_back(persona);
            }
            else{
                cout<<persona.name<<" ya se encuentra en esta habitación.";
            }   
        }
        void get_person_out(Person persona){
            Person index = std::find(people_in_room.begin(), people_in_room.end(), persona);
            if (index != people_in_room.end()){
                people_in_room.erase(index);
            }

        };
};
*/

std::vector<Person> Room::get_people_in_room(){
    for(Person i : people_in_room){
        std::cout<<i.name<<"\n";
    }
}

void Room::get_person_in(Person persona){
    if(std::find(people_in_room.begin(), people_in_room.end(), persona.name) == people_in_room.end()){
        people_in_room.push_back(persona);
    }
    else{
        std::cout<<persona.name<<" ya se encuentra en esta habitación.";
    }   
}

void Room::get_person_out(Person persona){
    Person index = std::find(people_in_room.begin(), people_in_room.end(), persona);
    if (index != people_in_room.end()){
        people_in_room.erase(index);
    }
}