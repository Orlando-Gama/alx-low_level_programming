#!/bin/bash

# Compile all .c files into position-independent object files (-fPIC)
gcc -Wall -Werror -Wextra -pedantic -c -fPIC *.c

# Create the dynamic library 'liball.so' from the object files
gcc -shared -o liball.so *.o

# Clean up by removing the object files
rm *.o

