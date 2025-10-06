/*
 * Esercizio Struct.c
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

struct Automobile{
float prezzo;
char modello[20];
int cilindrata;
char colore[20];	
};


int main(int argc, char **argv)
{
	struct Automobile automobile[3];
	for(int i = 0; i < 3; i++){
		printf("Inserire prezzo dell'auto %d: ", i);
			scanf("%f", &automobile[i].prezzo);
		printf("Inserire modello dell'auto %d: ", i);
			scanf("%s", automobile[i].modello);
		printf("Inserire cilindrata dell'auto %d: ", i);	
			scanf("%d", &automobile[i].cilindrata);
		printf("Inserire colore dell'auto %d: ", i);	
			scanf("%s", automobile[i].colore);			
	}
	
	
	for (int j = 0; j < 3; j++){
		printf("Prezzo dell'auto %d pari a: %f\n",j, automobile[j].prezzo);
		printf("Modello dell'auto %d pari a: %s\n",j, automobile[j].modello);
		printf("Cilindrata dell'auto %d pari a: %d\n",j, automobile[j].cilindrata);
		printf("Colore dell'auto %d pari a: %s\n",j, automobile[j].colore);
	}
	
	
	return 0;
}

