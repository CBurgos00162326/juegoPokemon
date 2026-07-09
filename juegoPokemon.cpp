#include <iostream>
#include <clocale>
#include "informacionMenu.h"
#include "combate.h"

using namespace std;

// Variables globales 
int personaje1, personaje2;
int hp1 = 180, hp2 = 180;
int turno = 1;

int main()
{
    // 1. SELECCIÓN DE PERSONAJES
    //menu del Jugador 1 
    int opcionPersonaje1 = seleccionarOpcion(1);
    system("cls"); 

    //menu del Jugador 2 
    int opcionPersonaje2 = seleccionarOpcion(2);
    system("cls"); 

    // 2. ASIGNACIÓN DE ESTADÍSTICAS INICIALES (JUGADOR 1)
    personaje1 = opcionPersonaje1;
    if (opcionPersonaje1 == 1) { cout << "J1 ha seleccionado a: Bulbasaur" << endl; hp1 = 180; }
    else if (opcionPersonaje1 == 2) { cout << "J1 ha seleccionado a: Charmander" << endl; hp1 = 190; }
    else if (opcionPersonaje1 == 3) { cout << "J1 ha seleccionado a: Squirtle" << endl; hp1 = 190; }
    else if (opcionPersonaje1 == 4) { cout << "J1 ha seleccionado a: Pikachu" << endl; hp1 = 200; }

    // ASIGNACIÓN DE ESTADÍSTICAS INICIALES (JUGADOR 2)
    personaje2 = opcionPersonaje2;
    if (opcionPersonaje2 == 1) { cout << "J2 ha seleccionado a: Bulbasaur" << endl; hp2 = 180; }
    else if (opcionPersonaje2 == 2) { cout << "J2 ha seleccionado a: Charmander" << endl; hp2 = 190; }
    else if (opcionPersonaje2 == 3) { cout << "J2 ha seleccionado a: Squirtle" << endl; hp2 = 190; }
    else if (opcionPersonaje2 == 4) { cout << "J2 ha seleccionado a: Pikachu" << endl; hp2 = 200; }

    cout << "\n==================================" << endl;
    cout << "   TODO LISTO PARA EL COMBATE   " << endl;
    cout << "==================================" << endl;
    
    system("pause"); //Pausa para ver pokemon seleccionado 
    system("cls");   

    // 3. CICLO PRINCIPAL DE COMBATE
    do
    {
        //Barras HP
        mostrarEstado(personaje1, hp1, 1);
        mostrarEstado(personaje2, hp2, 2);
        cout << "----------------------------------" << endl;

        // Turnos 
        if (turno == 1) {
            ejecutarTurno(1, personaje1, hp1, hp2);
            turno = 2;
        } else {
            ejecutarTurno(2, personaje2, hp2, hp1);
            turno = 1;
        }
        
        cout << "----------------------------------" << endl;
        system("pause"); // Pausa para leer el resultado del ataque ejecutado
        system("cls");   

    } while (hp1 > 0 && hp2 > 0);

    // 4. PANTALLA DE GANADOR
    system("cls"); 
    cout << "==================================" << endl;
    cout << "         FIN DEL COMBATE          " << endl;
    cout << "==================================" << endl;

    if (hp1 <= 0 && hp2 <= 0)
    {
        cout << "¡Increíble! Es un triple KO. ¡Es un EMPATE!" << endl;
    }
    else if (hp1 <= 0)
    {
        cout << "¡Felicidades Jugador 2! Tu Pokémon emerge victorioso." << endl;
    }
    else if (hp2 <= 0)
    {
        cout << " Felicidades Jugador 1! Tu Pokémon emerge victorioso." << endl;
    }
    cout << "==================================" << endl;

    return 0;
}