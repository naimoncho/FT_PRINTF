# 🖨️ ft_printf

Proyecto 42 para implementar una versión personalizada de la función `printf` de C.  
Permite formatear y mostrar cadenas, números, y otros tipos de datos por salida estándar.

---

## 🧠 Descripción

`ft_printf` replica la funcionalidad básica de `printf`, soportando conversiones como `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X` y `%p`. El objetivo es comprender el manejo de argumentos variables y la impresión formateada en C.

---

## ⚙️ Compilación

Para compilar el proyecto, ejecuta:

```bash
make
```

---

## 🚀 Uso

Incluye la función en tu proyecto y úsala de forma similar a `printf`:

```c
ft_printf("Hola %s, número: %d\n", "mundo", 42);
```

---

## 💡Ejemplo
```bash
ft_printf("Caracter: %c\n", 'A');
ft_printf("Cadena: %s\n", "Hola mundo");
ft_printf("Entero: %d\n", 123);
ft_printf("Hexadecimal: %x\n", 255);
ft_printf("Puntero: %p\n", ptr);
```

---

## 📁 Estructura

- `ft_printf.c` – Función principal que procesa el formato y controla la impresión.
- `ft_printf_utils.c` – Funciones auxiliares para imprimir diferentes tipos de datos y gestionar conversiones.
- `ft_printf.h` – Archivo de cabecera con prototipos, macros y definiciones.
- `Makefile` – Script para compilar la biblioteca estática `libftprintf.a`.

---

## ✅ Reglas

- Implementar las conversiones básicas: `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, `%p`.
- No usar la función estándar `printf` ni similares en la implementación.
- Gestionar correctamente los argumentos variables con `va_list`.
- Manejar errores y formatos inválidos adecuadamente.
- Código debe ser modular, limpio y seguir las normas de estilo 42.
