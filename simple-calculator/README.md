# Simple Calculator

Compile with GCC:

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator
```

Run with `./calculator`. Choose 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division, or 0 to quit.

Operands are read as `double` values, so decimal input and fractional division are supported. Results use `%g`, which displays six significant digits by default and may use scientific notation. Division by zero prints an error and returns to the menu.

The program expects two numeric operands per operation. An invalid or missing operand ends the session. Arithmetic is subject to normal floating-point precision and range limits.
