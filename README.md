# C-and-Cpp

A scratchpad of small standalone C/C++ programs from coursework — single-file
exercises covering basics like array sums, matrix math, OOP encapsulation,
quadratic roots, and bitwise operators.

## Contents

| File | Topic |
|---|---|
| `addition of array.cpp` | Array element sum |
| `area of a circle.c` / `area of circle.cpp` | Circle area calc |
| `bitwise operator.cpp` | AND / OR / XOR demo |
| `data hiding.cpp` | OOP encapsulation with private members |
| `functions in class string.cpp` | std::string member-function tour |
| `if programs.c` | Conditional logic |
| `matrix.c` | Matrix multiplication (10x10 max, hardcoded) |
| `max of three numbers.cpp` | Max-of-three with branching |
| `reference.cpp` | C++ references vs pointers |
| `roots of quad eqn.cpp` | Quadratic formula |
| `sum array.c` | C-style array sum |
| `sum of first n natural numbers.cpp` | Loop sum |

## Build

Each file is self-contained:

```sh
g++ -std=c++17 -o out "max of three numbers.cpp"
./out
```

For C files use `gcc`. Some programs use `system("cls")`, which is
Windows-only — replace with `system("clear")` on macOS / Linux.
