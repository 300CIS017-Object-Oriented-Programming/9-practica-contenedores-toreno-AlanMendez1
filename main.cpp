#include <iostream>
#include <vector>
#include <string>
#include "src/Jugador.h"
#include "src/Videojuego.h"
#include "src/Torneo.h"

using namespace std;

int main() {
    vector<Videojuego> videojuegos;
    vector<Jugador> jugadores;
    Torneo torneo(jugadores, videojuegos);

    int opcion;
    do {
        cout << "\n--- Menú ---" << endl;
        cout << "1. Registrar un videojuego" << endl;
        cout << "2. Registrar un jugador" << endl;
        cout << "3. Salir" << endl;

        cout << "Ingrese la opción: ";
        cin >> opcion;

        switch (opcion) {
        case 1: {
                int codigo;
                string nombre, genero;
                int dificultad;

                cout << "Código: ";
                cin >> codigo;
                cout << "Nombre: ";
                cin >> nombre;
                cout << "Género: ";
                cin >> genero;
                cout << "Dificultad: ";
                cin >> dificultad;

                Videojuego nuevoVideojuego(codigo, nombre, genero, dificultad);
                videojuegos.push_back(nuevoVideojuego);
                cout << "Videojuego registrado." << endl;
                break;
        }
        case 2: {
                string nickname, ranking;

                cout << "Nickname: ";
                cin >> nickname;
                cout << "Ranking: ";
                cin >> ranking;

                Jugador nuevoJugador(nickname, ranking);
                jugadores.push_back(nuevoJugador);
                cout << "Jugador registrado." << endl;
                break;
        }
        case 3:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opción inválida." << endl;
        }
    } while (opcion != 3);

    return 0;
}