#include "stark.h"

void startkata(char pita[])
{
//START READING THE WORD
	indeks=0;			//Zero-ed
	panjangkata=0;		//Zero-ed
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

int kvacount(char inp[])
{
	//CountING the character that correspond to the condition
	int i;
	int countar=0;
	for (i = 0; i < strlen(inp); ++i)
	{
		if (inp[i]!='a' && inp[i]!='i' && inp[i]!='u' && inp[i]!='e' && inp[i]!='o')
		{
			if (inp[i+1]=='a' || inp[i+1]=='i' || inp[i+1]=='u' || inp[i+1]=='e' || inp[i+1]=='o')
			{
				if (inp[i+2]=='1' || inp[i+2]=='2' || inp[i+2]=='3' || inp[i+2]=='4' || inp[i+2]=='5' ||  
					inp[i+2]=='6' || inp[i+2]=='7' || inp[i+2]=='8' || inp[i+2]=='9' || inp[i+2]=='0')
				{
					countar++;
				}
			}
		}
	}

	return countar;		//Passing variabel ke main
}