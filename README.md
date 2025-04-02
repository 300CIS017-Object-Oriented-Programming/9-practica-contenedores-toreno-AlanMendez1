# Gestor de Torneos POO

Este proyecto es un gestor de torneos desarrollado en C++ utilizando programación orientada a objetos (POO). Permite registrar jugadores y videojuegos, así como gestionar la inscripción de jugadores en los torneos.

## Estructura del proyecto

El proyecto está organizado en los siguientes archivos:

* `src/Jugador.h`: Define la clase `Jugador` con sus atributos y métodos.
* `src/Jugador.cpp`: Implementa los métodos de la clase `Jugador`.
* `src/Videojuego.h`: Define la clase `Videojuego` con sus atributos y métodos.
* `src/Videojuego.cpp`: Implementa los métodos de la clase `Videojuego`.
* `src/Torneo.h`: Define la clase `Torneo` con sus atributos y métodos para gestionar los torneos.
* `src/Torneo.cpp`: Implementa los métodos de la clase `Torneo`.
* `main.cpp`: Contiene la lógica principal del programa, incluyendo la interfaz de usuario y la gestión de los datos.

## Funcionalidades

El programa permite realizar las siguientes acciones:

* Registrar nuevos jugadores con su nickname y nivel de ranking.
* Registrar nuevos videojuegos con su código, nombre, género y nivel de dificultad.
* Inscribir jugadores en videojuegos existentes.
* Mostrar la lista de videojuegos en los que participa un jugador.
* Calcular y mostrar el promedio de dificultad de los videojuegos inscritos de un jugador.
