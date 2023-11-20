#include "RegistroChofer.h"

Chofer RegistroChofer::registrarChofer()
{
    string nombre, apellido, telefono, placaAuto, carnetConducir, password;

    cout << "Registro de Chofer" << endl;
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Apellido: ";
    cin >> apellido;
    cout << "Teléfono: ";
    cin >> telefono;
    cout << "Placa del Auto: ";
    cin >> placaAuto;
    cout << "Número de Carnet de Conducir: ";
    cin >> carnetConducir;
    cout << "Contraseña: ";
    cin >> password;

    // Crear y devolver un nuevo Chofer
    return Chofer(nombre + apellido, password, "30", "0");
}