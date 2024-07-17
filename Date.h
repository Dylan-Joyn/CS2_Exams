#pragma once
#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int month;
    int day;
    int year;
    string getMonth(int month) const;
public:
    Date();
    Date(int d, int m, int y);
    ~Date();

    void getDate1() const;
    void getDate2() const;
    void getDate3() const;
        
    };

#endif