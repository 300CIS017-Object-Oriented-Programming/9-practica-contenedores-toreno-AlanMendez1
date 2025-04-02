cmake_minimum_required(VERSION 3.30)
project(GestotDeTorneos)

set(CMAKE_CXX_STANDARD 20)

add_executable(GestotDeTorneos main.cpp
        src/Videojuego.cpp
        src/Videojuego.h
        src/Jugador.cpp
        src/Jugador.h
        src/Torneo.cpp
        src/Torneo.h)
