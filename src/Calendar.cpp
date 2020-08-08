#include "Calendar.hpp"

Calendar::Calendar(int centyryParm, int yearParm, int monthParm, int dayOfMonthParm) : 
  century(centyryParm), 
  year(yearParm), 
  month(monthParm),
  dayOfMont(dayOfMonthParm) { }

Calendar::Calendar(int yearParm, int monthParm, int dayOfMonthParm) : 
  year(yearParm), 
  month(monthParm),
  dayOfMont(dayOfMonthParm)
{
    this->century = (yearParm - 1900) / 100;
}

int Calendar::getYear()
{
    return this->year;
}

int Calendar::getMonth()
{
    return this->month;
}

int Calendar::getDayOfMonth()
{
    return this->dayOfMont;
}

Calendar::~Calendar()
{
}
