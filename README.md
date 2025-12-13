# Healthcare Project — Build & Test

Steps to build:

- Install a C compiler (GCC is recommended). On Windows, install MinGW or use WSL for a Linux environment.
- From the project root, run either:

```
make
```
or on Windows (if you have `gcc` on PATH):

```
build.bat
```

This will build `main.exe` and `test.exe`.

# Common Issue Fix

Do not `#include` .c files directly. Create a header file (`healtcareproject.h`) with struct definitions and function prototypes, and `#include` that header from `main.c` and `test.c`. Compile both `main.c`/`test.c` and `healtcareproject.c` and link them together.
