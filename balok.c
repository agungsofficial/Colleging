#include <stdio.h>

typedef struct 
{
	int panjang, lebar, tinggi, LuasPermukaan, volume;
}balok;

int main()
{
	balok b;

	printf("masukan nilai panjang lebar dan tinggi:\n");
	scanf("%d %d %d", &b.panjang, &b.lebar, &b.tinggi);

	b.LuasPermukaan = 2 * ((b.panjang*b.lebar)*(b.lebar*b.tinggi)*(b.tinggi*b.panjang));
	b.volume = b.panjang * b.lebar *b.tinggi;
	printf("luas permukaan: %d\n", b.LuasPermukaan );
	printf("volume:%d\n", b.volume );

	return 0;
}