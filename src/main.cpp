#include <iostream>
#include <vector>
#include <Calendar.hpp>
#include "CommandLineParser.hpp"

int main(int argc, char **argv)
{
  Calendar *calendar = new Calendar(2020, 11, 28);
  std::cout << "The date is " << calendar->getDayOfMonth() << "/" << calendar->getMonth() << "/" << calendar->getYear() << std::endl;
  return 0;
}
