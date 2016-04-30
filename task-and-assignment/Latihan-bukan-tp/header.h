#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	char nim[15];
	char nama[50];
	char kelas[5];
} mahasiswa ;

mahasiswa data[666];
int n;

int longestnam();
int longestnim(); 
int longestcla();
void readfile();
void writefile();
int finddata(char [15]);
void insertdata(mahasiswa);
void deletedata(char[15]);
void updatedata(char[15]);
