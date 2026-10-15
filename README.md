# Validador de Contraseña Segura en C++

Programa de consola escrito en C++ que evalúa la fortaleza de una contraseña según 4 reglas de seguridad. Proyecto del ejercicio de ciberseguridad básica: *"construir herramientas básicas de protección"*.

---

##  Descripción

El usuario ingresa una contraseña y el programa verifica cuántas de estas reglas cumple:

| # | Regla |
|---|-------|
| 1 | Tiene **8 caracteres o más** |
| 2 | Contiene al menos una **letra mayúscula** (A-Z) |
| 3 | Contiene al menos un **número** (0-9) |
| 4 | Contiene al menos un **carácter especial**: `! @ # $ % & *` |

Además, si la contraseña no es FUERTE, el programa **muestra qué le falta** para mejorarla (por ejemplo: agregar una mayúscula o un número).

### Clasificación

| Reglas cumplidas | Resultado |
|------------------|-----------|
| 0 a 2 | **DÉBIL** |
| 3 | **MEDIA** |
| 4 | **FUERTE** |

---

## Estructura del código

Esta versión es **modular**: cada regla tiene su propia función y el `main` queda limpio.

| Función | Qué hace |
|---------|----------|
| `tieneLongitudMinima()` | Verifica que haya 8 caracteres o más |
| `tieneMayuscula()` | Busca una letra de la A a la Z |
| `tieneNumero()` | Busca un dígito del 0 al 9 |
| `tieneEspecial()` | Busca alguno de los caracteres `! @ # $ % & *` |
| `calcularPuntaje()` | Suma cuántas reglas se cumplen (0 a 4) |
| `clasificar()` | Convierte el puntaje en DÉBIL, MEDIA o FUERTE |
| `mostrarSugerencias()` | Indica qué reglas faltan para fortalecer la contraseña |

Conceptos usados: `string`, `bool`, ciclo `for`, `if/else`, funciones, operador `!` y paso de parámetros por referencia constante.

---

##  Requisitos

- Un compilador de C++ (por ejemplo **g++**)
- Terminal o consola

Para comprobar que tienes g++ instalado:

```bash
g++ --version
```

---

##  Cómo compilar y ejecutar

```bash
# 1. Clonar el repositorio
git clone https://github.com/algutier46-hub/validador-contrasena-cpp.git
cd validador-contrasena-cpp

# 2. Compilar
g++ Parte1.cpp -o parte1

# 3. Ejecutar
./parte1          # Linux / macOS
parte1.exe        # Windows
```

>  **Windows:** si ves caracteres extraños al imprimir "DÉBIL", ejecuta `chcp 65001` antes del programa.

---

##  Ejemplos de uso

```
Ingrese una contraseña: Alfg
Reglas cumplidas: 1/4
Seguridad: DÉBIL

Para hacerla más fuerte:
 - Usa 8 caracteres o más (te faltan 4)
 - Agrega al menos un número (0-9)
 - Agrega un carácter especial (! @ # $ % & *)
```

```
Ingrese una contraseña: Alfg1234
Reglas cumplidas: 3/4
Seguridad: MEDIA

Para hacerla más fuerte:
 - Agrega un carácter especial (! @ # $ % & *)
```

```
Ingrese una contraseña: Alfg123!
Reglas cumplidas: 4/4
Seguridad: FUERTE

¡Excelente! Tu contraseña cumple todas las reglas.
```

### Casos de prueba

| Contraseña | Reglas cumplidas | Resultado |
|------------|------------------|-----------|
| `alfg` | 0 | DÉBIL |
| `Alfg` | 1 (mayúscula) | DÉBIL |
| `alfg1234` | 2 (longitud, número) | DÉBIL |
| `Ab1!` | 3 (mayúscula, número, especial) | MEDIA |
| `Alfg1234` | 3 (longitud, mayúscula, número) | MEDIA |
| `Alfg123!` | 4 | FUERTE |

---

##  Estructura del repositorio

```
.
├── Parte1.cpp    # Código fuente del validador
├── .gitignore    # Archivos que Git debe ignorar
└── README.md     # Este archivo
```

---

## Funciones ya implementadas

- Validación de las 4 reglas
- Clasificación DÉBIL / MEDIA / FUERTE
- Sugerencias personalizadas para mejorar la contraseña

##  Posibles mejoras

- Pedir la contraseña de nuevo hasta que sea FUERTE
- Ocultar la contraseña mientras se escribe
- Detectar contraseñas comunes (`123456`, `password`)

---

##  Autor

**Tu Nombre**
GitHub: [algutier46-hub](https://github.com/algutier46-hub)

---

##  Licencia

Proyecto con fines educativos. Libre para usar y modificar.

