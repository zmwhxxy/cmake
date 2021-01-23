#include "date.h"
#include <iostream>
#include <ctime>

using namespace std;

void Date::init()
{
    struct tm *ptr;
    time_t sec;
    
    time(&sec);
    ptr = localtime(&sec);

    month = (short)ptr->tm_mon + 1;
    day = (short)ptr->tm_mday;
    year = (short)ptr->tm_year + 1900;

}

void Date::init(int m, int d, int y)
{
    month = (short) m;
    day = (short) d;
    year = (short) y;
}

void Date::print(void)
{
    cout << month << '-' << day << '-' << year << endl;
}