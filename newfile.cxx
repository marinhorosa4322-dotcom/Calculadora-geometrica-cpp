#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float raio, perimetro, area;
    const float PI = 3.14159; 

    cout << "--- CALCULADORA DE CIRCULO ---" << endl;
    cout << "Digite o valor do raio: ";
    cin >> raio;

    if (raio > 0) {
        
        
        perimetro = 2 * PI * raio;
        
        
        area = PI * pow(raio, 2);

        cout << "\nRESULTADOS:" << endl;
        cout << "O perimetro (circunferencia) e: " << perimetro << endl;
        cout << "A area do circulo e: " << area << endl;
    } 
    else {
        cout << "Erro: O valor do raio deve ser maior que zero!" << endl;
    }

    return 0;
}