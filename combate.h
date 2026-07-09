// combate.h
#ifndef COMBATE_H
#define COMBATE_H

// seleccion de jugador
int seleccionarOpcion(int numeroJugador);

// Muestra el nombre del pokemon y sus puntos de vida actuales
void mostrarEstado(int personaje, int hp, int numeroJugador);

// Ejecuta el menú de ataques y aplica el daño/curación correspondiente
void ejecutarTurno(int numJugador, int personajePropio, int &hpPropio, int &hpEnemigo);

#endif