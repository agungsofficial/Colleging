/*Saya [Agung Sugiarto] dengan nim [1505352], bersumpah bahwa saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan dalam mengerjakan 
Tugas Praktikum Bukan TP (Latihan Sequential file) Algoritma & Pemrograman II. Jika saya melakukan
kecurangan maka Allah menjadi saksi saya, dan sayasiap menerima 
konsekuensinya*/

//I INCLUDING THE LIB
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//II DECLARING STRUCTURED TYPE
typedef struct
{
	char nim[15];
	char nama[50];
	char kelas[5];
} mahasiswa ;

//III DECLARING THE GLOBAL VARIABLE
mahasiswa data[666];
int n;

//III THE PROCEDURES & THE FUNCTIONS
int longestnam();
int longestnim(); 
int longestcla();
void readfile();
void writefile();
int finddata(char [15]);
void insertdata(mahasiswa);
void deletedata(char[15]);
void updatedata(char[15]);
