# ft_printf – Recreating `printf` in C

This is my implementation of `ft_printf`, a foundational project at 42 where we re-create the functionality of the standard `printf` function in C. This project gave me hands-on experience with variadic functions, manual type conversion, and output formatting, while reinforcing modular programming practices in low-level C.

---

## 🚀 Project Overview

The goal of this project was to write a simplified version of the standard `printf` function from scratch. This includes:

- Parsing a format string
- Handling a variable number of arguments
- Converting different data types to formatted output
- Writing each output character manually

This library compiles into a static library `libftprintf.a`, which can be reused in future C projects.

---

## 🧠 What I Learned

- How variadic functions work using `stdarg.h`  
- How to convert integers, hexadecimals, and pointers to strings manually  
- Structuring reusable and testable code in C  
- Writing helper functions for string and character output  
- Implementing custom formatting logic without relying on standard C library I/O functions like `printf`  
- Managing memory carefully and avoiding leaks  
- Writing and maintaining a proper Makefile  
- Combining `ft_printf` with my custom `libft` for extended functionality  

---

## 📁 Project Structure
```
ft_printf/
├── ft_printf.c # Main printf logic and format parser
├── ft_printf.h # Header file with declarations and macros
├── ft_putchar_pf.c # Writes a single character
├── ft_putstr_pf.c # Writes a string
├── ft_putnbr_pf.c # Converts and prints signed integers
├── ft_putuint_pf.c # Converts and prints unsigned integers
├── ft_puthex_pf.c # Converts and prints hex numbers
├── ft_putptr_pf.c # Converts and prints pointers (with "0x" prefix)
├── Makefile # Build rules for compiling the static library
└── libft/ # My custom implementation of C standard library functions
```

---

## ✅ Supported Format Specifiers

| Specifier | Description |
|----------|-------------|
| `%c`     | Print a single character |
| `%s`     | Print a string |
| `%d` / `%i` | Print a signed decimal integer |
| `%u`     | Print an unsigned decimal integer |
| `%x`     | Print an unsigned hexadecimal (lowercase) |
| `%X`     | Print an unsigned hexadecimal (uppercase) |
| `%p`     | Print a pointer (as hexadecimal with `0x` prefix) |
| `%%`     | Print a literal percent sign |

---

## 🧪 Test Your Implementation

You can test your libft implementation using [Francinette](https://github.com/alelievr/francinette), a popular automated testing tool designed for 42 libft projects.

To use Francinette:

1. Clone the repo:
   ```bash
   git clone https://github.com/alelievr/francinette.git
   ```
2. Follow the instructions in its README to set up and run tests.

---

## 🛠️ How to Use

### 1. Clone the repository:

<pre>
git clone https://github.com/your-username/ft_printf.git
cd ft_printf
</pre>

### 2. Build the library:

<pre>
make
</pre>

This will compile all `.c` files and produce the static library `libftprintf.a`. It also builds `libft` as a dependency.

### 3. Include it in your own C program:

In your C file:

```c
#include "ft_printf.h"
```
To compile:

<pre> gcc -Wall -Wextra -Werror main.c libftprintf.a -I. -Ilibft </pre>

## 🛠️ Example Usage:
```c
#include "ft_printf.h"

int main(void)
{
    int score = 95;
    char *name = "Hossein";

    ft_printf("Hello, %s!\n", name);
    ft_printf("You scored %d%% on your test.\n", score);
    ft_printf("Memory address: %p\n", name);
    ft_printf("Hex value: %x | Upper: %X\n", 255, 255);

    return (0);
}
```

---

## 🧾 License

This project is part of the 42 School curriculum. You’re welcome to use and learn from it, but do not copy it directly for your own submission.

---

## 👤 Author

**Hossein Khoshnevis**  
🧠 Software Developer | 📍 Based in the Netherlands  
[LinkedIn](https://www.linkedin.com/in/hossein-khoshnevis)  
[Portfolio](https://hosseinkhoshnevis.vercel.app/)  
[GitHub](https://github.com/hosseinkhoshnevis94)

