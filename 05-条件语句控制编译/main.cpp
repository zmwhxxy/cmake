#include "date.h"

int main(void)
{
    Date dt1, dt2;
    
    dt1.init();
    dt1.print();

    dt2.init(1, 22, 2021);
    dt2.print();

    return 0;
}