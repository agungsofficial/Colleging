This is Assignment number 6 of my Algoritma & Pemrograman II class:

(JADKOS15) Jadwal Kosong Bersama


Pembuat Soal: Asisten Pemrograman VI

Batas Waktu Eksekusi	5 Detik
Batas Memori	1 MB

Tobi, Moni dan Piyu berada di kelas yang berbeda. Mereka merupakan anggota dari salah satu Departemen BEM KEMAKOM. Saat ini mereka sedang menentukan waktu rapat rutin. Agar semua anggota dapat menghadiri rapat, yang dipilih adalah waktu dimana semua anggota tidak memiliki jadwal kuliah (irisan jadwal kosong). Buatlah program untuk mencari irisan jadwal kosong mereka, jika waktu beraktivitas ketiganya tidak kurang dari pukul 7 dan tidak lebih dari pukul 18. Gunakan algoritma searching sequential ataupun binary search untuk menyelesaikan permasalahan ini!

Format masukan (diulang sebanyak 3 kali, untuk Tobi, Moni, kemudian Piyu) :
n (jumlah daftar jam yang dipakai untuk kuliah, mulai hari Senin-Jumat)
daftar jadwal, terdiri dari : [nomor_hari] [jam_mulai] [jam_selesai]

Format keluaran :
[nama_hari] [batas_awal_jam_kosong - batas_akhir]
Contoh Masukan

5
1 7 18 (maksudnya hari Senin, mulai dari jam 7 hingga jam 18)
2 7 10 (hari Selasa mulai jam 7 hingga jam 10, kemudian...
2 16 18 ...dilanjutkan jam 16 hingga jam 18. Berarti di hari selasa, Tobi punya jadwal kosong dari pukul 10 s.d. pukul 16)
3 7 12  (dst.)
4 9 12

3
2 7 18
3 10 16
4 7 16

4
1 8 12
1 16 17
3 8 12
4 7 10

Contoh Keluaran

Rabu 16.00 - 18.00
Kamis 16.00 - 18.00
Jumat 7.00 - 18.00
Contoh Masukan 2

5
1 7 18
2 7 16
3 9 16
4 7 12
4 16 18

4
2 10 18
3 7 10
4 7 16
5 10 18

3
3 16 18
5 7 10
5 13 16

Contoh Keluaran 2

Tidak ada irisan jadwal.
       
       
       
       
       
       
       
  //Known bug(s):
    Cannot add two different schedule in the same day. Please enlight me if yu have enough knowledge :)
