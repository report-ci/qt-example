enable_testing()

add_executable(test_one test_one.hpp test_one.cpp)
target_link_libraries(test_one Qt5::Test)
add_test(NAME test_one COMMAND $<TARGET_FILE:test_one> -xml -o test_one.xml)


add_executable(test_two test_two.hpp test_two.cpp)
target_link_libraries(test_two Qt5::Test)
add_test(NAME test_two COMMAND $<TARGET_FILE:test_two> -xml -o test_two.xml)
