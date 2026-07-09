#ifndef INFORMACIONMENU_H
#define INFORMACIONMENU_H

#include <iostream>
using namespace std;

inline void mostrarMenu(int numeroJugador)
{
    cout << "----------------------------------" << endl;
    cout << "Bienvenido al juego de Pokemon!" << endl;
    cout << "1. Bulbasaur" << endl;
    cout << "2. Charmander" << endl;
    cout << "3. Squirtle" << endl;
    cout << "4. Pikachu" << endl;
    cout << "Selecciona tu Pokemon inicial (Jugador " << numeroJugador << "): ";
}

#endif