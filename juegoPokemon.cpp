#include <iostream>
using namespace std;

int opcionPersonaje1; // Guardar la opción del personaje del jugador 1
int opcionPersonaje2; // Guardar la opción del personaje del jugador 2
int personaje1;       // Guardar el personaje del jugador 1
int personaje2;       // Guardar el personaje del jugador 2
int hp1 = 180;        // Guardar los puntos de salud del jugador 1
int hp2 = 180;        // Guardar los puntos de salud del jugador 2
int turno = 1;        // Guardar el turno actual (1 para jugador 1, 2 para jugador 2)
int ataque;           // Guardar el ataque seleccionado por el jugador

int main()
{
    // Menu para Seleccionar Personaje jugador 1
    do
    {
        cout << "----------------------------------" << endl;
        cout << "Bienvenido al juego de Pokemon!" << endl;
        cout << "1. Bulbasaur" << endl;
        cout << "2. Charmander" << endl;
        cout << "3. Squirtle" << endl;
        cout << "4. Pikachu" << endl;
        cout << "Selecciona tu Pokemon inicial (Primer Jugador):";
        cin >> opcionPersonaje1;

        if (opcionPersonaje1 < 1 || opcionPersonaje1 > 4)
        {
            cout << "Opción no válida para Jugador 1, por favor selecciona una opción entre 1 y 4." << endl;
        }
    } while (opcionPersonaje1 < 1 || opcionPersonaje1 > 4); 

    // Menu para Seleccionar Personaje jugador 2
    do
    {
        cout << "----------------------------------" << endl;
        cout << "Bienvenido al juego de Pokemon!" << endl;
        cout << "1. Bulbasaur" << endl;
        cout << "2. Charmander" << endl;
        cout << "3. Squirtle" << endl;
        cout << "4. Pikachu" << endl;
        cout << "Selecciona tu Pokemon inicial (Segundo Jugador):";
        cin >> opcionPersonaje2;

        if (opcionPersonaje2 < 1 || opcionPersonaje2 > 4)
        {
            cout << "Opción no válida para Jugador 2, por favor selecciona una opción entre 1 y 4." << endl;
        }
    } while (opcionPersonaje2 < 1 || opcionPersonaje2 > 4); 

    // Asignar Personajes y puntos de salud a cada jugador1
    switch (opcionPersonaje1)
    {
    case 1:
        cout << "Jugador 1 ha seleccionado: Bulbasaur" << endl;
        personaje1 = 1;
        hp1 = 180; 
        break;
    case 2:
        cout << "Jugador 1 ha seleccionado: Charmander" << endl;
        personaje1 = 2;
        hp1 = 190; 
        cout << R"(
            _//    \_
           /  _   _  \
          |  () ()   |       (  (
          |          |      )  ) )
           \  '---'  /      (  ( (
           /`-------`\       )  )
          /   _   _   \     (__(
         |   / \ / \   |     //
         |  |   V   |  |____//
          \  \_____/  /     /
          /           \____/
         (____/| |____)" << endl;
        break;
    case 3:
        cout << "Jugador 1 ha seleccionado: Squirtle" << endl;
        personaje1 = 3;
        hp1 = 190; 
        break;
    case 4:
        cout << "Jugador 1 ha seleccionado: Pikachu" << endl;
        personaje1 = 4;
        hp1 = 200; 
        break;
    default:
        cout << "Opción no válida para Jugador 1" << endl;
        break;
    }

    // Asignar Personajes y puntos de salud a cada jugador2
    switch (opcionPersonaje2)
    {
    case 1:
        cout << "Jugador 2 ha seleccionado: Bulbasaur" << endl;
        personaje2 = 1;
        hp2 = 180; 
        break;
    case 2:
        cout << "Jugador 2 ha seleccionado: Charmander" << endl;
        personaje2 = 2;
        hp2 = 190; 
        cout << R"(
            _//    \_
           /  _   _  \
          |  () ()   |       (  (
          |          |      )  ) )
           \  '---'  /      (  ( (
           /`-------`\       )  )
          /   _   _   \     (__(
         |   / \ / \   |     //
         |  |   V   |  |____//
          \  \_____/  /     /
          /           \____/
         (____/| |____)" << endl;
        break;
    case 3:
        cout << "Jugador 2 ha seleccionado: Squirtle" << endl;
        personaje2 = 3;
        hp2 = 190; 
        break;
    case 4:
        cout << "Jugador 2 ha seleccionado: Pikachu" << endl;
        personaje2 = 4;
        hp2 = 200; 
        cout << R"(
        /\_/\
       ( o.o )  ¡Pika!
    )" << endl;
        break;
    default:
        cout << "Opción no válida para Jugador 2" << endl;
        break;
    }

    // --- CICLO PRINCIPAL DE COMBATE ---
    do
    {
        // Mostrar barra de vida del Jugador 1
        if (personaje1 == 1) cout << "Bulbasaur J1 HP: " << hp1 << "  |  ";
        else if (personaje1 == 2) cout << "Charmander J1 HP: " << hp1 << "  |  ";
        else if (personaje1 == 3) cout << "Squirtle J1 HP: " << hp1 << "  |  ";
        else if (personaje1 == 4) cout << "Pikachu J1 HP: " << hp1 << "  |  ";

        // Mostrar barra de vida del Jugador 2
        if (personaje2 == 1) cout << "Bulbasaur J2 HP: " << hp2 << endl;
        else if (personaje2 == 2) cout << "Charmander J2 HP: " << hp2 << endl;
        else if (personaje2 == 3) cout << "Squirtle J2 HP: " << hp2 << endl;
        else if (personaje2 == 4) cout << "Pikachu J2 HP: " << hp2 << endl;

        // Empieza partida Jugador 1
        if (turno == 1)
        {
            if (personaje1 == 1)
            {
                cout << "Escoge tu ataque (Jugador 1 - Bulbasaur): " << endl;
                cout << "1. Latigo Cepa (-30hp)" << endl;
                cout << "2. Hoja Afilada (-45hp)" << endl;
                cout << "3. Sintesis (+35hp)" << endl;
                cout << "4. Rayo Solar (-75hp jugador 2 -15hp jugador 1)" << endl;
                cin >> ataque;

                switch (ataque)
                {
                case 1:
                    cout << "Jugador 1 ha seleccionado: Latigo Cepa" << endl;
                    hp2 -= 30; 
                    break;
                case 2:
                    cout << "Jugador 1 ha seleccionado: Hoja Afilada" << endl;
                    hp2 -= 45; 
                    break;
                case 3:
                    cout << "Jugador 1 ha seleccionado: Sintesis (Recuperas 35hp)" << endl;
                    hp1 += 35; 
                    break;
                case 4:
                    cout << "Jugador 1 ha seleccionado: Rayo Solar" << endl;
                    hp2 -= 75;
                    hp1 -= 15;
                    break;
                default:
                    cout << "Opción no válida para Jugador 1" << endl;
                    break;
                }
            }
            else if (personaje1 == 2)
            {
                cout << "Escoge tu ataque (Jugador 1 - Charmander): " << endl;
                cout << "1. Arañazo (-25hp)" << endl;
                cout << "2. Ascuas (-40hp)" << endl;
                cout << "3. Furia Dragon (-50hp)" << endl;
                cout << "4. Envite Igneo (-75hp jugador 2 -15hp jugador 1)" << endl;
                cin >> ataque;

                switch (ataque)
                {
                case 1:
                    cout << "Jugador 1 ha seleccionado: Arañazo" << endl;
                    hp2 -= 25; 
                    break;
                case 2:
                    cout << "Jugador 1 ha seleccionado: Ascuas" << endl;
                    hp2 -= 40; 
                    break;
                case 3:
                    cout << "Jugador 1 ha seleccionado: Furia Dragon" << endl;
                    hp2 -= 50; 
                    break;
                case 4:
                    cout << "Jugador 1 ha seleccionado: Envite Igneo" << endl;
                    hp2 -= 75;
                    hp1 -= 15;
                    break;
                default:
                    cout << "Opción no válida para Jugador 1" << endl;
                    break;
                }
            }
            else if (personaje1 == 3)
            {
                cout << "Escoge tu ataque (Jugador 1 - Squirtle): " << endl;
                cout << "1. Pistola Agua (-25hp)" << endl;
                cout << "2. Hidrobomba (-40hp)" << endl;
                cout << "3. Acua Cola (-50hp)" << endl;
                cout << "4. Surf (-75hp jugador 2 -15hp jugador 1)" << endl;
                cin >> ataque;

                switch (ataque)
                {
                case 1:
                    cout << "Jugador 1 ha seleccionado: Pistola Agua" << endl;
                    hp2 -= 25; 
                    break;
                case 2:
                    cout << "Jugador 1 ha seleccionado: Hidrobomba" << endl;
                    hp2 -= 40; 
                    break;
                case 3:
                    cout << "Jugador 1 ha seleccionado: Acua Cola" << endl;
                    hp2 -= 50; 
                    break;
                case 4:
                    cout << "Jugador 1 ha seleccionado: Surf" << endl;
                    hp2 -= 75;
                    hp1 -= 15;
                    break;
                default:
                    cout << "Opción no válida para Jugador 1" << endl;
                    break;
                }
            }
            else if (personaje1 == 4)
            {
                cout << "Escoge tu ataque (Jugador 1 - Pikachu): " << endl;
                cout << "1. Impactrueno (-25hp)" << endl;
                cout << "2. Rayo (-40hp)" << endl;
                cout << "3. Chispazo (-50hp)" << endl;
                cout << "4. Voltio Cruel (-75hp jugador 2 -15hp jugador 1)" << endl;
                cin >> ataque;

                switch (ataque)
                {
                case 1:
                    cout << "Jugador 1 ha seleccionado: Impactrueno" << endl;
                    hp2 -= 25; 
                    break;
                case 2:
                    cout << "Jugador 1 ha seleccionado: Rayo" << endl;
                    hp2 -= 40; 
                    break;
                case 3:
                    cout << "Jugador 1 ha seleccionado: Chispazo" << endl;
                    hp2 -= 50; 
                    break;
                case 4:
                    cout << "Jugador 1 ha seleccionado: Voltio Cruel" << endl;
                    hp2 -= 75;
                    hp1 -= 15;
                    break;
                default:
                    cout << "Opción no válida para Jugador 1" << endl;
                    break;
                }
            }
            turno = 2; // Pasa el turno al jugador 2
        }
        else // Menu ataques jugador 2
        {
            if (personaje2 == 1) // Corregido a personaje2
            {
                cout << "Escoge tu ataque (Jugador 2 - Bulbasaur): " << endl;
                cout << "1. Latigo Cepa (-30hp)" << endl;
                cout << "2. Hoja Afilada (-45hp)" << endl;
                cout << "3. Sintesis (+35hp)" << endl;
                cout << "4. Rayo Solar (-75hp jugador 1 -15hp jugador 2)" << endl;
                cin >> ataque;

                switch (ataque)
                {
                case 1:
                    cout << "Jugador 2 ha seleccionado: Latigo Cepa" << endl;
                    hp1 -= 30; 
                    break;
                case 2:
                    cout << "Jugador 2 ha seleccionado: Hoja Afilada" << endl;
                    hp1 -= 45; 
                    break;
                case 3:
                    cout << "Jugador 2 ha seleccionado: Sintesis (Recuperas 35hp)" << endl;
                    hp2 += 35; 
                    break;
                case 4:
                    cout << "Jugador 2 ha seleccionado: Rayo Solar" << endl;
                    hp1 -= 75;
                    hp2 -= 15;
                    break;
                default:
                    cout << "Opción no válida para Jugador 2" << endl;
                    break;
                }
            }
            else if (personaje2 == 2) // Corregido a personaje2
            {
                cout << "Escoge tu ataque (Jugador 2 - Charmander): " << endl;
                cout << "1. Arañazo (-25hp)" << endl;
                cout << "2. Ascuas (-40hp)" << endl;
                cout << "3. Furia Dragon (-50hp)" << endl;
                cout << "4. Envite Igneo (-75hp jugador 1 -15hp jugador 2)" << endl;
                cin >> ataque;

                switch (ataque)
                {
                case 1:
                    cout << "Jugador 2 ha seleccionado: Arañazo" << endl;
                    hp1 -= 25; 
                    break;
                case 2:
                    cout << "Jugador 2 ha seleccionado: Ascuas" << endl;
                    hp1 -= 40; 
                    break;
                case 3:
                    cout << "Jugador 2 ha seleccionado: Furia Dragon" << endl;
                    hp1 -= 50; 
                    break;
                case 4:
                    cout << "Jugador 2 ha seleccionado: Envite Igneo" << endl;
                    hp1 -= 75;
                    hp2 -= 15;
                    break;
                default:
                    cout << "Opción no válida para Jugador 2" << endl;
                    break;
                }
            }
            else if (personaje2 == 3) // Corregido a personaje2
            {
                cout << "Escoge tu ataque (Jugador 2 - Squirtle): " << endl;
                cout << "1. Pistola Agua (-25hp)" << endl;
                cout << "2. Hidrobomba (-40hp)" << endl;
                cout << "3. Acua Cola (-50hp)" << endl;
                cout << "4. Surf (-75hp jugador 1 -15hp jugador 2)" << endl;
                cin >> ataque;

                switch (ataque)
                {
                case 1:
                    cout << "Jugador 2 ha seleccionado: Pistola Agua" << endl;
                    hp1 -= 25; 
                    break;
                case 2:
                    cout << "Jugador 2 ha seleccionado: Hidrobomba" << endl;
                    hp1 -= 40; 
                    break;
                case 3:
                    cout << "Jugador 2 ha seleccionado: Acua Cola" << endl;
                    hp1 -= 50; 
                    break;
                case 4:
                    cout << "Jugador 2 ha seleccionado: Surf" << endl;
                    hp1 -= 75;
                    hp2 -= 15;
                    break;
                default:
                    cout << "Opción no válida para Jugador 2" << endl;
                    break;
                }
            }
            else if (personaje2 == 4) // Corregido a personaje2
            {
                cout << "Escoge tu ataque (Jugador 2 - Pikachu): " << endl;
                cout << "1. Impactrueno (-25hp)" << endl;
                cout << "2. Rayo (-40hp)" << endl;
                cout << "3. Chispazo (-50hp)" << endl;
                cout << "4. Voltio Cruel (-75hp jugador 1 -15hp jugador 2)" << endl;
                cin >> ataque;

                switch (ataque)
                {
                case 1:
                    cout << "Jugador 2 ha seleccionado: Impactrueno" << endl;
                    hp1 -= 25; 
                    break;
                case 2:
                    cout << "Jugador 2 ha seleccionado: Rayo" << endl;
                    hp1 -= 40; 
                    break;
                case 3:
                    cout << "Jugador 2 ha seleccionado: Chispazo" << endl;
                    hp1 -= 50; 
                    break;
                case 4:
                    cout << "Jugador 2 ha seleccionado: Voltio Cruel" << endl;
                    hp1 -= 75;
                    hp2 -= 15;
                    break;
                default:
                    cout << "Opción no válida para Jugador 2" << endl;
                    break;
                }
            }
            turno = 1; // Pasa el turno al jugador 1
        }
        
        system("pause"); // Pausa para leer qué ataque se usó antes de limpiar

    } while (hp1 > 0 && hp2 > 0); // El ciclo se repite mientras ambos tengan vida

    // --- PANTALLA DE GANADOR ---
    system("cls");
    if (hp1 <= 0 && hp2 <= 0)
    {
        cout << "Es un empate!" << endl;
    }
    else if (hp1 <= 0)
    {
        cout << "Jugador 2 gana la partida!" << endl;
    }
    else if (hp2 <= 0)
    {
        cout << "Jugador 1 gana la partida!" << endl;
    }

    return 0;
}