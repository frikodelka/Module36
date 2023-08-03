cmake_minimum_required(VERSION 3.24.2)

project(Chat)


set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS Core Gui Widgets REQUIRED)
add_executable(Chat main.cpp
    sources/CommandLineInterface.cpp
    sources/CommandLineInterface.h
    sources/Database.cpp
    sources/Database.h
    sources/mainwindow.cpp
    sources/mainwindow.h
    sources/mainwindow.ui
    sources/Message.cpp
    sources/Message.h
    sources/Parsing.cpp
    sources/Parsing.h
    sources/sha1.cpp
    sources/startscreen.h
    sources/startscreen.cpp
    sources/startscreen.ui
    sources/sha1.h
    sources/Test.cpp
    sources/User.cpp
    sources/User.h
    sources/loginform.h
    sources/loginform.cpp
    sources/loginform.ui
    sources/registrationform.h
    sources/registrationform.cpp
    sources/registrationform.ui)
target_link_libraries(Chat PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets)
