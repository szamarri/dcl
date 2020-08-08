#include <string>
#include "../src/Calendar.hpp"

// this tells catch to provide a main()
// only do this in one cpp file
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <vector>

TEST_CASE("a little date test", "[date]") {
  Calendar *calendar = new Calendar(1988, 6, 1);
  std::string date = "" + std::to_string(calendar->getDayOfMonth()) + "/" + std::to_string(calendar->getMonth()) + "/" + std::to_string(calendar->getYear());
  REQUIRE(date == "1/6/1988");
}
