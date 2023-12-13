# Laporan-Praktikum-Algoritma-Pemrograman

<h1 align="margin"> Jobsheet 1 - Pengantar Algoritma dan Pemrograman</h1>
<h2 align="margin"> Algoritma</h2>
Algoritma didefinisikan sebagai rangkaian terurut langkah-langkah yang logis dan sistematis yang disusun untuk menyelesaikan suatu masalah. Algoritma dikatakan sebagai jantung ilmu komputer atau informatika dan sebenarnya pemakaian algoritma ini tidak hanya dalam ilmu komputer tetapi juga dalam bidang lain (kehidupan sehari-hari).

<h3 align="margin">Tujuan Algoritma</h3>

- Efisiensi: Untuk mengukur sebuah algoritma yang efisien harus
mempertimbangkan efisiensi waktu-CPU dan memori. Terkadang
programmer hanya berhenti kepada hasil tepat, akan tetapi tidak
mempertimbangkan waktu dan memori yang terkuras oleh algoritma yang
digunakan. Basis untuk membuat algoritma adalah efisiensi waktu,
memori dan keluaran yang tepat. Walaupun tidak bisa dielakkan bahwa
bahwa setiap orang akan memiliki cara berpikir/logika dalam
menyelesaikan masalah yang berbeda-beda walau menghasilkan solusi

- Abtraksi: Kelebihan dari pada algoritma adalah mampu memperlihatkan- sebuah permasalahan yang tingkat kerumitannya besar lalu kemudian dapat diurai menjadi kelihatan mudah dan sederhana, gambaran kerumitan terkikis dengan alur algoritma yang tersusun baik dan jelas.

- Reusability: Algoritma adalah metode bukan program, artinya bahwa algoritma harus mampu digunakan tanpa melihat bahasa pemrogramanyang digunakan, dapat digunakan kembali dan dan bahkan berkali-kali pada pada berbagai situasi untuk menerapkan dalam bahasa pemrograman apapun.


<h2 align="margin"> Pemrograman</h2>
Program secara umum didefinisikan sebagai kumpulan instruksi atau perintah yang disusun sedemikian rupa sehingga mempunyai urutan nalar yang logis untuk menyelesaikan suatu persoalan yang dimengerti oleh komputer.

<h3 align="margin">Tujuan Pemrograman</h3>

- Dapat membantu untuk berpikir dengan logis dan analitik, misalnya saja ketika Anda menyukai brainteaser maka dengan pengkodean inilah Anda bisa menemukan banyak hal terkait brainteaser.
- Mampu tingkatkan penalaran secara logis dan mudah memecahkan masalah
- Mampu kembangkan lobus frontal dari otak dimana bertanggung jawab untuk bisa menemukan sebuah solusi
- Dapat mengotomatisasi sebuah proses
- Dalam prakteknya bisa melakukan pengajaran agar komputer bisa melakukan suatu perintah.

<h2 align="margin"> IDE(Integrated Development Environment)</h2>
Pengertian Integrated Development Environment adalah rangkaian software yang menyatukan semua tool pengembangan menjadi satu GUI (Graphical User Interface). Dengannya, proses pengembangan bisa menjadi lebih efisien dan lebih cepat.

<h3 align="margin">Contoh IDE (Integrated Development Environment)</h3>

- Multilanguage mendukung banyak program bahasa yang bisa membantu pemula meningkatkan skill. Misalnya, Visual Studio adalah salah satu contoh Integrated Development Environment multilanguage terpopuler yang menawarkan fitur-fitur canggih serta setup ekstensi dan upgrade yang mudah.
- Mobile development secara khusus dibangun untuk mobile development, seperti AppCode dan Android Studio. Beberapa Integrated Development Environment, terutama IDE multilanguage, mendukung plugin mobile development seperti Real-Time Chat dan File Manager.
- Language-specific dirancang untuk developer software yang bekerja menggunakan satu bahasa. Contohnya, Jikes dan Jcreator dibuat untuk Java, dan Idle untuk Python.
- Cloud-based menyediakan fitur built-in untuk pair programming real-time dengan feedback langsung yang memungkinkan developer membuat software hanya menggunakan browser sehingga mereka bisa mengakses kode secara remote (jarak jauh).
- HTML digunakan untuk mengembangkan aplikasi HTML seperti Notepad++, Atom, dan Adobe DreamWeaver CC. Tool ini mengotomatiskan banyak tugas dalam web development


