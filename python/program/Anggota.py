from Alamat import Alamat


class Anggota:
    def __init__(self, id_anggota, nama, alamat):
        self.__id_anggota = id_anggota
        self.__nama = nama
        self.__alamat = alamat

    def get_id(self):
        return self.__id_anggota

    def get_nama(self):
        return self.__nama

    def get_alamat(self):
        return self.__alamat

    def tampilkan_info(self):
        print(f"  ID Anggota : {self.__id_anggota}")
        print(f"  Nama       : {self.__nama}")
        print(f"  Alamat     : {self.__alamat.get_alamat_lengkap()}")
