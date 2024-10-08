#include <iostream>
#include <vector>

using namespace std;
void imprime(vector<int> v)
{
	for (auto elemento : v)
	{
		cout << elemento << ",";

	}
	cout << endl;
	system("pause");
	system("cls");
}

int main()
{
	vector<int> v;
	//llenar el vector con 0, cinco veces 
	v.assign(5, 0);
	imprime(v);
	system("pause");
	system("cls");

	//inserta 15 en la ultima poisición 
	v.push_back(15);
	imprime(v);
	system("pause");
	system("cls");

	//quita el ultimo elemento
	v.pop_back();
	imprime(v);
	system("pause");
	system("cls");

	// inserta al principio un 5 en el vector
	v.insert(v.begin(), 5);
	imprime(v);
	system("pause");
	system("cls");

	// borra el primer elemento del vector
	v.erase(v.begin());
	imprime(v);
	system("pause");
	system("cls");

	//émplace inserta 25 al inicio
	v.emplace(v.begin(), 25);
	imprime(v);
	system("pause");
	system("cls");

	//emplace_back inserta un 20 al final
	v.emplace_back(20);
	imprime(v);
	system("pause");
	system("cls");

	//borrar completamente el vector
	v.clear();
	imprime(v);
	system("pause");
	system("cls");

	//swap intercambio entre dos vectores 
	vector<int> v1, v2;
	v1.push_back(1);
	v1.push_back(2);
	v2.push_back(3);
	v2.push_back(4);
	v1.swap(v2);
	imprime(v1);
	imprime(v2);
	system("pause");
]
	system("cls");

