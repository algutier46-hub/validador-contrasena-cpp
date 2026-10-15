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
            return true;
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

// ---------- Puntaje y clasificación ----------

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

// ----------  sugerencias para mejorar ----------

void mostrarSugerencias(const string& pass) {
    cout << "\nPara hacerla más fuerte:" << endl;

    if (!tieneLongitudMinima(pass)) {
        cout << " - Usa 8 caracteres o más (te faltan "
             << 8 - pass.length() << ")" << endl;
    }
    if (!tieneMayuscula(pass)) {
        cout << " - Agrega al menos una letra MAYÚSCULA (A-Z)" << endl;
    }
    if (!tieneNumero(pass)) {
        cout << " - Agrega al menos un número (0-9)" << endl;
    }
    if (!tieneEspecial(pass)) {
        cout << " - Agrega un carácter especial (! @ # $ % & *)" << endl;
    }
}

// ---------- Programa principal ----------

int main() {
    string password;

    cout << "Ingrese una contraseña: ";
    getline(cin, password);

    int puntaje = calcularPuntaje(password);

    cout << "Reglas cumplidas: " << puntaje << "/4" << endl;
    cout << "Seguridad: " << clasificar(puntaje) << endl;

    if (puntaje < 4) {
        mostrarSugerencias(password);
    } else {
        cout << "\n¡Excelente! Tu contraseña cumple todas las reglas." << endl;
    }

    return 0;
}
