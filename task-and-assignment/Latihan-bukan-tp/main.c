#include "header.h" //The Header Included

// ------MAIN FUNCTION----- //

int main(int argc, char const *argv[])
{

	//I SOME VARIABLE DECLARATION
	int i=0, j;
	int pilihan;
	char pilihan2[666];
	mahasiswa alpro;
	int brake=1;

	//II MAIN MENU LOOP
	do {
		//II,1 DRAWING THE TABLE
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
		//II,2 THE OPTIONS LIST
		printf("Masukan pilihan  anda:\n");
		printf("\n");
		printf("----------Pilihan---------\n");
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
		printf("--------------------------\n");
		printf("\n");

		//II,2 INPUT THE OPTION
		scanf("%d", &pilihan);
		if (pilihan==1)		//Option 1
		{
			printf("Masukan nim:\n");
			scanf("%s", alpro.nim);
			if (finddata(alpro.nim) == 1)
			{
				printf("Data ditemukan.\n");
			}
			else
			{
				printf("Data tidak Ditemukan\n");
			}
		}
		else if (pilihan==2)		//Option 2
		{
			printf("Masukan nim\n");
			scanf("%s", alpro.nim);
			printf("Masukan nama:\n");
			scanf("%s", alpro.nama);
			printf("Masukan kelas:\n");
			scanf("%s", alpro.kelas);
			insertdata(alpro);
		}
		else if (pilihan==3)		//Option 3
		{
			printf("Masukan nim:\n");
			scanf("%s", alpro.nim);
			updatedata(alpro.nim);
		}
		else if (pilihan==4)		//Option 4
		{
			printf("Masukan nim:\n");
			scanf("%s", alpro.nim);
			deletedata(alpro.nim);

		}
		if (pilihan==5)		//Option 5
		{
			brake=0;
		}
		else		//repeat the loop?
		{
			printf("Apakah ingin keluar?\n");
			printf("ya/tidak?\n");
			scanf("%s", pilihan2);
			
		}

		pilihan=0;


	} while (strcmp(pilihan2, "ya")!=0 && brake==1);

	system("cls");		//CLearing the system

	return 0;
}