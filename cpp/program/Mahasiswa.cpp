#include <iostream>
#include <string>

using namespace std;

class Mahasiswa : public Anggota
{
private:
  string nim;
  string jurusan;
  int semester;

public:
  Mahasiswa(string idAnggota, string nama, Alamat alamat,
            string nim, string jurusan, int semester)
      : Anggota(idAnggota, nama, alamat),
        nim(nim), jurusan(jurusan), semester(semester) {}

  void tampilkanInfo() const
  {
    cout << "[Mahasiswa]" << endl;
    Anggota::tampilkanInfo();
    cout << "  NIM        : " << nim << endl;
    cout << "  Jurusan    : " << jurusan << endl;
    cout << "  Semester   : " << semester << endl;
  }
};
