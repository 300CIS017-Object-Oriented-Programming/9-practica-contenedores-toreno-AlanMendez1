//
// Created by alanm on 1/04/2025.
//

#include "Torneo.h"
#include "Jugador.h"
#include "Videojuego.h"
#include <iostream>

using namespace std;

Torneo::Torneo(vector<Jugador> jugadoresRegistrados, vector<Videojuego> videojuegosDisponibles) :
    jugadoresRegistrados(jugadoresRegistrados), videojuegosDisponibles(videojuegosDisponibles) {}

ostream operator<<(const ostream& lhs, const Jugador& rhs);

ostream operator<<(const ostream& lhs, const Videojuego& rhs);


void Torneo::imprimirJugadoresRegistrados() {
    cout << "Jugadores Registrados en el Torneo:" << endl;
    for (const Jugador& jugador : jugadoresRegistrados) {
        cout << jugador << endl;
    }


}

void Torneo::imprimirVideojuegosDisponibles() {
    cout << "Videojuegos Disponibles:" << endl;
    for (const Videojuego& videojuego : videojuegosDisponibles)
    {
        cout << videojuego << endl;
    }
}
