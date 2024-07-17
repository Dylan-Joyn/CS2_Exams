#include "Date.h"
using namespace std;
Date::Date() {
    day = 1;
    month = 1;
    year = 2000;
}

Date::Date(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}

void Date::getDate1() const {
    cout << month << "/" << day << "/" << year << endl;
}

void Date::getDate2() const {
    cout << getMonth(month) << " " << day << ", " << year << endl;
}

void Date::getDate3() const {
    cout << day << " " << getMonth(month) << " " << year << endl;
}

string Date::getMonth(int month) const {
    switch (month) {
    case 1: return "January";
    case 7: return "July";
    }
}

Date::~Date() {

}