<h1 align="margin"> Jobsheet 2 - Pemrograman Dasar C</h1> 

<h2 align="margin"> Struktur program C</h2>
 
Program C terdiri dari satu atau lebih file sumber yang memiliki ekstensi .c. Setiap file sumber terdiri dari satu atau lebih fungsi yang memiliki format:
```
return_type function_name(parameter_list)
{
    // statements
}
```

Fungsi utama yang pertama kali dieksekusi oleh program adalah fungsi main(), yang memiliki format:
```
int main(void)
{
    // statements
    return 0;
}
```

Setiap pernyataan dalam program C harus diakhiri dengan tanda titik koma (;). Komentar dalam program C dapat ditulis dengan dua cara: menggunakan tanda /* ... */ untuk komentar multi-baris, atau menggunakan tanda // untuk komentar satu baris.

<h2 align="margin"> Sintaks dan aturan penulisan program C:</h2>
 
Program C bersifat case-sensitive, artinya huruf besar dan kecil berbeda makna. Program C juga mengikuti aturan penulisan yang ketat, seperti:
-	Setiap variabel dan fungsi harus dideklarasikan sebelum digunakan, dengan menyebutkan tipe data dan nama variabel atau fungsi.
- Setiap variabel dan fungsi harus memiliki nama yang unik dan tidak boleh menggunakan kata kunci yang telah ditentukan oleh bahasa C, seperti int, if, for, dan lain-lain.
-	Setiap variabel dan fungsi harus mengikuti aturan penamaan yang berlaku, yaitu hanya boleh menggunakan huruf, angka, dan underscore (_), dan tidak boleh diawali dengan angka.
-	Setiap ekspresi dan pernyataan harus mengikuti aturan sintaks yang berlaku, seperti menggunakan tanda kurung yang sesuai, operator yang valid, dan operand yang sesuai dengan tipe data.


<h1 align="margin"> Jobsheet 3 - Variabel, Konstanta dan Tipe Data </h1>
<h2 align="margin"> Variabel:</h2>

Dalam bahasa C, variabel adalah sebuah nama yang digunakan untuk merujuk ke lokasi memori yang menyimpan nilai. Nilai yang disimpan dalam variabel dapat berupa angka, huruf, teks, atau jenis data lainnya.
Untuk mendeklarasikan variabel dalam bahasa C, kita menggunakan kata kunci int, float, char, atau tipe data lainnya. Berikut adalah beberapa contoh deklarasi variabel:
```
int umur;
float tinggi
char nama[100];
```
- Deklarasi umur mendeklarasikan variabel umur bertipe int. Variabel umur dapat menyimpan nilai angka, seperti 18, 25, atau 35.

- Deklarasi tinggi mendeklarasikan variabel tinggi bertipe float. Variabel tinggi dapat menyimpan nilai angka pecahan, seperti 1.70, 1.80, atau 1.90.

- Deklarasi nama mendeklarasikan variabel nama bertipe char. Variabel nama dapat menyimpan nilai teks, seperti "John Doe", "Jane Doe", atau "John Smith".

<h2 align="margin"> Konstanta:</h2>
Konstanta adalah variabel yang nilainya tidak dapat diubah. Konstanta digunakan untuk menyimpan nilai yang bersifat tetap, seperti konstanta pi (π), konstanta gravitasi (g), atau konstanta kecepatan cahaya (c).

Untuk mendeklarasikan konstanta dalam bahasa C, kita menggunakan kata kunci const. Berikut adalah beberapa contoh deklarasi konstanta:
```
const double PI = 3.141592653589793;
const float GRAVITASI = 9.8;
const int KECEPATAN_CAHAYA = 299792458;
```
- Deklarasi PI mendeklarasikan konstanta PI bertipe double dengan nilai 3.141592653589793.

