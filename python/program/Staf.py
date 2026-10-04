from Anggota import Anggota


class Staf(Anggota):
    def __init__(self, id_anggota, nama, alamat, nip, bagian):

        super().__init__(id_anggota, nama, alamat)

        self.__nip = nip
        self.__bagian = bagian

    def tampilkan_info(self):
        print("[Staf]")

        super().tampilkan_info()

        print(f"  NIP        : {self.__nip}")
        print(f"  Bagian     : {self.__bagian}")
