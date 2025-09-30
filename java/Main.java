import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList<Kucing> daftarKucing = new ArrayList<>();
        ArrayList<Hiu> daftarHiu = new ArrayList<>();
        ArrayList<KumbangBadak> daftarKumbang = new ArrayList<>();

        System.out.println("xxx Data Hewan (Sebelum Ditambahkan) xxx");
        System.out.println("--- Kucing ---");
        if (daftarKucing.isEmpty()) System.out.println("Data kucing masih kosong.\n");

        System.out.println("--- Hiu ---");
        if (daftarHiu.isEmpty()) System.out.println("Data hiu masih kosong.\n");

        System.out.println("--- Kumbang Badak ---");
        if (daftarKumbang.isEmpty()) System.out.println("Data kumbang badak masih kosong.\n");
        System.out.println();

        // Buat objek makanan
        Makanan m1 = new Makanan();
        m1.setNama("Ikan kecil");
        m1.setJenis("Daging");

        Makanan m2 = new Makanan();
        m2.setNama("Paha ayam");
        m2.setJenis("Daging");

        Makanan m3 = new Makanan();
        m3.setNama("Getah pohon");
        m3.setJenis("Tumbuhan");

        // Tambah data Kucing
        Kucing k1 = new Kucing();
        k1.setFamili("Felidae");
        k1.setHabitat("Darat");
        k1.setJenisMakanan("Karnivora");
        k1.setCaraBerkembangbiak("Vivipar");
        k1.setHarapanHidup(15);
        k1.setMakanan(m2);
        k1.setRas("Caracal");
        k1.setWarnaBulu("Coklat Kekuningan");
        daftarKucing.add(k1);

        // Tambah data Hiu
        Hiu h1 = new Hiu();
        h1.setFamili("Carcharhinidae");
        h1.setHabitat("Laut subtropis");
        h1.setJenisMakanan("Karnivora");
        h1.setCaraBerkembangbiak("Ovovivipar");
        h1.setHarapanHidup(30);
        h1.setMakanan(m1);
        h1.setSpesies("Hiu Lemon");
        h1.setJumlahGigi(66);
        daftarHiu.add(h1);

        // Tambah data Kumbang Badak
        KumbangBadak kb1 = new KumbangBadak();
        kb1.setFamili("Scarabaeidae");
        kb1.setHabitat("Hutan");
        kb1.setJenisMakanan("Herbivora");
        kb1.setCaraBerkembangbiak("Metamorfosis sempurna");
        kb1.setHarapanHidup(1);
        kb1.setMakanan(m3);
        kb1.setSpesies("Kumbang Badak Jepang");
        kb1.setPanjangTanduk(30);
        daftarKumbang.add(kb1);

        System.out.println("xxx Data Hewan (Setelah Ditambahkan) xxx");

        System.out.println("--- Kucing ---");
        if (daftarKucing.isEmpty()) {
            System.out.println("Data kucing masih kosong.");
        } else {
            for (Kucing k : daftarKucing) {
                k.print();
            }
        }

        System.out.println("--- Hiu ---");
        if (daftarHiu.isEmpty()) {
            System.out.println("Data hiu masih kosong.");
        } else {
            for (Hiu h : daftarHiu) {
                h.print();
            }
        }

        System.out.println("--- Kumbang Badak ---");
        if (daftarKumbang.isEmpty()) {
            System.out.println("Data kumbang badak masih kosong.");
        } else {
            for (KumbangBadak kb : daftarKumbang) {
                kb.print();
            }
        }
    }
}