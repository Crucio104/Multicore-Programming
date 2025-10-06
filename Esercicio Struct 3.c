/*
 * Esercicio Struct 3.c
 * 
 * Copyright 2025 crucio <crucio@kali>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>

typedef struct DataNascita{
		int giorno;
		int mese;
		int anno;
}datanascita;

typedef struct Persona{
	char nome[20];
	char cognome[20];
	int eta;
	datanascita nascita;
	} persona;


int main(int argc, char **argv)
{	
	persona persone[5];
	for(int i = 0; i < 5; i ++){
		printf("Inserisci il nome della persona %d: ",i);
		scanf("%s", persone[i].nome);
		printf("Inserisci il cognome della persona %d: ", i);
		scanf("%s", persone[i].cognome);
		printf("Inserire età della persona %d: ", i);
		scanf("%d", &persone[i].eta);
		printf("Inserire giorno di nascita della peronsa %d: ",i);
		scanf("%d", &persone[i].nascita.giorno);
		printf("Inserire mese di nascita della peronsa %d: ",i);
		scanf("%d", &persone[i].nascita.mese);
		printf("Inserire anno di nascita della peronsa %d: ",i);
		scanf("%d", &persone[i].nascita.anno);
	}
	for(int i = 0; i < 5; i++){
		printf("Dati persona %d:\n", i);
		printf("Nome: %s\nCognome: %s\nEtà: %d\nData di nascita: %d/%d/%d\n", persone[i].nome, persone[i].cognome, persone[i].eta, persone[i].nascita.giorno, persone[i].nascita.mese, persone[i].nascita.anno);
	}
	return 0;
}

