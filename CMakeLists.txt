cmake_minimum_required(VERSION 3.21)
project(Module_0)

set(CMAKE_CXX_STANDARD 98)
add_compile_options(-Wall -Wextra -Werror)

add_executable(Module_0_ex00 ex00/megaphone.cpp)
add_executable(Module_0_ex01 ex01/PhoneBook.cpp ex01/PhoneBook.hpp ex01/Contact.cpp ex01/Contact.hpp ex01/main.cpp)
