// Bibliotecas
#include <iostream>
using namespace std;

// Criar a "Classe", Classe Carro
class Carro {
    // Variáveis, "públicas"
    public:
    string color;
    string modelo;
    float VelMax;
    void buzinar();
};

// Programa pricipal
int main() {
    // Criar uma subclasse através da "Classe Carro", MeuCarro
    Carro MeuCarro;
    
    // As variáveis da subclasse
    MeuCarro.color = "Preto";
    MeuCarro.modelo = "Opala";
    MeuCarro.VelMax = 200.0f;
    
    // Interface do usuário
    MeuCarro.buzinar();
    cout << "Seu novo carro é um: " << MeuCarro.modelo << endl;    
    cout << "A cor dele é: " << MeuCarro.color << endl;
    cout << "Ele chega a: " << MeuCarro.VelMax << " km/h" << endl;
}

// Método
void Carro::buzinar() {
    cout << "Bi, Biii!" << endl;
}

