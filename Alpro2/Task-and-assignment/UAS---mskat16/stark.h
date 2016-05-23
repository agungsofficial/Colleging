/*Saya [Agung Sugiarto] dengan nim [1505352], bersumpah bahwa saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan dalam mengerjakan Tugas Praktikum 4 Algoritma & Pemrograman II.
Jika saya melakukan kecurangan maka Allah menjadi saksi saya, dan saya
siap menerima konsekuensinya*/

#include <stdio.h>
/*Saya [Agung Sugiarto] dengan nim [1505352], bersumpah bahwa saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan dalam mengerjakan UAS Algoritma & Pemrograman II.
Jika saya melakukan kecurangan maka Allah menjadi saksi saya, dan saya
siap menerima konsekuensinya*/

//INCLUDING THE HEADER
#include <string.h>
#include <stdlib.h>

//GLOBAL VARIABLE DECLARED
int indeks;		//Index is used to increment the ribbon
int panjangkata;		//Stores the length of the word
char ckata[50];		//What is the current word in process?

//Deklar prosedur
void startkata(char pita[]);	//Initiating the GLOBAL LOOP	
void resetkata();		//Resetting the progress in one word - Unused here
void inckata(char pita[]);		//Increment to next word
char* getckata();		//Taking the current word to main
int getpanjangkata();		//Takingthe length of the word - Unused here
int eopkata(char pita[]);		//Mark the end of sentence.
int kvacheck(char inp[]);		//Return 1 If The Condition is fullfilled




/*   ______     ___   ______   _____     _____  ___  ____   ________  _  _  _  _  
 .' ___  |  .'   `.|_   _ `.|_   _|   |_   _||_  ||_  _| |_   __  || || || || | 
/ .'   \_| /  .-.  \ | | `. \ | |       | |    | |_/ /     | |_ \_|| || || || | 
| |   ____ | |   | | | |  | | | |   _   | |    |  __'.     |  _| _ | || || || | 
\ `.___]  |\  `-'  /_| |_.' /_| |__/ | _| |_  _| |  \ \_  _| |__/ ||_||_||_||_| 
 `._____.'  `.___.'|______.'|________||_____||____||____||________|(_)(_)(_)(_) 
                                                                              */