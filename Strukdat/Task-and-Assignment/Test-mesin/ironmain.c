#include "headstark.h"

int main(int argc, char const *argv[])
{
//Variable Declarations
	list L;
	createlist(&L);
	database asdos[5];
	int i;

//Input Data
	for (i = 0; i < 5; ++i)
	{
		scanf("%s %d %s", &asdos[i].name, &asdos[i].age, &asdos[i].sex);
	}

//EXECUTION!!

	addfirst(asdos[0].name, asdos[0].age, asdos[0].sex, &L);
	addfirst(asdos[1].name, asdos[1].age, asdos[1].sex, &L);
	addlast(asdos[2].name, asdos[2].age, asdos[2].sex, &L);
	dellast(&L);
	printelement(L);
	printf("======\n");
	addafter(L.data[L.data[L.first].next].next, asdos[3].name, asdos[3].age, asdos[3].sex, &L);
	printelement(L);
	printf("======\n");
	addfirst(asdos[4].name, asdos[4].age, asdos[4].sex, &L);
	delafter(L.first, &L);
	dellast(&L);
	printelement(L);
	delall(&L);
	printf("======\n");
	printelement(L);
	printf("======\n");


	return 0;
}