#include <iostream>
#include <string>

using namespace std;

class Dosen : public Anggota
{
private:
  string nidn;
  string bidangKeahlian;

public:
  Dosen(string idAnggota, string nama, Alamat alamat,
        string nidn, string bidangKeahlian)
      : Anggota(idAnggota, nama, alamat),
        nidn(nidn), bidangKeahlian(bidangKeahlian) {}

  void tampilkanInfo() const
  {
    cout << "[Dosen]" << endl;
    Anggota::tampilkanInfo();
    cout << "  NIDN       : " << nidn << endl;
    cout << "  Keahlian   : " << bidangKeahlian << endl;
  }
};