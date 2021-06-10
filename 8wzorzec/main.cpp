#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Wypozyczalnia {
public:
    virtual void wypozycz() = 0;
    virtual void oddaj() = 0;
};

class Film : public Wypozyczalnia {
private:
    int id_filmu;
public:
    void wypozycz() override {
        cout<<"Film wypozyczona"<<endl;
    };
    void oddaj() override {
        cout<<"film oddany"<<endl;
    };
};

class Ksiazka : public Wypozyczalnia{
private:
    int id_ksiazki;
public:
    void wypozycz() override {
        cout<<"Ksiazka wypozyczona"<<endl;
    };
    void oddaj() override {
        cout<<"Ksiazka oddana"<<endl;
    };
};

int main() {
    Ksiazka k;
    Film f;
    k.wypozycz();
    f.wypozycz();
    f.oddaj();
    k.oddaj();
    return 0;
}

