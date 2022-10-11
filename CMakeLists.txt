cmake_minimum_required(VERSION 3.23)
project(Challenge_Inheritance)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Challenge_Inheritance
        Account/Account.cpp
        Account/Account.h
        Utils/Account_Util.cpp
        Utils/Account_Util.h
        main.cpp
        Savings_Account/Savings_Account.cpp
        Savings_Account/Savings_Account.h Checking_Account/Checking_Account.cpp Checking_Account/Checking_Account.h Trust_Account/Trust_Account.cpp Trust_Account/Trust_Account.h I_Printable/I_Printable.cpp I_Printable/I_Printable.h)
