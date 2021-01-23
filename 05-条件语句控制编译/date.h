#ifndef __DATE_H_
#define __DATE_H_

class Date
{
private:
    short month, day, year;

public:
    void init(void);
    void init(int month, int day, int year);
    void print(void);
};

#endif

