#include <stdio.h>
typedef struct 
{
	int NIM, umur;
	char PL;
}orang;
typedef struct 
{
	int urut;
	char paket;
}menu;
int main()
{
	orang first;
	orang second;
	menu kesatu;
	menu kedua;
	scanf("%d %d %c\n", &first.NIM, &first.umur, &first.PL);
	scanf("%c %d\n", &kesatu.NIM, &kesatu.umur, &kesatu.PL);
	scanf("%d %d %c\n", &second.NIM, &second.umur, &second.PL);
	scanf("%c %d", &kedua.NIM, &kedua.umur, &kedua.PL);
	switch(makanan)
		case a :
		{
				switch(berat)
				{
					case 1: 
					{
						break:
					}
					case 2:
					{
						break;
					}
					default:

				};break;
		}
		case b:
		{
			switch(berat)
				{
					case 1: 
					{
						break:
					}
					case 2:
					{
						break;
					}
					case 3:
					{
						break;
					}
					case 4:
					{
						break;
					}
					default:
					{
						break;
					}
				};break;
		}
		default:
		{
			break;
		}
}