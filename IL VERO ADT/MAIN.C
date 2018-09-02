/*
Creare una libreria in C che consenta la gestione di un inventario di magazzino.
La libreria deve avere una struttura dati astratta (ADT) chiamata Articolo con i seguenti campi:
Nome, Descrizione, Marca, Prezzo.
La libreria deve inoltre contenere una ADT per memorizzare un listino prezzi e
l'implementazione delle relative funzioni per:

aggiungere, modificare, eliminare un articolo dal listino.

Scrivere inoltre un'applicazione console, che attraverso un menu, permetta di sfruttare le funzioni precedentemente create
per gestire diversi listini di articoli. Implementare inoltre la possibilità di salvare e caricare i diversi listini su file,
chiedendo all'utente il nome da dare il file (sia in caricamento sia in salvataggio).
Avvisare naturalmente l'utente se tenta di caricare un file che non esiste o se sta per sbaglio
sovrascrivendo un file già esistente.
*/

#ifndef BUFFER
#define BUFFER 100
#endif
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"listino.h"


listino NuovoArticolo(listino listino,unsigned int ID);

int main()
{
	FILE *file = NULL;



	printf("\n\n"
		"---------------------------------------------------------------\n"
		"Benvenuto nell'Inventario Raggio di sole,Cosa vuoi fare?\n"
		"---------------------------------------------------------------\n"
		"\n"
		"(1) AGGIUNGI AL LISTINO\n"
		"(2) MODIFICA LISTINO\n"
		"(3) ELIMINA UN PRODOTTO\n"
		"(4) SALVA TUTTI I CONTATTI SU FILE\n"
		"(5) CARICA CONTATTI DA FILE\n"
		"(6) ESCI DAL PROGRAMMA\n"
		"\n"
		"---------------------------------------------------------------\n");

	//FILE *file = NULL;
	listino listino = NULL;
	articolo Art = NULL; unsigned int ID = 0;
	unsigned int scelta = 0;

	while (scelta != 7)
	{
		printf("La tua scelta: ");
		scanf("%d", &scelta);
		switch (scelta)
		{
		case 1:
			listino = NuovoArticolo(listino,ID);
			ID++;
			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;
		case 6:
			return 0;
			break;
		default: printf("Comando non valido.\n");
			system("PAUSE");
			break;
		}
	}

	system("PAUSE");
}

listino NuovoArticolo(listino listino,unsigned int ID)
{
	char nome[BUFFER], descrizione[BUFFER], marca[BUFFER];
	float prezzo;
	rewind(stdin);

	printf("Inserisci nome: ");
	gets_s(nome, BUFFER);
	printf("Inserisci descrizione: ");
	gets_s(descrizione, BUFFER);
	printf("Inserisci marca: ");
	gets_s(marca, BUFFER);
	printf("Inserisci prezzo: ");
	scanf("%f", &prezzo);

	return AggiungiArticolo(listino,ID, nome, descrizione, marca, prezzo);
}
