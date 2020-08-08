set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE ON)

add_library(calendarlib Calendar.cpp)

add_executable(main_up main.cpp)

target_link_libraries(main_up calendarlib)

