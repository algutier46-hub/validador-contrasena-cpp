#include <iostream>
#include <string>
using namespace std;

// ---------- Funciones de cada regla ----------

bool tieneLongitudMinima(const string& pass) {
    return pass.length() >= 8;
}

bool tieneMayuscula(const string& pass) {
    for (int i = 0; i < pass.length(); i++) {
        if (pass[i] >= 'A' && pass[i] <= 'Z') {
            return true;   // con encontrar una basta
        }
    }
    return false;
}

bool tieneNumero(const string& pass) {
    for (int i = 0; i < pass.length(); i++) {
        if (pass[i] >= '0' && pass[i] <= '9') {
            return true;
        }
    }
    return false;
}

bool tieneEspecial(const string& pass) {
    for (int i = 0; i < pass.length(); i++) {
        char c = pass[i];
        if (c == '!' || c == '@' || c == '#' || c == '$' ||
            c == '%' || c == '&' || c == '*') {
            return true;
        }
    }
    return false;
}

// ---------- Lógica de puntaje y clasificación ----------

int calcularPuntaje(const string& pass) {
    int puntaje = 0;

    if (tieneLongitudMinima(pass)) puntaje++;
    if (tieneMayuscula(pass))      puntaje++;
    if (tieneNumero(pass))         puntaje++;
    if (tieneEspecial(pass))       puntaje++;

    return puntaje;
}

string clasificar(int puntaje) {
    if (puntaje <= 2) return "DÉBIL";
    if (puntaje == 3) return "MEDIA";
    return "FUERTE";
}

// ---------- Programa principal ----------

int main() {
    string password;

    cout << "Ingrese una contraseña: ";
    getline(cin, password);

    int puntaje = calcularPuntaje(password);

    cout << "Reglas cumplidas: " << puntaje << "/4" << endl;
    cout << "Seguridad: " << clasificar(puntaje) << endl;

    return 0;
}