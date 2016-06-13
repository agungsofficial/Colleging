/*Saya [Agung Sugiarto] dengan nim [1505352], bersumpah bahwa saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan dalam mengerjakan Remidial
Jika saya melakukan kecurangan maka Allah menjadi saksi saya, dan saya
siap menerima konsekuensinya*/

//I INCLUDING THE LIB
#include <stdio.h>		//Standard Input & output header
#include <string.h>		//String manipulation header
#include <stdlib.h>		//Standard Library of General Purpose Function


//II DECLARING GLOBAL VARIABLE 	--Global means it can be used on all files in this assignment
int indeks;
int panjangkata;
char ckata[99];

//II THE PROCEDURES AND FUNCTIONS
void startkata(char pita[]);		//Iniciating global loop
void resetkata();		//Resetting the progress in one word - Unused here
void inckata(char pita[]);		//Increment to next word
char* getckata();		//Taking the current word to main
int getpanjangkata();		//Takingthe length of the word - Unused here
int eopkata(char pita[]);		//Mark the end of sentence.
void sort(int n,char str[99][99]);		//Sorting the string descendedcally
