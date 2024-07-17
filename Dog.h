#pragma once
#ifndef DOG_H
#define DOG_H
#include<iostream>
#include <string>
using namespace std;

class Dog
{
private:
	int dogAge;
	string dogBreed;
	string dogName;
public:
	int getAge() const;
	string getStats() const;
	string turnOver() const;
	string fetch() const;

	Dog(int dogAge, const string dogName, const string dogBreed);
};
#endif