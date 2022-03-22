#include "Compte.h"
#include <iostream>
#include <cstring>   
#include"Devise.h"
using namespace std;
using  namespace Bank;

int Compte::cpt = 0;

Bank::Compte::Compte()
{
    cpt++;
    this->numCompte =cpt ;
    this->solde =0;
    this->Prop = 0;
    this->historique = vector<Operation>();
}


Bank::Compte::Compte(Client* prop, Devise* solde)
{
    cpt++;
    this->numCompte = cpt;
    this->solde = solde; 
    this->Prop = prop;
    this->historique = vector<Operation>();
}

bool Bank::Compte::retirerArgent(Devise* montant )
{
    if (*(this->solde)>=(*montant)) {
       
        *(this->solde) =(this->solde)->operator-(*montant) ;
        Operation op(montant, "-");
        this->historique.push_back(op);
        return true;
    }
    else
    return false;
}

void Bank::Compte::deposerArgent(Devise* montant)
{
   *(this->solde) = this->solde->operator+(*montant);
   Operation op(montant, "+");
   this->historique.push_back(op);
}

void Bank::Compte::consulterSolde()const
{
    cout << "le num est : " << this->numCompte<< endl;
   // cout << "le solde est : " << this->solde->afficher() << endl;
    this->solde->afficher();
}
bool Bank::Compte::transfererArgent(Compte &c, Devise* montant)
{
    if(this->retirerArgent(montant) == true)
    {
        c.deposerArgent(montant);
        return true;
    }
    else
    return false;
}

Bank::Compte::~Compte()
{ 
    cout << "destructeur";
}
