#include <iostream>
#include <string>

using namespace std;

class Staf : public Anggota
{
private:
  string nip;
  string bagian;

public:
  Staf(string idAnggota, string nama, Alamat alamat,
       string nip, string bagian)
      : Anggota(idAnggota, nama, alamat),
        nip(nip), bagian(bagian) {}

  void tampilkanInfo() const
  {
    cout << "[Staf]" << endl;
    Anggota::tampilkanInfo();
    cout << "  NIP        : " << nip << endl;
    cout << "  Bagian     : " << bagian << endl;
  }
};
