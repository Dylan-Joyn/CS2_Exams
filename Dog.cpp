#include "Dog.h"
# include <iostream>
#include <string>
using namespace std;

int Dog::getAge() const {
	return dogAge;
}
string Dog::getStats() const {
	return dogName + " is a " + dogBreed + " age" + to_string(dogAge) + " years";
}

string Dog::turnOver() const {
	return dogName + " rolls around in mud";

}
string Dog::fetch() const {
	return dogName + " catches frisbee 20 ft in the air";

}
Dog::Dog(int dogAge, const string dogName, const string dogBreed) :dogAge(dogAge), dogName(dogName), dogBreed(dogBreed) {
}