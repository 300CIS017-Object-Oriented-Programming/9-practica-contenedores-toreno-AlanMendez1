//
// Created by alanm on 1/04/2025.
//

#ifndef TORNEO_H
#define TORNEO_H

#include "Videojuego.h"
#include "Jugador.h"
#include <vector>

using namespace std;

class Torneo {
private:
    vector<Videojuego> videojuegosDisponibles;
    vector<Jugador> jugadoresRegistrados;

public:
    Torneo(vector<Jugador> jugadoresRegistrados, vector<Videojuego> videojuegosDisponibles);
    void imprimirJugadoresRegistrados();
    void imprimirVideojuegosDisponibles();
    void agregarVideojuego(const Videojuego& videojuego);
    void agregarJugador(const Jugador& jugador);
    
};

#endif // TORNEO_H