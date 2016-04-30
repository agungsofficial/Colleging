#include <stdio.h>
typedef struct 
{
	int harga;
	int banyak;
}makanan;
int main()
{
	makanan nasi_goreng, capcay;

	nasi_goreng.harga=10000;
	capcay.harga=4000;

	printf("masukan jumlah nasi goreng\n");
	scanf("%d", &nasi_goreng.banyak);
	printf("masukan jumlah capcay\n");
	scanf("%d", &capcay.banyak);

	printf("total harga nasi goreng : %d\n", nasi_goreng.harga*nasi_goreng.banyak );
	printf("total harga capcay: %d\n",capcay.harga*capcay.banyak);
	printf("total\n");
	return 0;
}