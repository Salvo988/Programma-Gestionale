#ifndef BUFFER
#define BUFFER 100
#endif
#define _CRT_SECURE_NO_WARNINGS

#include"Articolo.h"


struct Articolo
{
	unsigned int ID;
	char *Nome;
	char *Descrizione;
	char *Marca;
	float Prezzo;
	struct Articolo * NextPtr;
} typedef Articolo;

Articolo *CreaArticolo(char Nome[], char descrizione[], char marca[], float prezzo)
{
	Articolo *articolo = malloc(sizeof(Articolo));
	articolo->Nome = Nome;
	articolo->Descrizione = descrizione;
	articolo->Marca = marca;
	articolo->Prezzo = prezzo;

	return articolo;

}
