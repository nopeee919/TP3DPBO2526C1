class Buku:
    def __init__(self, kode, judul, penulis, tahun_terbit):
        self.__kode = kode
        self.__judul = judul
        self.__penulis = penulis
        self.__tahun_terbit = tahun_terbit
        self.__id_peminjam = "-"

    def get_kode(self):
        return self.__kode

    def is_dipinjam(self):
        return self.__id_peminjam != "-"

    def pinjam(self, id_anggota):
        self.__id_peminjam = id_anggota

    def kembalikan(self):
        self.__id_peminjam = "-"

    def tampilkan_info(self):
        print(
            f"  [{self.__kode}] "
            f"{self.__judul} - "
            f"{self.__penulis} "
            f"({self.__tahun_terbit})"
        )

        if self.is_dipinjam():
            status = f"Dipinjam oleh {self.__id_peminjam}"
        else:
            status = "Tersedia"

        print(f"      Status : {status}")
