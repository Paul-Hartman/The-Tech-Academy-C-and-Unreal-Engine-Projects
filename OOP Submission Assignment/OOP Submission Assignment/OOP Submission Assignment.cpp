

#include <iostream>
#include "Dog.h"

using std::cout;

int main()
{
    Dog dog1("Hound", "Brown", "2 Feet", "60 pounds");
    cout << "This dog is " << dog1.Height << " tall and " << dog1.Weight << ". He is a " << dog1.Color << " " << dog1.Breed << ". \n";
    dog1.LayDown();
    dog1.Shake();
    dog1.Sit();

}

