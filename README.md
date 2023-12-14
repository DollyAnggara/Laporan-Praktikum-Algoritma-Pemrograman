# Laporan-Praktikum-Algoritma-Pemrograman

<h4 align="margin"> Nama : Dolly Anggara </h4>
<h4 align="margin"> NIM : 23343034 </h4>
<h4 align="margin"> Kelas : INF1.62.1008 </h4>
<h4 align="margin"> Prodi : Informatika </h4>
<h4 align="margin"> Dosen pembimbing : Randi Proska Sandra, S.Pd., M.Sc.</h4>

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

- `+` : penjumlahan
- `-` : pengurangan
- `*` : perkalian
- `/` : pembagian
-`%` : modulus

<h2 align="margin"> Operator Penugasan </h2>

Operator penugasan digunakan untuk memasukkan nilai ke dalam variabel. Operator penugasan yang tersedia dalam bahasa C adalah:

- `=` : penugasan sederhana
- `+=` : penugasan penjumlahan
- `-=` : penugasan pengurangan
- `*=` : penugasan perkalian
-`/=` : penugasan pembagian
- `%=` : penugasan modulus

<h2 align="margin"> Operator Perbandingan </h2>

Operator perbandingan digunakan untuk membandingkan dua nilai. Operator perbandingan yang tersedia dalam bahasa C adalah:

- `==`: sama dengan
- `!=` : tidak sama dengan
- `>` : lebih kecil dari
- `<` : lebih kecil dari
- `>=` : lebih besar dari atau sama dengan
- `<=` : lebih kecil dari atau sama dengan

<h2 align="margin"> Operator Logika</h2>

Operator logika digunakan untuk menggabungkan dua atau lebih pernyataan logika. Operator logika yang tersedia dalam bahasa C adalah:

- `&&` : dan
- `||` : atau
- `!` : tidak

<h2 align="margin"> Operator Bitwise</h2>

Operator bitwise digunakan untuk melakukan operasi pada bit data. Operator bitwise yang tersedia dalam bahasa C adalah:

- `&` : AND
- `|` : OR
- `^` : XOR
- `~` : NOT
- `<<` : shift kiri
- `>>` : shift kanan

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


<h1 align="margin"> Jobsheet 5 - Flow Control (Decision Making)</h1>

Flow control adalah salah satu bagian penting dalam pemrograman. Flow control memungkinkan pemrogram untuk mengontrol aliran eksekusi program. Flow control dapat digunakan untuk membuat keputusan, mengulangi blok kode, atau melakukan lompatan ke bagian lain dari program.

<h2 align="margin"> Pernyataan if </h2>

Pernyataan if adalah pernyataan flow control yang paling dasar. Pernyataan if digunakan untuk memeriksa kondisi dan mengeksekusi blok kode jika kondisi tersebut bernilai benar.

Bentuk umum pernyataan if adalah sebagai berikut:
```
C
if (kondisi) {
  // blok kode yang akan dieksekusi jika kondisi bernilai benar
}
```
<h2 align="margin"> Pernyataan if-else </h2>

Pernyataan if-else adalah pernyataan flow control yang memungkinkan pemrogram untuk mengeksekusi blok kode yang berbeda berdasarkan nilai kondisi.

Bentuk umum pernyataan if-else adalah sebagai berikut:

```
if (kondisi) {
  // blok kode yang akan dieksekusi jika kondisi bernilai benar
} else {
  // blok kode yang akan dieksekusi jika kondisi bernilai salah
}
```
<h2 align="margin"> Pernyataan switch-case </h2>

Pernyataan switch-case adalah pernyataan flow control yang memungkinkan pemrogram untuk mengeksekusi blok kode yang berbeda berdasarkan nilai variabel.

Bentuk umum pernyataan switch-case adalah sebagai berikut:
```
switch (variabel) {
  case nilai_1:
    // blok kode yang akan dieksekusi jika variabel = nilai_1
    break;
  case nilai_2:
    // blok kode yang akan dieksekusi jika variabel = nilai_2
    break;
  ...
  default:
    // blok kode yang akan dieksekusi jika variabel tidak sama dengan nilai_1, nilai_2, ...
    break;
```
<h2 align="margin"> Operator ternary </h2>

