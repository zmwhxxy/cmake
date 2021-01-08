#include <iostream>
using namespace std;

int main()
{
    int var, *ptr;
    var = 100;
    ptr = &var;

    cout << " Value of var: " << var << endl;
    cout << " Address of var: " << &var << endl;

    cout << " Value of ptr: " << ptr << endl;
    cout << " Address of ptr: " << &ptr << endl;

    return EXIT_SUCCESS;
}