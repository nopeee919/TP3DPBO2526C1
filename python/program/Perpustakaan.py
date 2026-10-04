from Buku import Buku
from Mahasiswa import Mahasiswa
from Dosen import Dosen
from Staf import Staf


class Perpustakaan:

    def __init__(self, nama):
        self.__nama = nama

        self.__daftar_buku = []
        self.__daftar_mahasiswa = []
        self.__daftar_dosen = []
        self.__daftar_staf = []

    # Mengembalikan True jika ID anggota terdaftar
    def __anggota_terdaftar(self, id_anggota):

        for m in self.__daftar_mahasiswa:
            if m.get_id() == id_anggota:
                return True

        for d in self.__daftar_dosen:
            if d.get_id() == id_anggota:
                return True

        for s in self.__daftar_staf:
            if s.get_id() == id_anggota:
                return True

        return False

    def tambah_buku(self, buku):
        self.__daftar_buku.append(buku)

    def tambah_mahasiswa(self, mahasiswa):
        self.__daftar_mahasiswa.append(mahasiswa)

    def tambah_dosen(self, dosen):
        self.__daftar_dosen.append(dosen)

    def tambah_staf(self, staf):
        self.__daftar_staf.append(staf)

    def pinjam_buku(self, kode_buku, id_anggota):

        if not self.__anggota_terdaftar(id_anggota):
            print(f"Gagal: anggota " f"{id_anggota} tidak terdaftar.")
            return False

        for b in self.__daftar_buku:

            if b.get_kode() == kode_buku:

                if b.is_dipinjam():
                    print(f"Gagal: buku " f"{kode_buku} sedang dipinjam.")
                    return False

                b.pinjam(id_anggota)

                print(f"Berhasil: buku " f"{kode_buku} dipinjam oleh " f"{id_anggota}.")

                return True

        print(f"Gagal: buku " f"{kode_buku} tidak ditemukan.")

        return False

    def tampilkan_semua(self):

        print(f"==== {self.__nama} ====")

        print(f"\n-- Daftar Mahasiswa " f"({len(self.__daftar_mahasiswa)}) --")

        for m in self.__daftar_mahasiswa:
            m.tampilkan_info()
            print()

        print(f"-- Daftar Dosen " f"({len(self.__daftar_dosen)}) --")

        for d in self.__daftar_dosen:
            d.tampilkan_info()
            print()

        print(f"-- Daftar Staf " f"({len(self.__daftar_staf)}) --")

        for s in self.__daftar_staf:
            s.tampilkan_info()
            print()

        print(f"-- Daftar Buku " f"({len(self.__daftar_buku)}) --")

        for b in self.__daftar_buku:
            b.tampilkan_info()

        print()
