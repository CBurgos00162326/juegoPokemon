#include <iostream>
#include "combate.h"
#include "informacionMenu.h"

using namespace std;

// seleccion de jugador
int seleccionarOpcion(int numeroJugador) {
    int opcion;
    do {
        mostrarMenu(numeroJugador);
        cin >> opcion;
        if (opcion < 1 || opcion > 4) {
            cout << "Opcion no valida para Jugador " << numeroJugador 
                 << ", por favor selecciona entre 1 y 4." << endl;
        }
    } while (opcion < 1 || opcion > 4);
    return opcion;
}

// Funcion para mostrar las barras de vida en el ciclo de combate
void mostrarEstado(int personaje, int hp, int numeroJugador) {
    string nombre;
    switch (personaje) {
        case 1: nombre = "Bulbasaur"; break;
        case 2: nombre = "Charmander"; break;
        case 3: nombre = "Squirtle"; break;
        case 4: nombre = "Pikachu"; break;
    }
    cout << nombre << " J" << numeroJugador << " HP: " << hp;
    
    if (numeroJugador == 1) cout << "  |  ";
    else cout << endl;
}

// Funcion para ejecutar el turno de ataque 
void ejecutarTurno(int numJugador, int personajePropio, int &hpPropio, int &hpEnemigo) {
    int ataque;
    
    if (personajePropio == 1) {
        cout << "Escoge tu ataque (Jugador " << numJugador << " - Bulbasaur): " << endl;
        cout << "1. Latigo Cepa (-30hp)\n2. Hoja Afilada (-45hp)\n3. Sintesis (+35hp)\n4. Rayo Solar (-75hp rival, -15hp propio)" << endl;
        cout << "Selecciona tu ataque: ";
        cin >> ataque;
        switch (ataque) {
            case 1: cout << "> Latigo Cepa!" << endl; hpEnemigo -= 30; break;
            case 2: cout << "> Hoja Afilada!" << endl; hpEnemigo -= 45; break;
            case 3: cout << "> Sintesis! (Recuperas 35hp)" << endl; hpPropio += 35; break;
            case 4: cout << "> Rayo Solar!" << endl; hpEnemigo -= 75; hpPropio -= 15; break;
            default: cout << "Opcion no valida. Pierdes el turno." << endl; break;
        }
    } 
    else if (personajePropio == 2) {
        cout << "Escoge tu ataque (Jugador " << numJugador << " - Charmander): " << endl;
        cout << "1. Zarpazo (-25hp)\n2. Ascuas (-40hp)\n3. Furia Dragon (-50hp)\n4. Envite Igneo (-75hp rival, -15hp propio)" << endl;
        cout << "Selecciona tu ataque: ";
        cin >> ataque;
        switch (ataque) {
            case 1: cout << "> Zarpazo!" << endl; hpEnemigo -= 25; break;
            case 2: cout << "> Ascuas!" << endl; hpEnemigo -= 40; break;
            case 3: cout << "> Furia Dragon!" << endl; hpEnemigo -= 50; break;
            case 4: cout << "> Envite Igneo!" << endl; hpEnemigo -= 75; hpPropio -= 15; break;
            default: cout << "Opcion no valida. Pierdes el turno." << endl; break;
        }
    }
    else if (personajePropio == 3) {
        cout << "Escoge tu ataque (Jugador " << numJugador << " - Squirtle): " << endl;
        cout << "1. Pistola Agua (-25hp)\n2. Hidrobomba (-40hp)\n3. Acua Cola (-50hp)\n4. Surf (-75hp rival, -15hp propio)" << endl;
        cout << "Selecciona tu ataque: ";
        cin >> ataque;
        switch (ataque) {
            case 1: cout << "> Pistola Agua!" << endl; hpEnemigo -= 25; break;
            case 2: cout << "> Hidrobomba!" << endl; hpEnemigo -= 40; break;
            case 3: cout << "> Acua Cola!" << endl; hpEnemigo -= 50; break;
            case 4: cout << "> Surf!" << endl; hpEnemigo -= 75; hpPropio -= 15; break;
            default: cout << "Opcion no valida. Pierdes el turno." << endl; break;
        }
    }
    else if (personajePropio == 4) {
        cout << "Escoge tu ataque (Jugador " << numJugador << " - Pikachu): " << endl;
        cout << "1. Impactrueno (-25hp)\n2. Rayo (-40hp)\n3. Chispazo (-50hp)\n4. Voltio Cruel (-75hp rival, -15hp propio)" << endl;
        cout << "Selecciona tu ataque: ";
        cin >> ataque;
        switch (ataque) {
            case 1: cout << "> Impactrueno!" << endl; hpEnemigo -= 25; break;
            case 2: cout << "> Rayo!" << endl; hpEnemigo -= 40; break;
            case 3: cout << "> Chispazo!" << endl; hpEnemigo -= 50; break;
            case 4: cout << "> Voltio Cruel!" << endl; hpEnemigo -= 75; hpPropio -= 15; break;
            default: cout << "Opcion no valida. Pierdes el turno." << endl; break;
        }
    }
}