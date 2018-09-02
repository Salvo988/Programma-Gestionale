#ifndef BUFFER
#define BUFFER 100
#endif
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include"listino.h"
#include"Articolo.h"

struct Listino
{
	char NomeNegozio[BUFFER];
	unsigned int ID;
	int Prezzo;
	struct listino * NextPtr, *PrevPtr;
	articolo articolo;
} typedef Listino;

Listino *AggiungiArticolo(listino listino, unsigned int ID, char nome, char descrizione, char marca, float prezzo)
{
	if (listino == NULL)
	{
		listino = malloc(sizeof(listino));
		listino->NextPtr = NULL;
		listino->articolo = CreaArticolo(nome,descrizione, marca, prezzo);
		return listino;

	}

	listino->NextPtr = AggiungiArticolo(listino->NextPtr, ID, nome, descrizione, marca, prezzo);

	return listino;
}


