#!/bin/bash
gcc -Wall -pendatic -Werror _Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
