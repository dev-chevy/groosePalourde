#include "Compte.h"
#include "Personne.h"
#include <string.h>


	//constructeur

Compte::Compte(int noCompte, Personne & titulaire,  double taux,double solde)
	:titulaire(titulaire){
	this-> noCompte = noCompte;
	this->taux = taux;
	this->solde = 0;

	}



Compte::Compte(int noCompte, Personne & titulaire, double taux, argent soldeInitial)
	:titulaire(titulaire) {
	this->noCompte = noCompte;
	this->taux = taux;
	this->solde = soldeInitial;
}

	//methode affichage
	void Compte::afficher()const  {
		cout << "Numero de Compte:" << noCompte << endl;
		cout << "Titulaire du Compte :";
		titulaire.afficher();
		cout << endl;
		cout << "Solde au Compte:" << solde << endl;
		cout << "Taux:" << taux << "%" << endl;
	}

	//methode pour retrait et depot
	void Compte::retirer(argent montant) {
		cout << "solde avant retrait" << solde <<"$"<< endl;
		if (solde >= montant) {
			solde -= montant;
			cout << "solde apres retrait" << solde <<"$"<< endl;
		}
	else 
		cout << "vous navez pas asser dargent dans le compte pour ce retrait" << endl;
	}

	void Compte::ajouter(double depot) {
		solde += depot;
		cout << "solde apres depot" << solde << "$" << endl;
	}


};