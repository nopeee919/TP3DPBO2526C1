#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Perpustakaan
{
private:
  string nama;
  vector<Buku> daftarBuku;
  vector<Mahasiswa> daftarMahasiswa;
  vector<Dosen> daftarDosen;
  vector<Staf> daftarStaf;

  // Mengembalikan true jika ID anggota terdaftar (mahasiswa, dosen, maupun staf)
  bool anggotaTerdaftar(string id) const
  {
    for (size_t i = 0; i < daftarMahasiswa.size(); i++)
      if (daftarMahasiswa[i].getId() == id)
        return true;
    for (size_t i = 0; i < daftarDosen.size(); i++)
      if (daftarDosen[i].getId() == id)
        return true;
    for (size_t i = 0; i < daftarStaf.size(); i++)
      if (daftarStaf[i].getId() == id)
        return true;
    return false;
  }

public:
  Perpustakaan(string nama) : nama(nama) {}

  void tambahBuku(Buku b) { daftarBuku.push_back(b); }
  void tambahMahasiswa(Mahasiswa m) { daftarMahasiswa.push_back(m); }
  void tambahDosen(Dosen d) { daftarDosen.push_back(d); }
  void tambahStaf(Staf s) { daftarStaf.push_back(s); }

  bool pinjamBuku(string kodeBuku, string idAnggota)
  {
    if (!anggotaTerdaftar(idAnggota))
    {
      cout << "Gagal: anggota " << idAnggota << " tidak terdaftar." << endl;
      return false;
    }
    for (size_t i = 0; i < daftarBuku.size(); i++)
    {
      if (daftarBuku[i].getKode() == kodeBuku)
      {
        if (daftarBuku[i].isDipinjam())
        {
          cout << "Gagal: buku " << kodeBuku << " sedang dipinjam." << endl;
          return false;
        }
        daftarBuku[i].pinjam(idAnggota);
        cout << "Berhasil: buku " << kodeBuku << " dipinjam oleh "
             << idAnggota << "." << endl;
        return true;
      }
    }
    cout << "Gagal: buku " << kodeBuku << " tidak ditemukan." << endl;
    return false;
  }

  void tampilkanSemua() const
  {
    cout << "==== " << nama << " ====" << endl;

    cout << "\n-- Daftar Mahasiswa (" << daftarMahasiswa.size() << ") --" << endl;
    for (size_t i = 0; i < daftarMahasiswa.size(); i++)
    {
      daftarMahasiswa[i].tampilkanInfo();
      cout << endl;
    }

    cout << "-- Daftar Dosen (" << daftarDosen.size() << ") --" << endl;
    for (size_t i = 0; i < daftarDosen.size(); i++)
    {
      daftarDosen[i].tampilkanInfo();
      cout << endl;
    }

    cout << "-- Daftar Staf (" << daftarStaf.size() << ") --" << endl;
    for (size_t i = 0; i < daftarStaf.size(); i++)
    {
      daftarStaf[i].tampilkanInfo();
      cout << endl;
    }

    cout << "-- Daftar Buku (" << daftarBuku.size() << ") --" << endl;
    for (size_t i = 0; i < daftarBuku.size(); i++)
    {
      daftarBuku[i].tampilkanInfo();
    }
    cout << endl;
  }
};