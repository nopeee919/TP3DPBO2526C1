from Anggota import Anggota


class Dosen(Anggota):
    def __init__(self, id_anggota, nama, alamat, nidn, bidang_keahlian):

        super().__init__(id_anggota, nama, alamat)

        self.__nidn = nidn
        self.__bidang_keahlian = bidang_keahlian

    def tampilkan_info(self):
        print("[Dosen]")

        super().tampilkan_info()

        print(f"  NIDN       : {self.__nidn}")
        print(f"  Keahlian   : {self.__bidang_keahlian}")
