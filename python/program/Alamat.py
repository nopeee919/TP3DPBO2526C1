class Alamat:
    def __init__(self, jalan="-", kota="-", provinsi="-"):
        self.__jalan = jalan
        self.__kota = kota
        self.__provinsi = provinsi

    def get_alamat_lengkap(self):
        return f"{self.__jalan}, {self.__kota}, {self.__provinsi}"
