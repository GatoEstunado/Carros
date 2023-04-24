#include <iostream>
using namespace std;

class Carro {
    public:
    
    string Cor;
    string Modelo;
    float VelMax;
    
    void Buzinar();
    
    Carro() {
        Cor = "Amarelo";
        Modelo = "Camaro";
        VelMax = 220.f;
    }
};

int main() {
    Carro MeuCarro;
    Carro Carro2;
    
    MeuCarro.Cor = "Branco";
    MeuCarro.Modelo = "Fusca";
    MeuCarro.VelMax = 150.f;
    
    MeuCarro.Buzinar();
    cout << MeuCarro.Cor << endl;
    cout << MeuCarro.Modelo << endl;
    cout << MeuCarro.VelMax << endl;
    
    Carro2.Buzinar();
    cout << Carro2.Cor << endl;
    cout << Carro2.Modelo << endl;
    cout << Carro2.VelMax << endl;
}

void Carro::Buzinar () {
    cout << "Bi, Bii!!" << endl;
}