Operator ternary adalah operator yang dapat digunakan untuk membuat keputusan dalam satu baris kode. Operator ternary memiliki bentuk umum sebagai berikut:
```
ekspresi ? ekspresi_jika_benar : ekspresi_jika_salah;
```
Ekspresi pertama akan dievaluasi terlebih dahulu. Jika nilai ekspresi pertama adalah benar, maka ekspresi kedua akan dievaluasi dan hasilnya akan dikembalikan. Jika nilai ekspresi pertama adalah salah, maka ekspresi ketiga akan dievaluasi dan hasilnya akan dikembalikan.

<h1 align="margin"> Jobsheet 6 - Flow Control (Perulangan)</h1>

Perulangan adalah salah satu bagian penting dalam pemrograman. Perulangan memungkinkan pemrogram untuk mengeksekusi blok kode berulang kali. Perulangan dapat digunakan untuk melakukan tugas-tugas yang berulang, seperti mencetak angka dari 1 hingga 10, atau menambahkan semua bilangan dari 1 hingga 100.

<h2 align="margin"> Pernyataan for</h2>

Pernyataan for adalah pernyataan perulangan yang paling dasar. Pernyataan for digunakan untuk mengeksekusi blok kode berulang kali hingga kondisi tertentu terpenuhi.

Bentuk umum pernyataan for adalah sebagai berikut:
```
for (inisialisasi; kondisi; iterasi) {
  // blok kode yang akan dieksekusi berulang kali
}
```
<h2 align="margin"> Pernyataan while</h2>

Pernyataan while adalah pernyataan perulangan yang digunakan untuk mengeksekusi blok kode berulang kali selama kondisi tertentu terpenuhi.

Bentuk umum pernyataan while adalah sebagai berikut:

C
while (kondisi) {
  // blok kode yang akan dieksekusi berulang kali
}

<h2 align="margin"> Pernyataan do-while</h2>

Pernyataan do-while adalah pernyataan perulangan yang digunakan untuk mengeksekusi blok kode berulang kali setidaknya satu kali, bahkan jika kondisi tidak terpenuhi.

Bentuk umum pernyataan do-while adalah sebagai berikut:
```
do {
  // blok kode yang akan dieksekusi berulang kali
} while (kondisi);
```

<h2 align="margin"> Perulangan Bersarang (Nested)</h2>
Perulangan Bersarang (Nested)

Perulangan bersarang adalah perulangan yang di dalamnya terdapat perulangan lain. Perulangan bersarang dapat digunakan untuk melakukan tugas-tugas yang lebih kompleks, seperti mencetak matriks atau menghitung faktorial bilangan.

Misalnya, pernyataan berikut akan mencetak matriks 3x3:

```
for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++) {
    printf("%d\n", i * 3 + j + 1);
  }
}
```
<h1 align="margin"> Jobsheet 7 - Array</h1>
Array adalah struktur data yang digunakan untuk menyimpan sekumpulan data dalam satu tempat. Array dapat menyimpan data dengan tipe data yang sama.

<h2 align="margin"> Deklarasi Array</h2>

Deklarasi array digunakan untuk mendefinisikan array. Bentuk umum deklarasi array adalah sebagai berikut:
```
tipe_data nama_array[ukuran];
```
-	tipe_data adalah tipe data yang akan disimpan dalam array.
-	nama_array adalah nama array.
-	ukuran adalah jumlah elemen dalam array.
Array dapat diinisialisasi saat deklarasi atau setelah deklarasi.

<h2 align="margin"> Mengakses Elemen Array</h2>

Elemen array dapat diakses dengan cara menggunakan indeks. Indeks array dimulai dari 0.
Misalnya, pernyataan berikut akan mencetak nilai elemen pertama array angka:
```
printf("%d\n", angka[0]); // 1
```

<h2 align="margin"> Perulangan untuk Mengakses Array</h2>

Perulangan dapat digunakan untuk mengakses elemen array.
Misalnya, pernyataan berikut akan mencetak semua nilai elemen array angka:
```
for (int i = 0; i < 10; i++) {
  printf("%d\n", angka[i]);
}
```
<h2 align="margin"> Operasi Array</h2>

Array dapat dioperasikan dengan operator-operator matematika, seperti penjumlahan, pengurangan, perkalian, dan pembagian.
Misalnya, pernyataan berikut akan menambahkan semua nilai elemen array angka dan menyimpan hasilnya dalam variabel total:
```
int total = 0;

for (int i = 0; i < 10; i++) {
  total += angka[i];
}
```
<h2 align="margin"> Array Multidimensi</h2>

