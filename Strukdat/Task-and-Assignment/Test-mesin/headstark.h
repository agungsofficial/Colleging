//Heading included
#include <stdio.h>
#include <string.h>

//The List
typedef struct
{
	char name[10];
	int age;
	char sex[3];
}database;

typedef struct
{
	database elmt;
	int next;
}element;

typedef struct
{
	int first;
	element data[10];
}list;

//The Functions & Procedure
void createlist(list *L);
int countelement(list L);
int emptylist(list L);
void addfirst(char name[], int age, char sex[], list *L);
void addafter(int prev, char name[], int age, char sex[], list *L);
void addlast(char name[], int age, char sex[], list *L);
void delfirst(list *L);
void delafter(int prev, list *L);
void dellast(list *L);
void printelement(list L);
void delall(list *L);
/*/*Saya [Agung Sugiarto] dengan nim [1505352], bersumpah bahwa saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan dalam mengerjakan 
soal latihan Matkul Strukdat. Jika saya melakukan kecurangan maka Allah
 menjadi saksi saya, dan saya siap menerima konsekuensinya*/