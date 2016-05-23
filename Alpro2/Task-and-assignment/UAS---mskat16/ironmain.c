#include "stark.h"

int main()
{
	char pita[1001];		//Variabel declaration
	int counter=0;

	scanf("%1000[^\n]s", pita);		//Input
	startkata(pita);		//Starting process
	counter+=kvacheck(getckata()) ;	//Hitung jumlah pasangan yag sesuai urutan	
	while(eopkata(pita)==0)		//Selama kalimat belum berakhir:
	{
		inckata(pita);		//Lanjutke kata berikut
		counter+=kvacheck(getckata()) ;	//Hitung jumlah pasangan yag sesuai urutan	
	}
	printf("%d\n",counter );		//Print hasilnya


	return 0;
}