#include <iostream>
#include <string>
#include "Cliente.h"
#include "Chofer.h"
#include "RegistroPasajero.h"
#include "RegistroChofer.h"

using namespace std;

// Funciones para las opciones del menú
void iniciarSesion(Cliente& cliente, Chofer& chofer)
{
    // Lógica para iniciar sesión
    // Implementa la lógica necesaria para el inicio de sesión.
    // Puedes utilizar los parámetros cliente y chofer para manejar las sesiones.
}

Cliente registrarCliente()
{
    // Registro de Pasajero
    Cliente nuevoPasajero = RegistroPasajero::registrarPasajero();
    cout << "Registro exitoso como cliente. Ahora puedes iniciar sesión." << endl;
    return nuevoPasajero;
}

Chofer registrarChofer()
{
    // Registro de Chofer
    Chofer nuevoChofer = RegistroChofer::registrarChofer();
    cout << "Registro exitoso como chofer. Ahora puedes iniciar sesión." << endl;
    return nuevoChofer;
}

int main()
{
    Cliente clienteActual("default_login", "default_password", "0", "0"); // Cliente actualmente en sesión
    Chofer choferActual("default_login", "default_password", "0", "0");  // Chofer actualmente en sesión

    int opcion;

    do
    {
        cout << "Bienvenido a la aplicación. Por favor, elige tu opción:" << endl;
        cout << "1. Iniciar Sesión" << endl;
        cout << "2. Registrarse como Cliente" << endl;
        cout << "3. Registrarse como Chofer" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese el número correspondiente a su elección: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1: iniciarSesion(clienteActual, choferActual); break;
        case 2: clienteActual = registrarCliente(); break;
        case 3: choferActual = registrarChofer(); break;
        case 4: cout << "Gracias por usar la aplicación. ¡Hasta luego!" << endl; break;
        default: cout << "Opción no válida. Por favor, elige una opción válida." << endl; break;
        }

    } while (opcion != 4);

    return 0;
}