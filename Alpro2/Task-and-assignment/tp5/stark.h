/*Saya [Agung Sugiarto] dengan nim [1505352], bersumpah bahwa saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan dalam mengerjakan Tugas Praktikum 4 Algoritma & Pemrograman II.
Jika saya melakukan kecurangan maka Allah menjadi saksi saya, dan saya
siap menerima konsekuensinya*/

//I INCLUDING THE LIB
#include <stdio.h>		//Standard Input & output header
#include <string.h>		//String manipulation header
#include <math.h>		//Mathematical Manipulation Header
#include <stdlib.h>		//Standard Library of General Purpose Function

//DECLARING STRUCUTURED TYPE
typedef struct
{
	char binary[11];		//Here we store the 10 bit Binary number
} puck ;		//Name of this struct - Yes, Puck are cute, that's why i name it so

//II THE PROCEDURE
int binary_decimal(int n);		//This Function converts the binary number (as integer) to Decimal number - WOLOLOOO
int susscan( int t, int m, int p, puck tobi[], puck moni[], puck piyu[], puck mark[]); //At the core, This function scans for suspicious data
void sortmerg( int n1, int n2, puck inp1[], puck inp2[], puck mergres[]);		//This Pocedure merges two array in sorted order
void sorter( int arlen, puck inp[arlen]);		//This procedure sorts the datas wit insertion method
