//
// Created by alanm on 1/04/2025.
//

#include "Videojuego.h"
#include "Jugador.h"

Videojuego::Videojuego(int codigo, string nombre, string genero, int nivelDificultad)
{
    this->codigo = codigo;
    this->nombre = nombre;
    this->genero = genero;
    this->nivelDificultad = nivelDificultad;
}
//GETTERS
int Videojuego::getCodigo(int)
{return codigo;}

string Videojuego::getNombre()
{return nombre;}

string Videojuego::getGenero()
{return genero;}

int Videojuego::getNivelDificultad(int)
{return nivelDificultad;}

//SETTERS
void Videojuego::setCodigo(int codigo)
{this->codigo = codigo;}

void Videojuego::setNombre(string nombre)
{this->nombre = nombre;}

void Videojuego::setGenero(string genero)
{this->genero = genero;}

void Videojuego::setNivelDificultad(int nivelDificultad)
{this->nivelDificultad = nivelDificultad;}