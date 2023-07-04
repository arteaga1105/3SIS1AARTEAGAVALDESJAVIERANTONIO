#include <iostream>
using namespace std;

const int MAX_CONTACTOS = 10;
const int NUM_COLUMNAS = 3;

struct Contacto {
    string nombre;
    string telefono;
    string tipo;
};

Contacto contactos[MAX_CONTACTOS];
int num_contactos = 0;

void agregar_contacto() {
    if (num_contactos < MAX_CONTACTOS) {
        Contacto nuevo_contacto;
        cout << "Ingrese el nombre del contacto: ";
        cin >> nuevo_contacto.nombre;

        bool telefono_valido = false;
        while (!telefono_valido) {
            cout << "Ingrese el numero de telefono del contacto (10 digitos): ";
            cin >> nuevo_contacto.telefono;

            if (nuevo_contacto.telefono.length() == 10) {
                telefono_valido = true;
            } else {
                cout << "El numero de telefono debe tener 10 digitos. Intente nuevamente." << endl;
            }
        }

        cout << "Ingrese el tipo de contacto (Casa/Oficina/Personal/Trabajo): ";
        cin >> nuevo_contacto.tipo;

        contactos[num_contactos] = nuevo_contacto;
        num_contactos++;

        cout << "Contacto agregado exitosamente." << endl;
    } else {
        cout << "La agenda telefonica esta llena. No se puede agregar mas contactos." << endl;
    }
}

void mostrar_contactos() {
    if (num_contactos == 0) {
        cout << "No hay contactos en la agenda." << endl;
    } else {
        cout << "Lista de contactos:" << endl;
        for (int i = 0; i < num_contactos; i++) {
            cout << "Nombre: " << contactos[i].nombre << endl;
            cout << "Telefono: " << contactos[i].telefono << endl;
            cout << "Tipo de contacto: " << contactos[i].tipo << endl;
            cout << endl;
        }
    }
}

void eliminar_contacto() {
    if (num_contactos == 0) {
        cout << "No hay contactos en la agenda." << endl;
        return;
    }

    string nombre;
    cout << "Ingrese el nombre del contacto que desea eliminar: ";
    cin >> nombre;

    bool encontrado = false;
    int indice;

    for (int i = 0; i < num_contactos; i++) {
        if (contactos[i].nombre == nombre) {
            encontrado = true;
            indice = i;
            break;
        }
    }

    if (encontrado) {
        for (int i = indice; i < num_contactos - 1; i++) {
            contactos[i] = contactos[i + 1];
        }

        num_contactos--;
        cout << "Contacto eliminado exitosamente." << endl;
    } else {
        cout << "No se encontro un contacto con ese nombre." << endl;
    }
}

void modificar_contacto() {
    if (num_contactos == 0) {
        cout << "No hay contactos en la agenda." << endl;
        return;
    }

    string nombre;
    cout << "Ingrese el nombre del contacto que desea modificar: ";
    cin >> nombre;

    bool encontrado = false;
    int indice;

    for (int i = 0; i < num_contactos; i++) {
        if (contactos[i].nombre == nombre) {
            encontrado = true;
            indice = i;
            break;
        }
    }

    if (encontrado) {
        Contacto contacto_modificado;
        cout << "Ingrese el nuevo nombre del contacto: ";
        cin >> contacto_modificado.nombre;

        bool telefono_valido = false;
        while (!telefono_valido) {
            cout << "Ingrese el nuevo numero de telefono del contacto (10 digitos): ";
            cin >> contacto_modificado.telefono;

            if (contacto_modificado.telefono.length() == 10) {
                telefono_valido = true;
            } else {
                cout << "El numero de teléfono debe tener 10 digitos. Intente nuevamente." << endl;
            }
        }

        cout << "Ingrese el nuevo tipo de contacto (Casa/Oficina/Personal/Trabajo): ";
        cin >> contacto_modificado.tipo;

        contactos[indice] = contacto_modificado;
        cout << "Contacto modificado exitosamente." << endl;
    } else {
        cout << "No se encontro un contacto con ese nombre." << endl;
    }
}

int main() {
    int opcion;
    do {
        cout << "Menu de opciones:" << endl;
        cout << "1. Agregar contacto" << endl;
        cout << "2. Mostrar contactos" << endl;
        cout << "3. Eliminar contacto" << endl;
        cout << "4. Modificar contacto" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                agregar_contacto();
                break;
            case 2:
                mostrar_contactos();
                break;
            case 3:
                eliminar_contacto();
                break;
            case 4:
                modificar_contacto();
                break;
            case 5:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opcion invalida. Intente nuevamente." << endl;
        }
    } while (opcion != 5);

    return 0;
}
