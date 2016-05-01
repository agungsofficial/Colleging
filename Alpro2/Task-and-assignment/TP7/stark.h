/*Saya [Agung Sugiarto] dengan nim [1505352], bersumpah bahwa saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan dalam mengerjakan Tugas Praktikum 4 Algoritma & Pemrograman II.
Jika saya melakukan kecurangan maka Allah menjadi saksi saya, dan saya
siap menerima konsekuensinya*/


//I INCLUDING THE LIB
	#include <stdio.h>		//Standard Input & output header
	#include <string.h>		//String manipulation header
	#include <stdlib.h>		//Standard Library of General Purpose Function

//II DECLARING STRUCTURED TYPE
typedef struct
{
	char nim[15];		//The nim of the students stored here
	char nama[50];		//The name of the students stored here
	float mutu;		//The grade of the students stored here
	int sks;		//The study credit of the students stored here
	float ipk;		//The prestation index of the students stored here
} mahasiswa;		//Mahasiswa  =  Great student

//III DECLARING GLOBAL VARIABLE 	--Global means it can be used on all files in this assignment
mahasiswa data[666];		//The data that we used to store the data
int n;		//number of data

//II THE PROCEDURES AND FUNCTIONS
float indexer(int);		//Generating the prestation index of one's student out of study credit and grading
void insort();		//Sorting the nim and prestation index using insertion sort -- my favorite
void loadfile();		//Loading data from the list in the directory
void savefile();		//Saving data into result.txt



/*

                                        .-'''-.                                                                 
                                       '   _    \                                                               
                                     /   /` '.   \                    /|                     _..._              
       /|  /|        .-.          .-.   |     \  '  .--./)            ||                   .'     '.   .--./)   
   ___//__//__        \ \        / /|   '      |  '/.''\\             ||                  .   .-.   . /.''\\    
  '--//--//---'  __    \ \      / / \    \     / /| |  | |      __    ||  __              |  '   '  || |  | |   
 ___//__//__  .:--.'.   \ \    / /   `.   ` ..' /  \`-' /    .:--.'.  ||/'__ '.   _    _  |  |   |  | \`-' /    
'--//--//---'/ |   \ |   \ \  / /       '-...-'`   /("'`    / |   \ | |:/`  '. ' | '  / | |  |   |  | /("'`     
  |/  |/     `" __ | |    \ `  /                   \ '---.  `" __ | | ||     | |.' | .' | |  |   |  | \ '---.   
              .'.''| |     \  /                     /'""'.\  .'.''| | ||\    / '/  | /  | |  |   |  |  /'""'.\  
             / /   | |_    / /                     ||     ||/ /   | |_|/\'..' /|   `'.  | |  |   |  | ||     || 
             \ \._,\ '/|`-' /                      \'. __// \ \._,\ '/'  `'-'` '   .'|  '/|  |   |  | \'. __//  
              `--'  `"  '..'                        `'---'   `--'  `"           `-'  `--' '--'   '--'  `'---' 

*/