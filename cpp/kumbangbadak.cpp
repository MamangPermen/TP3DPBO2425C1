#pragma once
#include <bits/stdc++.h>
#include "hewan.cpp"
using namespace std;

class kumbangBadak : public hewan // inherits from hewan
{
private:
    string spesies;
    int panjangTanduk;
public:
    // constructor
    kumbangBadak() {}
    kumbangBadak(string famili, string habitat, string jenisMakanan, string caraBerkembangbiak, int harapanHidup, makanan food, string spesies, int panjangTanduk)
        : hewan(famili, habitat, jenisMakanan, caraBerkembangbiak, harapanHidup, food) 
    {
        this->spesies = spesies;
        this->panjangTanduk = panjangTanduk;
    }

    // Setter
    void setSpesies(string s) { spesies = s; }
    void setPanjangTanduk(int p) { panjangTanduk = p; }

    // Getter
    string getSpesies() { return spesies; }
    int getPanjangTanduk() { return panjangTanduk; }

    // Method print override kumbangBadak
    void print() override 
    {
        hewan::print();
        cout << "Spesies            : " << getSpesies() << endl;
        cout << "Panjang Tanduk     : " << getPanjangTanduk() << " mm" << endl << endl;
    }

    // Destructor
    ~kumbangBadak() {}
};
