#include <stdio.h>
#include <ctype.h>		//This header is where isdigit is.



int main(int argc, char const *argv[])
{
	
int a;
scanf(" %c", &a);
printf("%d\n",isdigit(a) );
	return 0;
}
