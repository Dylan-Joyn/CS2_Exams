// exam2 (2024177).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Date.h"
#include "Dog.h"

int main() {
   
   Date date1;
    Date date2(17, 7, 2024);
    cout << "Date 1:" << endl;
    date1.getDate1();
    date1.getDate2();
    date1.getDate3();

    cout << endl << "Date 2:" << endl;
    date2.getDate1();
    date2.getDate2();
    date2.getDate3();
    
  
 
    Dog dog1(20, "McDonald", "Golden Doodle");
    Dog dog2(40, "Burger King", "Great Dane");
    cout << endl<< "Dog 1: " << dog1.getStats() << endl;
    cout << dog1.turnOver() << endl;
    cout << dog1.fetch() << endl;

    cout << endl << "Dog 2: " << dog2.getStats() << endl;
    cout << dog2.turnOver() << endl;
    cout << dog2.fetch() << endl;





}
