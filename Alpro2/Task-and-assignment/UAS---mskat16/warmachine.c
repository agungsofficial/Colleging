#include "stark.h"

void startkata(char pita[])
{
//START READING THE WORD
	indeks=0;
	panjangkata=0;
	while (pita[indeks] == ' ')
	{
		indeks++;
	}
	while((pita[indeks] != ' ') && (pita[indeks]) != '.' )
	{
		ckata[panjangkata] = pita[indeks];
		indeks++;
		panjangkata++;
	}
	ckata[panjangkata] = '\0';	
}

void resetkata()
{
	//RESETTING THE PROGRESS UP TO NOW
	panjangkata=0;
	ckata[panjangkata]= '\0';
}

void inckata(char pita[])
{
	//INCREMENT TO THE NEXT WORD
	panjangkata=0;
	while (pita[indeks] == ' ')
	{
		indeks++;
	}
	while((pita[indeks] != ' ') && (pita[indeks]) != '.' )
	{
		ckata[panjangkata] = pita[indeks];
		indeks++;
		panjangkata++;
	}
	ckata[panjangkata] = '\0';	
}

char* getckata()
{
	//GETTING THE CURRENT WORD TO MAIN
	return ckata;
}

int getpanjangkata()
{
	//GETTING THE LENGTH OF THE WORD
	return panjangkata;
}

int eopkata(char pita[])
{
	//MARK THE END OF THE SENTENCE
	if (pita[indeks]== '.')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int kvacheck(char inp[])
{
	////Menghitung jumlah psangan huruf berurutan sesuai ketentuan
	int i;
	
	int a=0, b=0, c=0;		//Marker to consonan, vocal, and number
	for (i = 0; i < strlen(inp); ++i)
	{
		if (inp[i]!='a' && inp[i]!='i' && inp[i]!='u' && inp[i]!='e' && inp[i]!='o')
		{
			a=1;		//Berarti kata i punya konsonan
		}
		if (inp[i]=='a' || inp[i]=='i' || inp[i]=='u' || inp[i]=='e' || inp[i]=='o')
		{
			b=1;		//Berarti kata i punya vokal
		}
		if (inp[i]=='1' || inp[i]=='2' || inp[i]=='3' || inp[i]=='4' || inp[i]=='5' ||  
				 inp[i]=='6' || inp[i]=='7' || inp[i]=='8' || inp[i]=='9' || inp[i]=='0')
		{
			c=1;		//Berarti kata i punya angka
		}
	}

	if (a!=0 && b!=0 && c!=0)		//Jika kata memiliki konsonan vokal dan angka
	{
		return 1;		//Passing 1 ke main
	}
	else		//Jika tidak memenuhi syarat
	{
		return 0;		//Passing 0 ke main
	}
}