#include "header.h"

int main(int argc, char const *argv[])
{
	int i=0, j;
	int pilihan;
	char pilihan2[666];
	mahasiswa alpro;
	int stop=1;


	do {
		system("cls");
		readfile();
		int length= longestnam();
		for (j = 0; j < (length + longestnim() + longestcla())+8; ++j)
		{
			printf("-");
		}
		printf("\n");
		printf("|NIM");
		for (i = 0; i < longestnim()-1; ++i)
		{
			printf(" ");
		}
		printf("|Nama");
		for (i = 0; i < length-3; ++i)
		{
			printf(" ");
		}
		printf(" |Kelas");
		for (i = 0; i < longestcla()-5; ++i)
		{
			printf(" ");
		}
		printf("|\n");
		for (j = 0; j < (length + longestnim() + longestcla())+8; ++j)
		{
			printf("-");
		}
		printf("\n");		
	for (i = 0; i < n; ++i)
	{
		printf("|%s", data[i].nim);
		for (j = 0; j < longestnim()- strlen(data[i].nim)+2; ++j)
		{
			printf(" ");
		}
		printf("|%s", data[i].nama);
	
		for (j = 0; j < length- strlen(data[i].nama)+2; ++j)
		{
			printf(" ");
		}
		printf("|%s", data[i].kelas );
		for (j = 0; j < longestcla() - strlen(data[i].kelas) ; ++j)
		{
			printf(" ");

		}
		printf("|\n");
	}
		for (j = 0; j < (length + longestnim() + longestcla())+8; ++j)
		{
			printf("-");
		}
		printf("\n");

		printf("Masukan pilihan  anda:\n");
		printf("\n");
		printf("---------Pilihan--------\n");
		printf("|");
		for (i = 0; i < strlen(data[i].nama)-3; ++i)
		{
			printf(" ");
		}
		printf("1. Cari data         |\n");
		printf("|");
		for (i = 0; i < strlen(data[i].nama)-3; ++i)
		{
			printf(" ");
		}
		printf("2. Tambah data       |\n");
		printf("|");
		for (i = 0; i < strlen(data[i].nama)-3; ++i)
		{
			printf(" ");
		}
		printf("3. Update data       |\n");
		printf("|");
		for (i = 0; i < strlen(data[i].nama)-3; ++i)
		{
			printf(" ");
		}
		printf("4. Delete data       |\n");
		printf("|");
		for (i = 0; i < strlen(data[i].nama)-3; ++i)
		{
			printf(" ");
		}
		printf("5. Keluar program    |\n");
		printf("------------------------\n");
		printf("\n");

		scanf("%d", &pilihan);
		if (pilihan==1)
		{
			printf("Masukan nim:\n");
			scanf("%s", alpro.nim);
			if (finddata(alpro.nim) == 1)
			{
				printf("Data Ditemukan\n");
			}
			else
			{
				printf("Data tidak Ditemukan\n");
			}
		}
		else if (pilihan==2)
		{
			printf("Masukan nim\n");
			scanf("%s", alpro.nim);
			printf("Masukan nama\n");
			scanf("%s", alpro.nama);
			printf("Masukan kelas\n");
			scanf("%s", alpro.kelas);
			insertdata(alpro);
		}
		else if (pilihan==3)
		{
			printf("Masukan nim\n");
			scanf("%s", alpro.nim);
			updatedata(alpro.nim);
		}
		else if (pilihan==4)
		{
			printf("Masukan nim\n");
			scanf("%s", alpro.nim);
			deletedata(alpro.nim);

		}
		else if (pilihan==5)
		{
			stop=0;
		}

		printf("Apakah ingin keluar?\n");
		printf("ya/tidak?\n");
		scanf("%s", pilihan2);
		pilihan=0;


	} while (strcmp(pilihan2, "ya")!=0 && stop!=0);

	system("cls");

	return 0;
}