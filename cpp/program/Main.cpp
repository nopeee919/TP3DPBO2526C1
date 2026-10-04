#include <iostream>
#include <string>
#include <vector>

#include "Alamat.cpp"
#include "Anggota.cpp"
#include "Mahasiswa.cpp"
#include "Dosen.cpp"
#include "Staf.cpp"
#include "Buku.cpp"
#include "Perpustakaan.cpp"

using namespace std;

int main()
{
  Perpustakaan perpus("Perpustakaan Kampus Nusantara");

  // Data awal (statis)
  perpus.tambahMahasiswa(Mahasiswa("A001", "Budi Santoso",
                                   Alamat("Jl. Merdeka No. 10", "Bandung", "Jawa Barat"),
                                   "2411001", "Informatika", 3));
  perpus.tambahMahasiswa(Mahasiswa("A002", "Siti Aminah",
                                   Alamat("Jl. Cihampelas No. 5", "Bandung", "Jawa Barat"),
                                   "2411002", "Sistem Informasi", 5));
  perpus.tambahDosen(Dosen("A003", "Dr. Rina Wijaya",
                           Alamat("Jl. Dago No. 21", "Bandung", "Jawa Barat"),
                           "0412038801", "Basis Data"));
  perpus.tambahStaf(Staf("A006", "Wahyu Hidayat",
                         Alamat("Jl. Pasteur No. 17", "Bandung", "Jawa Barat"),
                         "198801012015", "Layanan Sirkulasi"));
  perpus.tambahBuku(Buku("B001", "Struktur Data dengan C++", "Munir", 2019));
  perpus.tambahBuku(Buku("B002", "Pemrograman Berorientasi Objek", "Sutanto", 2021));

  cout << "##################### C++ ####################"
       << endl;
  cout << "########## DATA SEBELUM DITAMBAHKAN ##########\n"
       << endl;
  perpus.tampilkanSemua();

  // Penambahan data
  perpus.tambahMahasiswa(Mahasiswa("A004", "Andi Pratama",
                                   Alamat("Jl. Asia Afrika No. 8", "Bandung", "Jawa Barat"),
                                   "2411003", "Teknik Komputer", 1));
  perpus.tambahDosen(Dosen("A005", "Prof. Hendra Gunawan",
                           Alamat("Jl. Braga No. 3", "Bandung", "Jawa Barat"),
                           "0415057502", "Kecerdasan Buatan"));
  perpus.tambahStaf(Staf("A007", "Dewi Lestari",
                         Alamat("Jl. Setiabudi No. 44", "Bandung", "Jawa Barat"),
                         "199203152018", "Katalogisasi"));
  perpus.tambahBuku(Buku("B003", "Algoritma dan Pemrograman", "Lestari", 2020));
  perpus.tambahBuku(Buku("B004", "Dasar-Dasar Jaringan Komputer", "Prasetyo", 2018));

  cout << "########## PROSES PEMINJAMAN ##########" << endl;
  perpus.pinjamBuku("B001", "A001");
  perpus.pinjamBuku("B003", "A005");
  perpus.pinjamBuku("B002", "A006");
  perpus.pinjamBuku("B001", "A002");
  cout << endl;

  cout << "########## DATA SESUDAH DITAMBAHKAN ##########\n"
       << endl;
  perpus.tampilkanSemua();

  return 0;
}