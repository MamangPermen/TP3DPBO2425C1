#pragma once
#include <bits/stdc++.h>
using namespace std;

class makanan
{
private:
    string nama;
    string jenis;
public:
    // constructor
    makanan() {}
    makanan(string nama, string jenis) 
    {
        this->nama = nama;
        this->jenis = jenis;
    }

    // Setter
    void setNama(string nama) { this->nama = nama; }
    void setJenis(string jenis) { this->jenis = jenis; }

    // Getter
    string getNama() { return nama; }
    string getJenis() { return jenis; }

    void print() // method untuk menampilkan data makanan
    {
        cout << "Makanan            : " << getNama() << " (" << getJenis() << ")" << endl;
    }

    // Destructor
    ~makanan() {}
};
