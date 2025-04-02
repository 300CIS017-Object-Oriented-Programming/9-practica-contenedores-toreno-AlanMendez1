//
// Created by alanm on 1/04/2025.
//

#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>

using namespace std;

class Jugador {
    private:
    string nickname;
    string nivelRanking;
    string videojuegosInscritos;

    public:
    Jugador(int nickname, string nivelRanking);
    Jugador(const string& string, const string& ranking);

    //GETTERS
    string getnickname();
    string getnivelRanking();
    string getvideojuegosInscritos();

    //SETTERS
    void setnickname(string nickname);
    void setnivelRanking(int nivelRanking);
    void setvideojuegosInscritos(string nombre);

};

#endif //JUGADOR_H

