#pragma once
#include <bits/stdc++.h>
#include "makanan.cpp"
using namespace std;

class hewan 
{
private:
    string famili;
    string habitat;
    string jenisMakanan;
    string caraBerkembangbiak;
    int harapanHidup;
    makanan food;
public:
    hewan() {}
    hewan(string famili, string habitat, string jenisMakanan, string caraBerkembangbiak, int harapanHidup, makanan food) 
    {
        this->famili = famili;
        this->habitat = habitat;
        this->jenisMakanan = jenisMakanan;
        this->caraBerkembangbiak = caraBerkembangbiak;
        this->harapanHidup = harapanHidup;
        this->food = food;
    }

    // Setter
    void setFamili(string f) { famili = f; }
    void setHabitat(string h) { habitat = h; }
    void setJenisMakanan(string jm) { jenisMakanan = jm; }
    void setCaraBerkembangbiak(string cb) { caraBerkembangbiak = cb; }
    void setHarapanHidup(int hh) { harapanHidup = hh; }
    void setMakanan(makanan m) { food = m; }

    // Getter
    string getFamili() { return famili; }
    string getHabitat() { return habitat; }
    string getJenisMakanan() { return jenisMakanan; }
    string getCaraBerkembangbiak() { return caraBerkembangbiak; }
    int getHarapanHidup() { return harapanHidup; }
    makanan getMakanan() { return food; }

    virtual void print() 
    {
        cout << "Famili             : " << getFamili() << endl;
        cout << "Habitat            : " << getHabitat() << endl;
        cout << "Jenis Makanan      : " << getJenisMakanan() << endl;
        cout << "Cara Berkembangbiak: " << getCaraBerkembangbiak() << endl;
        cout << "Harapan Hidup      : " << getHarapanHidup() << " tahun" << endl;
        getMakanan().print();
    }
};
