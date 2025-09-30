#pragma once
#include <bits/stdc++.h>
#include "hewan.cpp"
using namespace std;

class kucing : public hewan 
{
private:
    string ras;
    string warnaBulu;
public:
    kucing() {}
    kucing(string famili, string habitat, string jenisMakanan, string caraBerkembangbiak, int harapanHidup, makanan food, string ras, string warnaBulu)
        : hewan(famili, habitat, jenisMakanan, caraBerkembangbiak, harapanHidup, food) 
    {
        this->ras = ras;
        this->warnaBulu = warnaBulu;
    }

    // Setter
    void setRas(string r) { ras = r; }
    void setWarnaBulu(string w) { warnaBulu = w; }

    // Getter
    string getRas() { return ras; }
    string getWarnaBulu() { return warnaBulu; }

    void print() override 
    {
        hewan::print();
        cout << "Ras                : " << getRas() << endl;
        cout << "Warna Bulu         : " << getWarnaBulu() << endl << endl;
    }
};
