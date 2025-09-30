# 🐾 TP3DPBOC1

Program ini dibuat untuk memodelkan data berbagai hewan dengan pendekatan **Object-Oriented Programming (OOP)**.  
Struktur dan desain program sama pada ketiga bahasa (C++, Java, Python).

---

##🤝🏻 Janji

Saya Nadhif Arva Anargya dengan NIM 2404336 mengerjakan Tugas Praktikum 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek. Untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

---

## 📌 Penjelasan Kelas, Atribut, dan Method

### 1. **Kelas `makanan`**
- **Atribut**:
  - `nama : string` → Nama makanan (contoh: Ikan kecil, Getah pohon).
  - `jenis : string` → Jenis makanan (contoh: Daging, Tumbuhan).
- **Method**:
  - `setNama(string)` dan `getNama()` → Setter & Getter atribut `nama`.
  - `setJenis(string)` dan `getJenis()` → Setter & Getter atribut `jenis`.
  - `print()` → Menampilkan data makanan.

---

### 2. **Kelas `hewan`**
- **Atribut**:
  - `famili : string` → Famili dari hewan (contoh: Felidae, Carcharhinidae).
  - `habitat : string` → Habitat tempat hidup (contoh: Laut, Darat).
  - `jenisMakanan : string` → Tipe makanan (contoh: Karnivora, Herbivora).
  - `caraBerkembangbiak : string` → Cara berkembang biak (contoh: Vivipar, Ovovivipar).
  - `harapanHidup : int` → Lama hidup dalam tahun.
  - `food : makanan` → Komposisi, objek makanan yang dikonsumsi.
- **Method**:
  - Setter & Getter untuk semua atribut.
  - `print()` → Menampilkan seluruh data hewan beserta informasi makanan.

---

### 3. **Kelas `kucing` (extends `hewan`)**
- **Atribut**:
  - `ras : string` → Ras kucing (contoh: Caracal).
  - `warnaBulu : string` → Warna bulu kucing.
- **Method**:
  - Setter & Getter untuk atribut tambahan.
  - `print()` → Override, menampilkan data hewan + atribut khusus kucing.

---

### 4. **Kelas `hiu` (extends `hewan`)**
- **Atribut**:
  - `spesies : string` → Spesies hiu (contoh: Hiu Lemon).
  - `jumlahGigi : int` → Jumlah gigi hiu.
- **Method**:
  - Setter & Getter untuk atribut tambahan.
  - `print()` → Override, menampilkan data hewan + atribut khusus hiu.

---

### 5. **Kelas `kumbangBadak` (extends `hewan`)**
- **Atribut**:
  - `spesies : string` → Spesies kumbang badak.
  - `panjangTanduk : int` → Panjang tanduk dalam mm.
- **Method**:
  - Setter & Getter untuk atribut tambahan.
  - `print()` → Override, menampilkan data hewan + atribut khusus kumbang badak.

---

## 🔑 Desain Program

Program menggunakan dua konsep utama **OOP**:

1. **Inheritance (Pewarisan)**
   - `hewan` adalah **superclass**.
   - `kucing`, `hiu`, dan `kumbangBadak` adalah **subclass** yang mewarisi atribut & method dari `hewan`.
   - Setiap subclass menambahkan atribut khusus sesuai jenisnya.

2. **Composition (Has-a Relationship)**
   - Kelas `hewan` memiliki atribut berupa objek `makanan`.
   - Artinya, setiap hewan **memiliki makanan** yang menjadi bagian dari datanya.

Diagram UML program (lihat file `DiagramTP3.jpg`) menunjukkan:
- **Inheritance** (panah kosong): hubungan antara `hewan` → `kucing`, `hiu`, `kumbangBadak`.
- **Composition** (belah ketupat): hubungan `hewan` memiliki `makanan`.

![alt text](https://github.com/MamangPermen/TP3DPBO2425C1/blob/main/Dokumentasi/DiagramTP3.jpg)

---

## 📖 Alur Program

1. **Inisialisasi data**  
   - Program mulai dengan menampilkan daftar hewan kosong (kucing, hiu, kumbang badak).

2. **Menambahkan data**  
   - Objek `makanan` dibuat (misal: ikan kecil, paha ayam, getah pohon).
   - Objek `kucing`, `hiu`, `kumbangBadak` dibuat dengan mengisi atribut hewan dan atribut khusus masing-masing.
   - Objek-objek ini dimasukkan ke dalam vector/list sesuai jenisnya.

3. **Menampilkan data**  
   - Program mencetak ulang daftar hewan.
   - Jika data ada, akan dipanggil method `print()` dari masing-masing objek.
   - Karena menggunakan **polymorphism (override print)**, output akan menyesuaikan jenis hewannya.

---

## 📸 Dokumentasi
1. **C++**
![alt text](https://github.com/MamangPermen/TP3DPBO2425C1/blob/main/Dokumentasi/cpp.jpg)

---

2. **Python**
![alt text](https://github.com/MamangPermen/TP3DPBO2425C1/blob/main/Dokumentasi/py.jpg)

---

3. **Java**
![alt text](https://github.com/MamangPermen/TP3DPBO2425C1/blob/main/Dokumentasi/java.jpg)
