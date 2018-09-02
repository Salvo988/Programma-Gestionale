#ifndef BUFFER
#define BUFFER 100
#endif
#define _CRT_SECURE_NO_WARNINGS
#include"Articolo.h"

typedef struct Listino *listino;

struct Listino* AggiungiArticolo(listino listino,unsigned int ID, char nome,char descrizione,char marca,float prezzo);

