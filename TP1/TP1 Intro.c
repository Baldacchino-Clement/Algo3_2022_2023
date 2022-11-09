#include <stdio.h>
#include <string.h>

#define N 10

typedef char chaine[15];

typedef struct Client{
    int cliid;
    chaine clinom;
}Client;

typedef Client Tab[N];