#ifndef __ACCOUNT__
#define __ACCOUNT__

#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    string name;
    unsigned long nr;
    double balance;

public:
    bool init(const string&, unsigned long, double);
    void display();
};

#endif