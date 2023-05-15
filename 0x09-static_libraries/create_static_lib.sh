#!/bin/bash
gcc -Wall -Werror -Wextra -c *.c
ar -r liball.a *.o
ranlib liball.a
