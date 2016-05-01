This is my Assignment number 5 from my Algoritma & Pemrograman II Class:
(TMPBD16) Tobi Moni Piyu Big Data


Pembuat Soal: Tim Asisten Pemrograman

Batas Waktu Eksekusi	5 Detik
Batas Memori	1 MB

Pada suatu hari tobi,moni dan piyu memiliki tugas mata-mata yang sangat berat. Mereka diminta untuk mengambil data penting di server database musuh yang terdapat di korea selatan,rusia dan AS. 
Data yang harus diambil merupakan sebuah big data yang terdiri dari biner-biner 10 bit. 
Data tersebut harus di gabungkan dan urutkan menjadi satu kemudian carilah data data yang mempunyai nilai yang sama tetapi harus dari ketiga negara yang berbeda (SUSPICIOUS DATA).
Tampilkan dalam sebuah file report yang akan di laporkan ke bos mereka.

Laporan ditulis dengan format : 

Laporan Data Biner 
==================== 
[BIG DATA RESULT] 
[SUSPICIOUS DATA] 

Format Masukan :
n, 0 < n < 50
Big data biner tobi sebanyak n
m, 0 < m < 50 
Big data biner moni sebanyak m 
o, 0 < o < 50 
Big data biner piyu sebanyak o 
Format Keluaran :
Laporan Data Biner 
==================== 
[BIG DATA RESULT] 
[SUSPICIOUS DATA on decimal] 

Contoh Masukan

6
1111111100
0001111011
1111100000
0111111011
0110000000
0000001100
6
0000001100
0110001100
0110010011
0111100011
1111100011
1111111111
5
0000001100
0101100011
1101111011
0000000111
1011111111


Contoh Keluaran

Laporan Data Biner
====================
0000000111
0000001100
0000001100
0000001100
0001111011
0101100011
0110000000
0110001100
0110010011
0111100011
0111111011
1011111111
1101111011
1111100000
1111100011
1111111100
1111111111
12

Contoh Masukan 2

3
0001111011
1111100000
0111111011
5
0001111011
1111100000
0111111011
0111111011
1111100011
2
0001111011
1111100000


Contoh Keluaran 2

Laporan Data Biner
====================
0001111011
0001111011
0001111011
0111111011
0111111011
0111111011
1111100000
1111100000
1111100000
1111100011
123
992

       

//Known bug(s):
  So far nothing, please inform me if you find some :)
