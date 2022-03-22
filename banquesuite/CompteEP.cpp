#include "CompteEP.h"
#include <iostream>
using namespace std;
using  namespace Bank;

Bank::CompteEP::CompteEP(Client* prop, Devise* solde,double tauxIntert,Devise* solde, Client* p, double taux,double total)

:Compte_Epargne(prop,solde,tauxIntert),Compte_Payant(solde,p,taux)
{
	this->total = total;

}

Bank::CompteEP::~CompteEP()
{
	cout << "destructeur";
}




