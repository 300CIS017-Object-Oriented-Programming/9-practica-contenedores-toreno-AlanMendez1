//
// Created by alanm on 1/04/2025.
//

#include "Jugador.h"
#include "Videojuego.h"

using namespace std;

Jugador::Jugador(int idJugador, string nombre)
{
    this->nickname = nickname;
    this->nivelRanking = nivelRanking;
    this->videojuegosInscritos = videojuegosInscritos;
}

//GETTERS
string Jugador::getnickname()
{return this->nickname;}

string Jugador::getnivelRanking()
{return this->nivelRanking;}

string Jugador::getvideojuegosInscritos()
{return this->videojuegosInscritos;}

//SETTERS
void Jugador::setnickname(string nickname)
{this->nickname = nickname;}

void Jugador::setnivelRanking(int nivelRanking)
{this->nivelRanking = nivelRanking;}

void Jugador::setvideojuegosInscritos(string nombre)
{this->videojuegosInscritos = videojuegosInscritos;}
