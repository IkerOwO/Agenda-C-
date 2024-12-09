// Crea una aplicacion que permita crear, guardar y eliminar contactos
#include <iostream>
#include <string>

using namespace std;

void contactos() {
    string nombre;
    int numero;
    int operacion; 

    do {
        std::cout << "Bienvenido al gestor de Contactos" << endl;
        std::cout << "Opciones:" << endl;
        std::cout << "1. Agregar" << endl;
        std::cout << "2. Borrar" << endl;
        std::cout << "3. Salir" << endl;
        cout << "¿Que desea realizar?: " << endl;
        cin >> operacion;

        cin.ignore();

        if (operacion == 1) { 
            cout << "Introduce el Nombre del contacto: " << endl;
            getline(cin, nombre);
            cout << "Introduce el numero del contacto: " << endl;
            cin >> numero;
            std::cout << "Se ha agregado a " << nombre << " con el numero " << numero << endl;
        } else if (operacion == 2) {
            cout << "¿Qué contacto desea eliminar?:  " << endl;
            std::cout << "Contacto eliminado" << endl;
        } else if (operacion == 3) {
            std::cout << "Saliendo del programa..." << endl;
        } else {
            std::cout << "Opcion no valida. Intente de nuevo." << endl;
        }
    } while (operacion != 3); 
}

int main() {
    contactos(); 
    return 0;
}