/*Saya [Agung Sugiarto] dengan nim [1505352], bersumpah bahwa saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan dalam mengerjakan Tugas Praktikum 4 Algoritma & Pemrograman II.
Jika saya melakukan kecurangan maka Allah menjadi saksi saya, dan saya
siap menerima konsekuensinya*/

//I INCLUDING THE LIB
	#include <stdio.h>		//Standard Input & output header
	#include <string.h>		//String manipulation header

//II DECLARING STRUCTURED TYPE
	typedef struct
	{
		int day;		//The day number variable
		int bottom;		//The beginning of busy hours
		int top;		//The end of busy hours
	} sche;		//The name of the structured type

//III THE PROCEDURES
	void printresult(int k, sche invoke[k]);		//This procedure is used to print the result in the way we want it
	void invoker( int clockwerk[8][25], int t, int m, int p);		//This procedure is used to find, using searching method, the free time of all member
	void ward (int t, int m, int p, sche tobi[], sche moni[], sche piyu[]);		//This procedure is used to convert existing schedule to a binary timeline
