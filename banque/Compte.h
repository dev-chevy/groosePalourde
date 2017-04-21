#pragma once

#include <string.h>
#define MAX_CHAINE 50
#include <iostream>
using namespace std;
#include "Personne.h"
#define argent double


class Compte {
private:
	//attribut
	
	int noCompte;
	Personne titulaire;
	double solde;
	double taux;


//constructeur
public:
	Compte(int noCompte, Personne & titulaire,double taux );
	Compte(int noCompte, Personne & titulaire,double taux, argent soldeInitial);

	

	//methode affichage
	void afficher()const ;
	
	//methode  de depot et retrait 
	void retirer(argent montant);
	void ajouter(argent montant);


};