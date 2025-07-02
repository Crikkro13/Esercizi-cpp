cmake_minimum_required(VERSION 3.27)
project(es6)

set(CMAKE_CXX_STANDARD 11)

add_executable(es6 main.cpp
        Product.h
        Order.h
        OrderItem.h
        Order.cpp
        OrderItem.cpp
        Customer.h
        Customer.cpp)
