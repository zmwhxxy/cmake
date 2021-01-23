#include "account.h"

int main()
{
    Account current1, current2;

    current1.init("Cheers, Mary", 1234567, -1200.99);
    current1.display();

    current2 = current1;
    current2.display();

    current2.init("Jones, Tom", 3512347, 199.40);
    current2.display();

    Account& mtr = current1;
    mtr.display();

    return 0;
}