#include <stdio.h>

typedef struct 
{
	int pembilang, penyebut;
}pecahan1;
typedef struct 
{
	int pembilang, penyebut;
}pecahan2;

int main()
{
	int pembilang, penyebut;
	pecahan1 p1;
	pecahan2 p2;
	printf("masukan nilai pembilang dan penyebut pertama:\n");
	scanf("%d %d", &p1.pembilang, &p1.penyebut);
	printf("masukan nilai pembilang dan penyebut kedua:\n");
	scanf("%d %d", &p2.pembilang, &p2.penyebut);

	pembilang=p1.pembilang*p2.pembilang;
	penyebut=p1.penyebut*p2.penyebut;

	printf("hasilnya : %d / %d", pembilang, penyebut);
	return 0;


}