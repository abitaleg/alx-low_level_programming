#!/bin/bash
gcc -wall -wextra -werror -pedantic  -c*.c
ar rc liblall.a *.o
