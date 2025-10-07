/*
 * Esercizio Array 2.c
 * 
 * Copyright 2025 aless <aless@ALESSIO>
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


/*
 * Esercizio Array 1.c
 * 
 * Copyright 2025 aless <aless@ALESSIO>
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

int main(int argc, char **argv)
{
	int* array = (int *)malloc(sizeof(int));
	int a;
	int size = 0;
	while(1){
		printf("Inserire un valore (0 per terminare): ");
		scanf("%d", &a);
		if(a==0){
			break;
		}
		array[size] = a;
		size++;
		array = realloc(array, (sizeof(array)*(size+1)*sizeof(int)));
	}
	printf("\n\n");
	int max = array[0];
	int min = array[0];
	for(int i = 0; i < size; i++){
		printf("Elemento numero %d dell'array pari a: %d\n", i, array[i]);
		if(array[i] > max){
			max = array[i];
		}
		if(array[i]<min){
			min = array[i];
		}
		}
	
	printf("\n\nMassimo pari a: %d\n\nMinimo pari a: %d\n\n",max, min);
	return 0;
}



