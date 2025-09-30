#pragma once
#include <bits/stdc++.h>
#include "hewan.cpp"
using namespace std;

class hiu : public hewan 
{
private:
    string spesies;
    int jumlahGigi;
public:
    hiu() {}
    hiu(string famili, string habitat, string jenisMakanan, string caraBerkembangbiak, int harapanHidup, makanan food, string spesies, int jumlahGigi)
        : hewan(famili, habitat, jenisMakanan, caraBerkembangbiak, harapanHidup, food) 
    {
        this->spesies = spesies;
        this->jumlahGigi = jumlahGigi;
    }

    // Setter
    void setSpesies(string s) { spesies = s; }
    void setJumlahGigi(int j) { jumlahGigi = j; }

    // Getter
    string getSpesies() { return spesies; }
    int getJumlahGigi() { return jumlahGigi; }

    void print() override 
    {
        hewan::print();
        cout << "Spesies            : " << getSpesies() << endl;
        cout << "Jumlah Gigi        : " << getJumlahGigi() << endl << endl;
    }
};
