NAMA : Muhammad Aziz Ihza Fahriza Salam
NIM : H1H024050
Mata Kuliah : Sistem Mikrokontroler

LAPORAN MINI PROJECT : PENERAPAN KENDALI GPIO PADA TRAFFIC LIGHT 4 ARAH DENGAN ARDUINO UNO
1.	Tujuan dan Cara kerja
Percobaan ini bertujuan untuk merancang dan mensimulasikan sistem traffic light empat arah, yaitu Utara, Timur, Selatan, dan Barat, menggunakan mikrokontroler Arduino Uno melalui platform Tinkercad. Sistem ini diprogram untuk bekerja secara otomatis dan terus menerus. Pengaturan nyala lampu dibuat bergantian searah jarum jam, dimulai dari Utara, kemudian Timur, Selatan, dan Barat. Hal ini memastikan bahwa tidak ada lebih dari satu sisi simpang yang menyala hijau pada waktu yang sama, sehingga mencegah konflik lalu lintas. Pemrograman juga harus menggunakan fungsi untuk modularisasi
Komponen Yang digunakan :
a)	1 buah Arduino Uno
b)	4 buah Breadboard
c)	12 buah LED (4 Merah, 4 Kuning, 4 Hijau)
d)	12 buah Resistor (220 Ohm)
e)	Kabel Jumper

2.	Konfigurasi pin
Simpang Utara
a)	 Merah dihubungkan ke Pin 13
b)	 Kuning dihubungkan ke Pin 12
c)	 Hijau dihubungkan ke Pin 11
Simpang Timur
a)	 Merah dihubungkan ke Pin 10
b)	 Kuning dihubungkan ke Pin 9
c)	 Hijau dihubungkan ke Pin 8
Simpang Selatan
a)	 Merah dihubungkan ke Pin 7
b)	 Kuning dihubungkan ke Pin 6
c)	 Hijau dihubungkan ke Pin 5
Simpang Barat
a)	 Merah dihubungkan ke Pin 4
b)	 Kuning dihubungkan ke Pin 3
c)	 Hijau dihubungkan ke Pin 2

3.	Aturan Sistem
a)	Tidak boleh ada lebih dari satu sisi hijau secara bersamaan.
b)	Sistem harus berjalan terus menerus (loop).
c)	Gunakan fungsi untuk modularisasi (misalnya: aktifkanSimpang()).

4.	Cara Sistem Berjalan (Spesifikasi Tugas)
a)	Sistem harus bekerja secara otomatis dan berulang (looping).
b)	Kondisi default: Semua lampu dalam kondisi MERAH sebelum satu sisi aktif.
c)	Lampu hijau menyala bergiliran searah jarum jam dengan urutan: Utara > Timur > Selatan > Barat > ulangi.
d)	Ketentuan waktu nyala lampu:
•	Lampu Hijau: Menyala selama 5 detik.
•	Lampu Kuning: Diberikan efek kedip 3 kali dan menyala selama 2 detik.
•	Lampu Merah: Menyala kembali setelah hijau selesai.

6.	Link Simulasi Tinkercad : https://www.tinkercad.com/things/0zeyPHZUMmZ-tugas4sistem-mikrokontroler

