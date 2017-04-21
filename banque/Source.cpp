#include <iostream>
using namespace std;
#include "Compte.h"
#include "Banque.h"
#include "Personne.h"


int main() {
//test de la classe personne
	Personne uneFille("ginette");
		uneFille.afficher();
	cout << "----------------" << endl;

//test de la classe compte
	Compte unCompte(1234, uneFille, 1.20);
	unCompte.afficher();
	cout << "----------------------------" << endl;

	unCompte.ajouter(200);
	unCompte.afficher();
	cout << "---------------------" << endl;


	Compte deuxCompte(1234, uneFille, 1.20, 1000);
	deuxCompte.retirer(200);
	deuxCompte.afficher();



	return 0;
}

//SALUT MAN