Array multidimensional adalah array yang memiliki lebih dari satu dimensi. Array multidimensional dapat digunakan untuk menyimpan data yang lebih kompleks, seperti matriks atau tabel.
Misalnya, deklarasi berikut akan mendefinisikan array matriks dengan tipe data int dan ukuran 3x3:
```
int matriks[3][3];
```



<h1 align="margin"> Jobsheet 8 - Fungsi dan Prosedur</h1>

<h2 align="margin"> Fungsi</h2>

Fungsi adalah unit program yang dapat mengembalikan nilai. Fungsi dapat digunakan untuk melakukan tugas-tugas yang berulang atau kompleks.

<h3 align="margin"> Deklarasi Fungsi</h3>

Deklarasi fungsi digunakan untuk mendefinisikan fungsi. Bentuk umum deklarasi fungsi adalah sebagai berikut:
```
tipe_kembali nama_fungsi(parameter_1, parameter_2, ...);
```
- tipe_kembali adalah tipe data yang akan dikembalikan oleh fungsi.
-	nama_fungsi adalah nama fungsi.
-	parameter_1, parameter_2, ... adalah parameter yang akan diterima oleh fungsi.

<h3 align="margin"> Pemanggilan Fungsi</h3>
Fungsi dapat dipanggil dengan cara menuliskan nama fungsi dan memberikan nilai parameter.
Misalnya, pernyataan berikut akan memanggil fungsi jumlah dengan nilai parameter 10 dan 20:
```
int hasil = jumlah(10, 20);
```
<h2 align="margin"> Prosedur</h2>

Prosedur adalah unit program yang tidak dapat mengembalikan nilai. Prosedur dapat digunakan untuk melakukan tugas-tugas yang berulang atau kompleks.

<h3 align="margin"> Deklarasi Prosedur</h3>

Deklarasi prosedur mirip dengan deklarasi fungsi, hanya saja tipe data yang dikembalikan adalah void.
```
void nama_prosedur(parameter_1, parameter_2, ...);
```
<h3 align="margin"> Pemanggilan Prosedur</h3>

Prosedur dapat dipanggil dengan cara menuliskan nama prosedur.
Misalnya, pernyataan berikut akan memanggil prosedur tulis_pesan:
```
tulis_pesan();
```

<h1 align="margin"> Jobsheet 9 - Pointer</h1>

Pointer adalah variabel yang menyimpan alamat memori dari variabel lain. Pointer dapat digunakan untuk mengakses variabel lain secara tidak langsung.

<h2 align="margin"> Deklarasi Pointer</h2>

Deklarasi pointer digunakan untuk mendefinisikan pointer. Bentuk umum deklarasi pointer adalah sebagai berikut:
```
tipe_data *nama_pointer;
```
•	tipe_data adalah tipe data dari variabel yang akan diakses oleh pointer.
•	nama_pointer adalah nama pointer.

<h2 align="margin"> Nilai pointer</h2>

Nilai pointer adalah alamat memori dari variabel yang diakses oleh pointer. Nilai pointer dapat diakses dengan cara menggunakan operator *.
Misalnya, pernyataan berikut akan mencetak nilai pointer angka:
```
printf("%p\n", angka); // 0x7fff56789012
```

<h2 align="margin"> Mengakses Variabel Melalui Pointer</h2>

Variabel dapat diakses secara tidak langsung melalui pointer. Untuk mengakses variabel melalui pointer, dapat digunakan operator *.
Misalnya, pernyataan berikut akan mencetak nilai variabel x melalui pointer angka:
```
printf("%d\n", *angka); // 10
```

<h2 align="margin"> Operasi Pointer</h2>

Pointer dapat dioperasikan dengan operator-operator matematika, seperti penjumlahan, pengurangan, perkalian, dan pembagian.
Misalnya, pernyataan berikut akan menambahkan nilai 10 ke nilai variabel x melalui pointer angka:
```
*angka += 10;
```

<h2 align="margin"> Pointer Null</h2>

Pointer null adalah pointer yang tidak menyimpan alamat memori dari variabel apa pun. Pointer null dapat digunakan untuk menandakan bahwa pointer tersebut tidak valid.
Untuk mendeklarasikan pointer null, dapat digunakan nilai NULL.
Misalnya, deklarasi berikut akan mendefinisikan pointer angka yang bernilai null:
```
int *angka = NULL;
```

