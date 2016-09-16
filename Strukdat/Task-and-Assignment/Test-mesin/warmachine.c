#include "headstark.h"

//Create List

void createlist(list *L)
{
	(*L).first=-1;
	int i;
	for (i = 0; i < 10; ++i)
	{
		/* Proses inisialisasi isi array */
		(*L).data[i].next=-2;
	}
}

//Count Elemen

int countelemen(list L)
{
	int hasil=0;
	if (L.first !=-1)
	{
		/*mencegah kekosongan elemen*/
		int elmt;

		elmt=L.first; //Inisialisasi

		while (elmt !=-1)
		{
			hasil++; //Proses perhitungan
			elmt=L.data[elmt].next;
		}
	}
	return hasil;
}

/*Empty Elemen*/

int emptyelemen(list L)
{
	int hasil = -1;

	if (countelemen(L) < 10)
	{
		int ketemu=0;
		int i=0;
		while (ketemu ==0 && i <10)
		{
			if (L.data[i].next == -2)
			{
				hasil =i;
				ketemu =1;
			}
			else
			{
				i++;
			}
		}
	}
	return hasil;
}

/*Add First*/ //Menambahkan element diwawal list

void addfirst (char name[], int age, char sex[], list *L)
{
	if (countelemen(*L) <10)
	{
		int baru=emptyelemen(*L);
		strcpy((*L).data[baru].elmt.name, name);
		(*L).data[baru].elmt.age=age;
		strcpy((*L).data[baru].elmt.sex, sex);

		if ((*L).first == -1) //Jika list-nya kosong
		{
			(*L).data[baru].next= -1;
		}
		else	//Jika list tak kosong
		{
			(*L).data[baru].next = (*L).first;
		}
		(*L).first= baru;
	}
	else //Jika Array penuh
	{
		printf("Penuh, Takbisa ditambaaaah\n");
	}
} 

/*Add After*/ //Penambahan data ditengah

void addafter(int prev, char name[], int age, char sex[], list *L)
{

	if (countelemen(*L) < 10)
	{
		int baru=emptyelemen(*L);

		strcpy((*L).data[baru].elmt.name, name );
		(*L).data[baru].elmt.age= age;
		strcpy((*L).data[baru].elmt.sex, sex );

		if ((*L).data[prev].next==-1)
		{
			(*L).data[baru].next=-1;
		}
		else
		{
			(*L).data[baru].next = (*L).data[prev].next;
		}
		(*L).data[prev].next= baru;
	}
	else
	{
		printf("Penuh, Takbisa ditambaaaah\n");
	}
}

/*Add Last*///Menambahkan data di akhir list

void addlast(char name[], int age, char sex[], list *L)
{
	if ((*L).first == -1)
	{
		addfirst(name, age, sex, L);		//JIka ist masih kosong
	}
	else
	{
		if (countelemen(*L) < 10)  //Jika array belum penuh
		{
			int prev= (*L).first;

			while((*L).data[prev].next != -1)
			{
				prev = (*L).data[prev].next;
			}

			addafter(prev, name, age, sex, L);
		}
		else
		{
			printf("Penuh, Takbisa ditambaaaah\n");
		}
	}
}

/*Delete First*///Menghapus Elemen pertama

void delfirst (list*L)
{
	if ((*L). first != 1)
	{
		int hapus = (*L).first;

		if (countelemen(*L)==1)
		{
			(*L).first=-1;
		}
		else
		{
			(*L).first=(*L).data[(*L).first].next;
		}		
		(*L).data[hapus].next=-2;	//Elemen awal sebelumnya dikosongkan
	}
	else
	{
		printf("List kosong\n");
	}
}

/*Delete After*///Menghapus elemen ditengah list

void delafter(int prev, list *L)
{
	int hapus = (*L).data[prev].next;

	if (hapus != -1)
	{
		if ((*L).data[hapus].next ==-1)
		{
			(*L).data[prev].next =-1;
		}
		else
		{
			(*L).data[prev].next = (*L).data[hapus].next;
		}
		//(*L).data[prev].next = (*L).data[hapus].next;
		(*L).data[hapus].next = -2;
	}
}

/*Delete Last*///Menghapus elemen terakhir di lissszzztt

void dellast(list *L)
{
	if ((*L).first != -1)
	{
		if (countelemen(*L) ==1)
		{
			delfirst(L);		//Jika elemen cuma satu
		}
		else
		{
			int hapus = (*L).first;
			int prev;
			while ((*L).data[hapus].next != -1)
				{
					prev=hapus;
					hapus = (*L).data[hapus].next;	
				}
			delafter(prev, L);
		}
	}
	else
	{
		printf("List Kosong!\n");
	}
}

void printelement(list L)
{
	if (L.first != -1)
	{
		int elmt = L.first;
		int i=1;
		while(elmt != -1)
		{
			printf("%s %d %s\n",L.data[elmt].elmt.name, L.data[elmt].elmt.age, L.data[elmt].elmt.sex  );

			elmt = L.data[elmt].next;
			i++;
		}
	}
	else
	{
		printf("List Kosong!\n");
	}
}

/*Delete All*/

void delall(list *L)
{
	int i;
	for (i = countelemen(*L); i >= 1; --i)
	{
		dellast(L);
	}
}