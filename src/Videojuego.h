//
// Created by alanm on 1/04/2025.
//

#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H
#include <string>

using namespace std;

class Videojuego {
    private:
    int codigo;
    string nombre;
    string genero;
    int nivelDificultad;

    public:
    Videojuego(int codigo, string nombre, string genero, int nivelDificultad);

    //SETTER
    int getCodigo(int);
    string getNombre();
    string getGenero();
    int getNivelDificultad(int);

    //GETTER
    void setCodigo(int codigo);
    void setNombre(string nombre);
    void setGenero(string Genero);
    void setNivelDificultad(int nivelDificultad);

};

#endif //VIDEOJUEGO_H