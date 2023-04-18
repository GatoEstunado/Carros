#include <iostream>
using namespace std;

class Carro {
    public:
    string color;
    string modelo;
    float VelMax;
    void buzinar();
};

int main() {
    Carro MeuCarro;
    
    MeuCarro.color = "Preto";
    MeuCarro.modelo = "Opala";
    MeuCarro.VelMax = 200.0f;
    
    MeuCarro.buzinar();
    cout << "Seu novo carro é um: " << MeuCarro.modelo << endl;    
    cout << "A cor dele é: " << MeuCarro.color << endl;
    cout << "Ele chega a: " << MeuCarro.VelMax << " km/h" << endl;
}

void Carro::buzinar() {
    cout << "Bi, Biii!" << endl;
}