<h1 align="margin"> Jobsheet 10 - Enumerasi dan Structure </h1>

<h2 align="margin"> Enumerasi</h2>

Enumerasi adalah tipe data yang digunakan untuk mendefinisikan daftar nilai-nilai konstan. Enumerasi dapat digunakan untuk membuat program yang lebih ringkas dan mudah dibaca.

<h3 align="margin"> Deklarasi Enumerasi</h3>

Deklarasi enumerasi digunakan untuk mendefinisikan enumerasi. Bentuk umum deklarasi enumerasi adalah sebagai berikut:
```
enum nama_enumerasi {
  konstanta_1,
  konstanta_2,
  ...
};
```
-	nama_enumerasi adalah nama enumerasi.
-	konstanta_1, konstanta_2, ... adalah daftar nilai konstan yang akan didefinisikan.

<h2 align="margin"> Structure</h2>

Structure adalah tipe data yang digunakan untuk mendefinisikan kumpulan data yang terkait. Structure dapat digunakan untuk membuat program yang lebih ringkas dan mudah dibaca.


<h3 align="margin"> Deklarasi Structure</h3>
Deklarasi structure digunakan untuk mendefinisikan structure. Bentuk umum deklarasi structure adalah sebagai berikut:

```
struct nama_structure {
  tipe_data_1 nama_variabel_1;
  tipe_data_2 nama_variabel_2;
  ...
};
```
•	nama_structure adalah nama structure.
•	tipe_data_1, tipe_data_2, ... adalah tipe data dari variabel-variabel yang akan didefinisikan dalam structure.
•	nama_variabel_1, nama_variabel_2, ... adalah nama variabel-variabel yang akan didefinisikan dalam structure.

<h3 align="margin"> Akses Elemen Structure</h3>

Elemen structure dapat diakses dengan cara menggunakan operator ..
Misalnya, pernyataan berikut akan mencetak nama variabel mahasiswa:
```
printf("%s\n", mahasiswa.nama); 
```

<h1 align="margin"> Jobsheet 11 - File Handling in C</h1>

File handling adalah kemampuan untuk membaca dan menulis file dalam bahasa pemrograman C. File handling dapat digunakan untuk menyimpan data, seperti teks, gambar, atau audio.

<h2 align="margin"> File Mode</h2>
File mode adalah mode yang digunakan untuk membuka file. File mode dapat digunakan untuk menentukan apakah file akan dibuka untuk dibaca, ditulis, atau diubah.
Berikut adalah beberapa file mode yang umum digunakan:

- "r" : Mode baca
- "w" : Mode tulis
- "a" : Mode tambahkan
- "r+" : Mode baca dan tulis
- "w+" : Mode tulis dan baca
- "a+" : Mode tambahkan dan baca

<h2 align="margin"> Fungsi File Handling</h2>

Bahasa pemrograman C menyediakan beberapa fungsi untuk melakukan file handling. Fungsi-fungsi tersebut adalah sebagai berikut:

-	fopen() : Fungsi untuk membuka file
-	fclose() : Fungsi untuk menutup file
-	fread() : Fungsi untuk membaca data dari file
-	fwrite() : Fungsi untuk menulis data ke file
-	fseek() : Fungsi untuk memindahkan posisi kursor file
-	ftell() : Fungsi untuk mendapatkan posisi kursor file

<h2 align="margin"> Detail File Handling</h2>

-	Fungsi fopen() digunakan untuk membuka file. Fungsi ini memiliki dua parameter, yaitu nama file dan mode file.
-	Fungsi fclose() digunakan untuk menutup file. Fungsi ini memiliki satu parameter, yaitu file pointer.
-	Fungsi fread() digunakan untuk membaca data dari file. Fungsi ini memiliki empat parameter, yaitu buffer, ukuran buffer, jumlah byte yang akan dibaca, dan file pointer.
-	Fungsi fwrite() digunakan untuk menulis data ke file. Fungsi ini memiliki empat parameter, yaitu data, ukuran data, jumlah byte yang akan ditulis, dan file pointer.
-	Fungsi fseek() digunakan untuk memindahkan posisi kursor file. Fungsi ini memiliki tiga parameter, yaitu file pointer, offset, dan mode.
-	Fungsi ftell() digunakan untuk mendapatkan posisi kursor file. Fungsi ini memiliki satu parameter, yaitu file pointer.
