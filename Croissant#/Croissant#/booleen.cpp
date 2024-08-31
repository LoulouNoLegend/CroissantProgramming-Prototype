//Type booléen
#include "booleen.h"
booleen::booleen(std::string valeur) : valeur(valeur) {
	if (valeur == "Vrai") this-> valeur = "vrai";
	if (valeur == "VRAI") this->valeur = "vrai";
	if (valeur == "1") this->valeur = "vrai";

	if (valeur == "Faux") this->valeur = "faux";
	if (valeur == "FAUX") this->valeur = "faux";
	if (valeur == "0") this->valeur = "faux";
}
void booleen::egal(std::string valeur) { 
	this->valeur = valeur; 
	if (valeur == "Vrai") this->valeur = "vrai";
	if (valeur == "VRAI") this->valeur = "vrai";
	if (valeur == "1") this->valeur = "vrai";

	if (valeur == "Faux") this->valeur = "faux";
	if (valeur == "FAUX") this->valeur = "faux";
	if (valeur == "0") this->valeur = "faux";
}
std::string booleen::valeur_() { return valeur; }
