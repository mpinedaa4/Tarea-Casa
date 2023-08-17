#ifndef ROOM_HPP
#define ROOM_HPP

#include <vector>
#include <string>

class Person;

class Room{
private:
    std::vector<Person> people_in_room;

public:
    std::string name;

    std::vector<Person> get_people_in_room();
    void get_person_in(Person persona);
    void get_person_out(Person persona);
};

#endif
