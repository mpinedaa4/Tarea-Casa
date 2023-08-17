#include <iostream>
#include "House.cpp"
#include "Person.hpp"

using namespace std;

int main(){
    Person person1("Mateo");
    House house1(person1);
    return 0;
};