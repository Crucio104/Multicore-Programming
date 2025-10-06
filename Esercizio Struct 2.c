/*
 * Esercizio Struct 2.c
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

typedef struct Libro{
	char titolo[30];
	float prezzo;
}libro;

int stesso_libro(libro libro1, libro libro2){
	if(libro1.titolo == libro2.titolo && libro1.prezzo == libro2.prezzo){
		return 0;
	}
	return 1;
}


int main(int argc, char **argv)
{
	libro libri[2];
	for(int i = 0; i < 2; i++){
	printf("Inserire titolo del libro %d: ", i); 
	scanf("%s", libri[i].titolo);
	printf("Inserire prezzo del libro %d: ", i);
	scanf("%f", &libri[i].prezzo);
	}
	
	if(stesso_libro(libri[0], libri[1]) == 0){
	printf("I libri sono uguali.\n");
	}
	else{
		printf("I libri non sono uguali.\n");
	}
	
	
	
	
	return 0;
}

