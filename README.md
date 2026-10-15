#  Validador de Contraseña Segura en C++

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

### Clasificación

| Reglas cumplidas | Resultado |
|------------------|-----------|
| 0 a 2 | **DÉBIL** |
| 3 | **MEDIA** |
| 4 | **FUERTE** |

---

## 🧱 Estructura del código

Esta versión es **modular**: cada regla tiene su propia función y el `main` queda limpio.

| Función | Qué hace |
|---------|----------|
| `tieneLongitudMinima()` | Verifica que haya 8 caracteres o más |
| `tieneMayuscula()` | Busca una letra de la A a la Z |
| `tieneNumero()` | Busca un dígito del 0 al 9 |
| `tieneEspecial()` | Busca alguno de los caracteres `! @ # $ % & *` |
| `calcularPuntaje()` | Suma cuántas reglas se cumplen (0 a 4) |
| `clasificar()` | Convierte el puntaje en DÉBIL, MEDIA o FUERTE |

Conceptos usados: `string`, `bool`, ciclo `for`, `if/else`, funciones y paso de parámetros por referencia constante.

---

## ⚙️ Requisitos

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
git clone https://github.com/TU_USUARIO/NOMBRE_DEL_REPO.git
cd NOMBRE_DEL_REPO

# 2. Compilar
g++ parte1.cpp -o parte1

# 3. Ejecutar
./parte1          # Linux / macOS
parte1.exe        # Windows
```

## 🧪 Ejemplos de uso

```
Ingrese una contraseña: Alfg
Reglas cumplidas: 0/4
Seguridad: DÉBIL
```

```
Ingrese una contraseña: Alfg1234
Reglas cumplidas: 3/4
Seguridad: MEDIA
```

```
Ingrese una contraseña: Alfg123!
Reglas cumplidas: 4/4
Seguridad: FUERTE
```

### Casos de prueba

| Contraseña | Reglas | Resultado |
|------------|--------|-----------|
| `Alfg` | 0 | DÉBIL |
| `Ab1!` | 3 | MEDIA |
| `Alfg1234` | 3 | MEDIA |
| `Alfg123!` | 4 | FUERTE |

---

## 📁 Estructura del repositorio

```
.
├── parte1.cpp    # Código fuente del validador
└── README.md     # Este archivo
```

---

## 🔮 Posibles mejoras

- Pedir la contraseña de nuevo hasta que sea FUERTE
- Mostrar qué reglas faltan por cumplir
- Ocultar la contraseña mientras se escribe
- Detectar contraseñas comunes (`123456`, `password`)

---

## 👤 Autor

**Tu Nombre**
GitHub: [algutier46-hub](https://github.com/algutier46-hub)

---

## 📄 Licencia

Proyecto con fines educativos. Libre para usar y modificar.
