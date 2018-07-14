#!/bin/bash
gcc -c *.c
ar - rc liballa.a
ar -t liballa.a
