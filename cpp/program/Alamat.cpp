#include <iostream>
#include <string>

using namespace std;

class Alamat
{
private:
  string jalan;
  string kota;
  string provinsi;

public:
  Alamat(string jalan = "-", string kota = "-", string provinsi = "-")
      : jalan(jalan), kota(kota), provinsi(provinsi) {}

  string getAlamatLengkap() const
  {
    return jalan + ", " + kota + ", " + provinsi;
  }
};