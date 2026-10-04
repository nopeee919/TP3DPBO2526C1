from Anggota import Anggota


class Mahasiswa(Anggota):
    def __init__(self, id_anggota, nama, alamat, nim, jurusan, semester):

        super().__init__(id_anggota, nama, alamat)

        self.__nim = nim
        self.__jurusan = jurusan
        self.__semester = semester

    def tampilkan_info(self):
        print("[Mahasiswa]")

        super().tampilkan_info()

        print(f"  NIM        : {self.__nim}")
        print(f"  Jurusan    : {self.__jurusan}")
        print(f"  Semester   : {self.__semester}")
