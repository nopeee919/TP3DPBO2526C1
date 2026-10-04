from Alamat import Alamat
from Mahasiswa import Mahasiswa
from Dosen import Dosen
from Staf import Staf
from Buku import Buku
from Perpustakaan import Perpustakaan


def main():

    perpus = Perpustakaan("Perpustakaan Kampus Nusantara")

    perpus.tambah_mahasiswa(
        Mahasiswa(
            "A001",
            "Budi Santoso",
            Alamat("Jl. Merdeka No. 10", "Bandung", "Jawa Barat"),
            "2411001",
            "Informatika",
            3,
        )
    )

    perpus.tambah_mahasiswa(
        Mahasiswa(
            "A002",
            "Siti Aminah",
            Alamat("Jl. Cihampelas No. 5", "Bandung", "Jawa Barat"),
            "2411002",
            "Sistem Informasi",
            5,
        )
    )

    perpus.tambah_dosen(
        Dosen(
            "A003",
            "Dr. Rina Wijaya",
            Alamat("Jl. Dago No. 21", "Bandung", "Jawa Barat"),
            "0412038801",
            "Basis Data",
        )
    )

    perpus.tambah_staf(
        Staf(
            "A006",
            "Wahyu Hidayat",
            Alamat("Jl. Pasteur No. 17", "Bandung", "Jawa Barat"),
            "198801012015",
            "Layanan Sirkulasi",
        )
    )

    perpus.tambah_buku(Buku("B001", "Struktur Data dengan C++", "Munir", 2019))

    perpus.tambah_buku(Buku("B002", "Pemrograman Berorientasi Objek", "Sutanto", 2021))

    print("################### PYTHON ###################")
    print("########## DATA SEBELUM " "DITAMBAHKAN ##########\n")

    perpus.tampilkan_semua()

    perpus.tambah_mahasiswa(
        Mahasiswa(
            "A004",
            "Andi Pratama",
            Alamat("Jl. Asia Afrika No. 8", "Bandung", "Jawa Barat"),
            "2411003",
            "Teknik Komputer",
            1,
        )
    )

    perpus.tambah_dosen(
        Dosen(
            "A005",
            "Prof. Hendra Gunawan",
            Alamat("Jl. Braga No. 3", "Bandung", "Jawa Barat"),
            "0415057502",
            "Kecerdasan Buatan",
        )
    )

    perpus.tambah_staf(
        Staf(
            "A007",
            "Dewi Lestari",
            Alamat("Jl. Setiabudi No. 44", "Bandung", "Jawa Barat"),
            "199203152018",
            "Katalogisasi",
        )
    )

    perpus.tambah_buku(Buku("B003", "Algoritma dan Pemrograman", "Lestari", 2020))

    perpus.tambah_buku(Buku("B004", "Dasar-Dasar Jaringan Komputer", "Prasetyo", 2018))

    print("########## PROSES PEMINJAMAN ##########")

    perpus.pinjam_buku("B001", "A001")
    perpus.pinjam_buku("B003", "A005")
    perpus.pinjam_buku("B002", "A006")
    perpus.pinjam_buku("B001", "A002")

    print()

    print("########## DATA SESUDAH " "DITAMBAHKAN ##########\n")

    perpus.tampilkan_semua()


if __name__ == "__main__":
    main()
