#include "header.h"//The Header Included

//I SEARCHING THE NUMBER OF LONGEST STRING
	int longestnam()		
	{
		int i;
		int temp=strlen(data[0].nama);
		for (i = 0+1; i < n; ++i)
		{
			if (temp<strlen(data[i].nama))
			{
				temp=strlen(data[i].nama);
			}
		}
		return temp;
	}
	int longestnim()
	{
		int i;
		int temp=strlen(data[0].nim);
		for (i = 0+1; i < n; ++i)
		{
			if (temp<strlen(data[i].nim))
			{
				temp=strlen(data[i].nim);
			}
		}
		return temp;
	}
	int longestcla()
	{
		int i;
		int temp=strlen(data[0].nim);
		for (i = 0+1; i < n; ++i)
		{
			if (temp<strlen(data[i].kelas))
			{
				temp=strlen(data[i].kelas);
			}
		}
		return temp;
	}

//II OPENING AND SAVING THE DATA
	void readfile()
	{
		n=0;
		mahasiswa tmp;
		FILE *fdata;
		fdata= fopen("data/mahasiswa.dat", "r");

		do
		{
			fscanf(fdata, "%s %s %s", tmp.nim, tmp.nama, tmp.kelas );
			if ((strcmp(tmp.nim, "##")!=0) && (strcmp(tmp.nama, "##")!=0) &&  (strcmp(tmp.kelas, "##")!=0)  )
			{
				data[n]=tmp;
				n++;
			}
		} while ((strcmp(tmp.nim, "##")!=0) && (strcmp(tmp.nama, "##")!=0) && (strcmp(tmp.kelas, "##")!=0) );
		fclose(fdata);
	}

	void writefile()
	{
		int i;
		FILE *fdata;
		fdata= fopen("data/mahasiswa.dat", "w");
		for (i = 0; i < n; ++i)
		{
			fprintf(fdata, "%s %s %s\n", data[i].nim, data[i].nama, data[i].kelas );
		}
		fprintf(fdata, "## ## ##\n");
		fclose(fdata);
	}

//III IS THAT DATA EXIST?
int finddata(char nim[15])
{
	int status =0;
	int i=0;
	readfile();

	while (status==0 && i<n)
	{
		if (strcmp(data[i].nim, nim)==0)
		{
			status=1;
		}
		else 
		{
			i++;
		}

	}
	if (status==1)
	{
		printf("-------------------\n");
		printf("Nim %s, dimiliki %s dari kelas %s. \n",data[i].nim, data[i].nama, data[i].kelas );
		printf("-------------------\n");

	}
	return status;
}

//IV ADDING DATA
void insertdata(mahasiswa masukan)
{
	int status=finddata(masukan.nim);
	if (status==0)
	{
		data[n]=masukan;
		n++;
		writefile();
		printf("Data berhasil ditambah.\n");
	}
		else
		{
			printf("Nim telah terdaftar, gagal menambahkan data.\n");
		}
}

//V DELETING DATA
void deletedata(char nim[15])
{
	readfile();
	int i, j;
	int status=0;
	i=0;
	char hapus[10];

	while (i<n && status==0)
	{
		if (strcmp(data[i].nim, nim)==0)
		{
			status=1;
			printf("Data milik %s dari kelas %s.\n", data[i].nama, data[i].kelas );
			printf("Yakin menghapus data ini?\n ya/tidak? \n");
			scanf("%s", hapus );
			if (strcmp(hapus, "ya")==0)
			{
				for (j = i; j < n; ++j)
				{
					data[j]=data[j+1];
				} n--;
				writefile();
			}
		}
		else
		{
			i++;
		}
	}
	if (status==0)
	{
		printf("Data tidak ditemukan.\n");
	}

}
//VI CHANGE THE CLASS AND THE NAME
void updatedata(char nim[15])
{
	readfile();
	int i, j;
	int status=0;
	i=0;
	char nama[25]; char kelas[15];
	while (i<n && status==0)
	{
		if (strcmp(data[i].nim, nim)==0)
		{
			status=1;
			printf("Data ditemukan.\n");
			printf("-----Data Awal-----\n");
			printf("%s %s %s\n",data[i].nim, data[i].nama, data[i].kelas );
			printf("-------------------\n");
			printf("Masukan nama baru:\n");
			scanf("%s",nama);
			printf("Masukan kelas baru:\n");
			scanf("%s",kelas);
			strcpy(data[i].nama, nama);
			strcpy(data[i].kelas, kelas);
			writefile();
			printf("Data berhasil diganti.\n");
		}
		else
		{
			i++;
		}

	}
	if (status==0)
	{
		printf("Data Tidak ditemukan.\n");
	}


}
