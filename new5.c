#include<stdio.h>
#include<string.h>

typedef struct	
	{
	int nilai;
	char kelas;
	char nama;
	} data;
	
	
int main ()
	{
	int x;
	
	scanf("%d", &x);
	data mahasiswa[x];
	
	
	for (i=0;i<x;i++)
	{
	scanf("%s %s %d", &mahasiswa[i].nama, &mahasiswa[i].kelas, &mahasiswa[i].nilai)
	}
	//for (i=0;i<x;i++)
//	{
	//printf("%s, %s %d", mahasiswa[i].nama, mahasiswa[i].kelas, mahasiswa[i].nilai)
//		
	//}
	
	
	
	
	
	}