- Deklarasi GRAVITASI mendeklarasikan konstanta GRAVITASI bertipe float dengan nilai 9.8.

- Deklarasi KECEPATAN_CAHAYA mendeklarasikan konstanta KECEPATAN_CAHAYA bertipe int dengan nilai 299792458.


<h2 align="margin"> Tipe Data:</h2>

Tipe data adalah jenis data yang dapat disimpan dalam variabel. Setiap tipe data memiliki karakteristiknya masing-masing, seperti ukuran, rentang nilai, dan operasi yang dapat dilakukan.

Berikut adalah beberapa tipe data dasar dalam bahasa C:

- int: tipe data bilangan bulat
- float: tipe data bilangan pecahan
- char: tipe data karakter
- double: tipe data bilangan pecahan presisi ganda
- long: tipe data bilangan bulat panjang
- short: tipe data bilangan bulat pendek
- unsigned: tipe data bilangan bulat tanpa tanda
- signed: tipe data bilangan bulat dengan tanda


<h1 align="margin"> Jobsheet 4 - Operator</h1>
Operator adalah simbol yang digunakan untuk melakukan operasi pada data. Operator dapat digunakan untuk melakukan operasi aritmatika, penugasan, perbandingan, logika, bitwise, dan incriment\decrement

<h2 align="margin"> Operator Aritmatika </h2>

Operator aritmatika digunakan untuk melakukan operasi matematika pada data numerik. Operator aritmatika yang tersedia dalam bahasa C adalah:

- +: penjumlahan
- -: pengurangan
- *: perkalian
- /: pembagian
- %: modulus

<h2 align="margin"> Operator Penugasan </h2>

Operator penugasan digunakan untuk memasukkan nilai ke dalam variabel. Operator penugasan yang tersedia dalam bahasa C adalah:

- =: penugasan sederhana
- +=: penugasan penjumlahan
- -=: penugasan pengurangan
- *=: penugasan perkalian
- /=: penugasan pembagian
- %=: penugasan modulus

<h2 align="margin"> Operator Perbandingan </h2>

Operator perbandingan digunakan untuk membandingkan dua nilai. Operator perbandingan yang tersedia dalam bahasa C adalah:

- ==: sama dengan
- !=: tidak sama dengan
- >: lebih besar dari
- <: lebih kecil dari
- >=: lebih besar dari atau sama dengan
- <=: lebih kecil dari atau sama dengan

<h2 align="margin"> Operator Logika</h2>

Operator logika digunakan untuk menggabungkan dua atau lebih pernyataan logika. Operator logika yang tersedia dalam bahasa C adalah:

- &&: dan
- ||: atau
- !: tidak

<h2 align="margin"> Operator Bitwise</h2>

Operator bitwise digunakan untuk melakukan operasi pada bit data. Operator bitwise yang tersedia dalam bahasa C adalah:

- &: AND
- |: OR
- ^: XOR
- ~: NOT
- <<: shift kiri
- >>: shift kanan

<h2 align="margin"> Operator Increment dan Decrement </h2>

Operator increment dan decrement digunakan untuk menambah atau mengurangi nilai variabel dengan 1. Operator increment dan decrement tersedia dalam dua bentuk, yaitu pre-increment dan post-increment, serta pre-decrement dan post-decrement.

- Pre-increment

++a: menambah nilai variabel a dengan 1 sebelum nilai variabel tersebut digunakan.
++b: menambah nilai variabel b dengan 1 sebelum nilai variabel tersebut digunakan.

- Post-increment

a++: menambah nilai variabel a dengan 1 setelah nilai variabel tersebut digunakan.
b++: menambah nilai variabel b dengan 1 setelah nilai variabel tersebut digunakan.

- Pre-decrement

--a: mengurangi nilai variabel a dengan 1 sebelum nilai variabel tersebut digunakan.
--b: mengurangi nilai variabel b dengan 1 sebelum nilai variabel tersebut digunakan.

- Post-decrement

a--: mengurangi nilai variabel a dengan 1 setelah nilai variabel tersebut digunakan.
b--: mengurangi nilai variabel b dengan 1 setelah nilai variabel tersebut digunakan.
