#include <iostream>
#include <string>

using namespace std;

class Buku
{
private:
  string kode;
  string judul;
  string penulis;
  int tahunTerbit;
  string idPeminjam;

public:
  Buku(string kode, string judul, string penulis, int tahunTerbit)
      : kode(kode), judul(judul), penulis(penulis),
        tahunTerbit(tahunTerbit), idPeminjam("-") {}

  string getKode() const { return kode; }
  bool isDipinjam() const { return idPeminjam != "-"; }
  void pinjam(string id) { idPeminjam = id; }
  void kembalikan() { idPeminjam = "-"; }

  void tampilkanInfo() const
  {
    cout << "  [" << kode << "] " << judul << " - " << penulis
         << " (" << tahunTerbit << ")" << endl;
    cout << "      Status : "
         << (isDipinjam() ? "Dipinjam oleh " + idPeminjam : "Tersedia") << endl;
  }
};