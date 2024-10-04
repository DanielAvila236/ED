
#include <iostream>
#include <vector>
#include <random>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Prototipos de funciones
void imprime(const vector<double>& v);
void cargaValores(vector<double>& v);

int main()
{
    // Vector con 1000 elementos
    vector<double> v1000;
    random_device rd;
    default_random_engine gen(rd());
    uniform_real_distribution<double> distribution(1.5, 1.90);

    // Generar 1000 datos
    for (int i = 0; i < 1000; i++) {
        double num = distribution(gen);
        v1000.push_back(num);
    }

    // Imprimir los valores generados
    imprime(v1000);

    // Esperar entrada del usuario antes de finalizar
    cout << "Presiona Enter para continuar...";
    cin.ignore();

    return 0;
}

void imprime(const vector<double>& v) {
    for (double num : v) {
        cout << num << " ";
    }
    cout << endl;
}
