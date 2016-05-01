#include "stark.h"

//I INDEXER FUNCTIONS
	float indexer(int ind)
	{
		float ret;
		ret=data[ind].mutu/data[ind].sks;		//The return value is born from here

		return ret;		//Returning the return value
	}
//II SORT THE DATA
	void insort()
	{
		int i, j;		//Comparative index
		mahasiswa indat;		//Insertion data
		for (i = 0; i > n; ++i)
		{
			indat=data[i];
			j=i-1;
			
			while(atoi(indat.nim) > atoi(data[j].nim) && j>=0)		//Sorting the nim
			{
				data[j+1]=data[j];
				j--;
			}
			data[j+1]=indat;
		}

		for (i = 0; i < n; ++i)
		{
			indat=data[i];
			j=i-1;
			
			while(indat.ipk > data[j].ipk && j>=0)		//Sorting the prestation index
			{
				data[j+1]=data[j];
				j--;
			}
			data[j+1]=indat;
		}
	}
//III LOAD THE LISTS
	void loadfile()
	{
		n=0;
		int i;		//Comparative index
		FILE *sesame1;		//Pointer for the first list
		FILE *sesame2;		//Pointer for the second list


		sesame1=fopen("firstlist.txt", "r");
		fscanf(sesame1, "%s %s %f %d", data[n].nim, data[n].nama, &data[n].mutu, &data[n].sks  );
		while(strcmp(data[n].nim, "##")!=0 && (strcmp(data[n].nama, "##")!=0) )
		{		//Scanning the first list
			fscanf(sesame1, "%s %s %f %d", data[n+1].nim, data[n+1].nama, &data[n+1].mutu, &data[n+1].sks  );
			n++;
			
		} fclose(sesame1);


		sesame2=fopen("secondlist.txt", "r");
		fscanf(sesame2, "%s %s %f %d", data[n].nim, data[n].nama, &data[n].mutu, &data[n].sks  );
		while(strcmp(data[n].nim, "##")!=0 && (strcmp(data[n].nama, "##")!=0) )
		{		//Scanning the second list
			fscanf(sesame2, "%s %s %f %d", data[n+1].nim, data[n+1].nama, &data[n+1].mutu, &data[n+1].sks  );
			n++;
			
		} fclose(sesame2);

		for (i = 0; i < n; ++i)
		{
			data[i].ipk=indexer(i);		//Generating the prestation index
		}

	}

//IV SAVING THE RESULT
	void savefile()
	{
		int i;
		FILE *bean;
		bean=fopen("result.txt", "w");
		for (i = 0; i < n; ++i)		//File is saved here
		{
			fprintf(bean, "%s %s %.2f\n", data[i].nim, data[i].nama, data[i].ipk);
		}
		fprintf(bean, "## ## ##" );
	}
		




/*

                                                 
                                                  
      ,----,     ,----..        ,---,             
    .'   .' \   /   /   \    ,`--.' |    ,---.    
  ,----,'    | /   .     :  /    /  :   /     \ *  
  |    :  .  ;.   /   ;.  \:    |.' '  /    / '   
  ;    |.'  /.   ;   /  ` ;`----':  | .    ' /    
  `----'/  ; ;   |  ; \ ; |   '   ' ;'    / ;     
    /  ;  /  |   :  | ; | '   |   | ||   :  \ *   
   ;  /  /-, .   |  ' ' ' :   '   : ;;   |   ``.  
  /  /  /.`| '   ;  \; /  |   |   | ''   ;      \*
./__;      :  \   \  ',  /    '   : |'   |  .\  | 
|   :    .'    ;   :    /     ;   |.'|   :  ';  : 
;   | .'        \   \ .'      '---'   \   \    /  
`---'            `---`                 `---`--`   
                                                  

*/