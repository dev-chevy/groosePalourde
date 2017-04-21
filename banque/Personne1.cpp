#include "Personne.h"
#include <iostream>
using namespace std;
#define MAX_CHAINE 50
#include <string.h>



	Personne::Personne(const string& client)
	{
		this->client = client;
	}


void Personne::afficher()const  {
	cout << "Nom du client:" << &client << endl;
}
