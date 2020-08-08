#pragma once

class Calendar
{
private:
    int century;
    int year;
    int month;
    int dayOfMont;
public:
    Calendar(int centyryParm, int yearParm, int monthParm, int dayOfMonthParm);
    Calendar(int yearParm, int monthParm, int dayOfMonthParm);
    int getYear();
    int getMonth();
    int getDayOfMonth();
    ~Calendar();
};
