#include <iostream>
#include <string>
void main ()
{
	using namespace std;
	int letra,i,j;
	string vogais[5] = {"a", "e", "i", "o", "u"};
	char frase[132];
	cout << "Quantas letras tem?(a tua frase) ";
	cin >> letra; 
	cout << "Qual e a tua frase?(para acrescentar a letra 'p' a frente de cada vogal na frase ex:ale fica:aplep.";
	for (i = 0; i < letra; i++)
	{
		cin >> frase[i];
			if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
			{
				cout <<frase[i] <<'p'+vogais[i];
			}
	}
}
