from kucing import kucing
from hiu import hiu
from kumbangbadak import kumbangBadak
from makanan import makanan

def main():
    daftar_kucing = []
    daftar_hiu = []
    daftar_kumbang = []

    print("xxx Data Hewan (Sebelum Ditambahkan) xxx")
    print("--- Kucing ---")
    if not daftar_kucing:
        print("Data kucing masih kosong.\n")

    print("--- Hiu ---")
    if not daftar_hiu:
        print("Data hiu masih kosong.\n")

    print("--- Kumbang Badak ---")
    if not daftar_kumbang:
        print("Data kumbang badak masih kosong.\n")

    print()

    # Buat objek makanan
    m1 = makanan()
    m1.set_nama("Ikan kecil")
    m1.set_jenis("Daging")

    m2 = makanan()
    m2.set_nama("Paha ayam")
    m2.set_jenis("Daging")

    m3 = makanan()
    m3.set_nama("Getah pohon")
    m3.set_jenis("Tumbuhan")

    # Tambah data kucing
    k1 = kucing()
    k1.set_famili("Felidae")
    k1.set_habitat("Darat")
    k1.set_jenis_makanan("Karnivora")
    k1.set_cara_berkembangbiak("Vivipar")
    k1.set_harapan_hidup(15)
    k1.set_makanan(m2)
    k1.set_ras("Caracal")
    k1.set_warna_bulu("Coklat Kekuningan")
    daftar_kucing.append(k1)

    # Tambah data hiu
    h1 = hiu()
    h1.set_famili("Carcharhinidae")
    h1.set_habitat("Laut Subtropis")
    h1.set_jenis_makanan("Karnivora")
    h1.set_cara_berkembangbiak("Ovovivipar")
    h1.set_harapan_hidup(30)
    h1.set_makanan(m1)
    h1.set_spesies("Hiu Lemon")
    h1.set_jumlah_gigi(66)
    daftar_hiu.append(h1)

    # Tambah data kumbang badak
    kb1 = kumbangBadak()
    kb1.set_famili("Scarabaeidae")
    kb1.set_habitat("Pohon")
    kb1.set_jenis_makanan("Herbivora")
    kb1.set_cara_berkembangbiak("Metamorfosis sempurna")
    kb1.set_harapan_hidup(1)
    kb1.set_makanan(m3)
    kb1.set_spesies("Kumbang Badak Jepang")
    kb1.set_panjang_tanduk(30)
    daftar_kumbang.append(kb1)

    print("xxx Data Hewan (Setelah Ditambahkan) xxx")

    print("--- Kucing ---")
    if not daftar_kucing:
        print("Data kucing masih kosong.")
    else:
        for k in daftar_kucing:
            k.print()

    print("--- Hiu ---")
    if not daftar_hiu:
        print("Data hiu masih kosong.")
    else:
        for h in daftar_hiu:
            h.print()

    print("--- Kumbang Badak ---")
    if not daftar_kumbang:
        print("Data kumbang badak masih kosong.")
    else:
        for kb in daftar_kumbang:
            kb.print()

if __name__ == "__main__":
    main()