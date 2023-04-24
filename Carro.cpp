#include <iostream>
using namespace std;

// Criar a classe "Carro", e as váriaveis de forma "pública"
class Carro {
    public:
    
    string Cor;
    string Modelo;
    float VelMax;
    
    // Método
    void Buzinar();
    
    // Definir um padrão para a "Forma de bolo"
    Carro() {
        Cor = "Amarelo";
        Modelo = "Camaro";
        VelMax = 220.f;
    }
};

// Programa principal
int main() {
    // Um carro gerado pelo usuário e um que será gerado pela "forma de bolo"
    Carro MeuCarro;
    Carro Carro2;
    
    // Definições do carro "MeuCarro"
    MeuCarro.Cor = "Branco";
    MeuCarro.Modelo = "Fusca";
    MeuCarro.VelMax = 150.f;
    
    // Interface do usuário
    MeuCarro.Buzinar();
    cout << MeuCarro.Cor << endl;
    cout << MeuCarro.Modelo << endl;
    cout << MeuCarro.VelMax << endl;
    
    Carro2.Buzinar();
    cout << Carro2.Cor << endl;
    cout << Carro2.Modelo << endl;
    cout << Carro2.VelMax << endl;
}

// Método e o que ele irá realizar
void Carro::Buzinar () {
    cout << "Bi, Bii!!" << endl;
}
