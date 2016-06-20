#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int kode, pri, jml, tot, byr, kbl;
	char mad;

	do
	{
		printf("PONDOK HADRO SEJAHTERA\n");
		printf("RM. Pelipur Lapar\n");
		printf("oleh: Chef Siti Fauziach\n");
		printf("Jl. Kingsroad km. 666, Riverland 46464\n");
		printf("SEVEN KINGDOM\n");
		printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
		printf("\n");
	    printf("Menu Makanan              Harga\n");
        printf("1. AYAM GORENG            Rp. 10.000\n");
        printf("2. NASI GORENG            Rp.  8.000\n");
        printf("3. MIE PANGSIT            Rp. 10.000\n");
        printf("4. AYAM LALAPAN + NASI    Rp. 12.000\n");
        printf("5. NASI CAMPUR            Rp.  8.000\n");
        printf("6. JUS JERUK              Rp.  6.000\n");
        printf("7. AIR GELAS              Rp.    500\n");
        printf("\n");
        printf("MASUKKAN PILIHAN ANDA :\n");

        scanf("%d", &kode);

        switch(kode)
        {
        	case 1:
        	printf("\n");
        		printf("AYAM GORENG\n");
		        pri=10000;
		        printf("Masukkan Jumlah :\n");
		        scanf("%d",&jml);
		            tot=pri*jml;
		        printf("Total harganya yaitu : Rp. %d\n",tot );
		        printf("DIBAYAR : Rp. ");
		        scanf("%d",&byr);
		            kbl=byr-tot;
		        printf("KEMBALI : Rp. %d\n",kbl );
		        printf("Masih ada Y/T :");;
		        scanf(" %c", &mad);
		        if (mad=='Y')
		        {
		        	system("cls");
		        }
		        break;
		    case 2:
		    printf("\n");
		    	printf("NASI GORENG\n");
		        pri=8000;
		        printf("Masukkan Jumlah :\n");
		        scanf("%d",&jml);
		            tot=pri*jml;
		        printf("Total harganya yaitu : Rp. %d\n",tot );
		        printf("DIBAYAR : Rp. ");
		        scanf("%d",&byr);
		            kbl=byr-tot;
		        printf("KEMBALI : Rp. %d\n",kbl );
		        printf("Masih ada Y/T :");
		        scanf(" %c", &mad);
		        if (mad=='Y')
		        {
		        	system("cls");
		        }
		        break;
		    case 3:
		    printf("\n");
		    	printf("MIE PANGSIT\n");
		        pri=10000;
		        printf("Masukkan Jumlah :\n");
		        scanf("%d",&jml);
		            tot=pri*jml;
		        printf("Total harganya yaitu : Rp. %d\n",tot );
		        printf("DIBAYAR : Rp. ");
		        scanf("%d",&byr);
		            kbl=byr-tot;
		        printf("KEMBALI : Rp. %d\n",kbl );
		        printf("Masih ada Y/T :");
		        scanf(" %c", &mad);
		        if (mad=='Y')
		        {
		        	system("cls");
		        }
		        break;
		    case 4:
		    printf("\n");
		    	printf("AYAM LALAPAN + NASI\n");
		        pri=10000;
		        printf("Masukkan Jumlah :\n");
		        scanf("%d",&jml);
		            tot=pri*jml;
		        printf("Total harganya yaitu : Rp. %d\n",tot );
		        printf("DIBAYAR : Rp. ");
		        scanf("%d",&byr);
		            kbl=byr-tot;
		        printf("KEMBALI : Rp. %d\n",kbl );
		        printf("Masih ada Y/T :");
		        scanf(" %c", &mad);
		        if (mad=='Y')
		        {
		        	system("cls");
		        }
		        break;
		    case 5:
		    printf("\n");
		    	printf("NASI CAMPUR\n");
		        pri=8000;
		        printf("Masukkan Jumlah :\n");
		        scanf("%d",&jml);
		            tot=pri*jml;
		        printf("Total harganya yaitu : Rp. %d\n",tot );
		        printf("DIBAYAR : Rp. ");
		        scanf("%d",&byr);
		            kbl=byr-tot;
		        printf("KEMBALI : Rp. %d\n",kbl );
		        printf("Masih ada Y/T :");
		        scanf(" %c", &mad);
		        if (mad=='Y')
		        {
		        	system("cls");
		        }
		        break;
		    case 6:
		    printf("\n");
		    	printf("JUS JERUK\n");
		        pri=6000;
		        printf("Masukkan Jumlah :\n");
		        scanf("%d",&jml);
		            tot=pri*jml;
		        printf("Total harganya yaitu : Rp. %d\n",tot );
		        printf("DIBAYAR : Rp. ");
		        scanf("%d",&byr);
		            kbl=byr-tot;
		        printf("KEMBALI : Rp. %d\n",kbl );
		        printf("Masih ada Y/T :");
		        scanf(" %c", &mad);
		        if (mad=='Y')
		        {
		        	system("cls");
		        }
		        break;
		    case 7:
		    printf("\n");
		    	printf("AIR GELAS\n");
		        pri=500;
		        printf("Masukkan Jumlah :\n");
		        scanf("%d",&jml);
		            tot=pri*jml;
		        printf("Total harganya yaitu : Rp. %d\n",tot );
		        printf("DIBAYAR : Rp. ");
		        scanf("%d",&byr);
		            kbl=byr-tot;
		        printf("KEMBALI : Rp. %d\n",kbl );
		        printf("Masih ada Y/T :");
		        scanf(" %c", &mad);
		        if (mad=='Y')
		        {
		        	system("cls");
		        }
		        break;
		    default:
		    	printf("Kode yang anda masukkan tidak tersedia\n");
        }
	} while(mad =='Y');
	printf("\nTerimakasih atas kunjungan anda di siniiiiiii\n");

	return 0;
}