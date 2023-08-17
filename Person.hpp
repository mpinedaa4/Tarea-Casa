#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
#include "Room.hpp"

class Person{
public:
    std::string name;
    Room main_room;
    Room current_room;

    Person(std::string nombre);
    void move(Room room);
    void view_room();
};
#endif