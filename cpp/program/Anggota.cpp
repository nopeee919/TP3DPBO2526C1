#include <iostream>
#include <string>

using namespace std;

class Anggota
{
private:
  string idAnggota;
  string nama;
  Alamat alamat; // Composition: Anggota has-a Alamat

public:
  Anggota(string idAnggota, string nama, Alamat alamat)
      : idAnggota(idAnggota), nama(nama), alamat(alamat) {}

  string getId() const { return idAnggota; }
  string getNama() const { return nama; }
  Alamat getAlamat() const { return alamat; }

  void tampilkanInfo() const
  {
    cout << "  ID Anggota : " << idAnggota << endl;
    cout << "  Nama       : " << nama << endl;
    cout << "  Alamat     : " << alamat.getAlamatLengkap() << endl;
  }
};