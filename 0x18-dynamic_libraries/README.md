0x18-dynamic_libraries
gcc -c *.c -fpic
gcc *.o -shared -o libdynamic.so
gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
 export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
