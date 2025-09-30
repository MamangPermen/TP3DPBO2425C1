#include <bits/stdc++.h>

// include semua header file yang diperlukan
#include "kucing.cpp"
#include "hiu.cpp"
#include "kumbangBadak.cpp"
using namespace std;

int main()
{
    // membuat vektor untuk menyimpan objek hewan
    vector<kucing*> daftarKucing;
    vector<hiu*> daftarHiu;
    vector<kumbangBadak*> daftarKumbang;

    // Menampilkan data hewan sebelum ditambahkan
    cout << "xxx Data Hewan (Sebelum Ditambahkan) xxx" << endl;

    cout << "--- Kucing ---" << endl;
    if (daftarKucing.empty()) cout << "Data kucing masih kosong.\n" << endl;

    cout << "--- Hiu ---" << endl;
    if (daftarHiu.empty()) cout << "Data hiu masih kosong.\n" << endl;

    cout << "--- Kumbang Badak ---" << endl;
    if (daftarKumbang.empty()) cout << "Data kumbang badak masih kosong.\n" << endl;
    cout << endl;

    // Tambah data hewan
    makanan m1; m1.setNama("Ikan kecil"); m1.setJenis("Daging");
    makanan m2; m2.setNama("Paha ayam"); m2.setJenis("Daging");
    makanan m3; m3.setNama("Getah pohon"); m3.setJenis("Tumbuhan");

    kucing* k1 = new kucing();
    k1->setFamili("Felidae");
    k1->setHabitat("Darat");
    k1->setJenisMakanan("Karnivora");
    k1->setCaraBerkembangbiak("Vivipar");
    k1->setHarapanHidup(15);
    k1->setMakanan(m2);
    k1->setRas("Caracal");
    k1->setWarnaBulu("Coklat Kekuningan");
    daftarKucing.push_back(k1);

    hiu* h1 = new hiu();
    h1->setFamili("Carcharhinidae");
    h1->setHabitat("Laut Subtropis");
    h1->setJenisMakanan("Karnivora");
    h1->setCaraBerkembangbiak("Ovovivipar");
    h1->setHarapanHidup(30);
    h1->setMakanan(m1);
    h1->setSpesies("Hiu Lemon");
    h1->setJumlahGigi(66);
    daftarHiu.push_back(h1);

    kumbangBadak* kb1 = new kumbangBadak();
    kb1->setFamili("Scarabaeidae");
    kb1->setHabitat("Pohon");
    kb1->setJenisMakanan("Herbivora");
    kb1->setCaraBerkembangbiak("Metamorfosis sempurna");
    kb1->setHarapanHidup(1);
    kb1->setMakanan(m3);
    kb1->setSpesies("Kumbang Badak Jepang");
    kb1->setPanjangTanduk(30);
    daftarKumbang.push_back(kb1);

    // Menampilkan data hewan setelah ditambahkan
    cout << "xxx Data Hewan (Setelah Ditambahkan) xxx" << endl;

    cout << "--- Kucing ---" << endl;
    if (daftarKucing.empty()) cout << "Data kucing masih kosong.\n";
    else for (auto k : daftarKucing) k->print();

    cout << "--- Hiu ---" << endl;
    if (daftarHiu.empty()) cout << "Data hiu masih kosong.\n";
    else for (auto h : daftarHiu) h->print();

    cout << "--- Kumbang Badak ---" << endl;
    if (daftarKumbang.empty()) cout << "Data kumbang badak masih kosong.\n";
    else for (auto kb : daftarKumbang) kb->print();

    return 0;
}
