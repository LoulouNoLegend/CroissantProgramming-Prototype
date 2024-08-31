//Type flottant
#include "flottant.h"
flottant::flottant(float valeur) : valeur(valeur) {}
flottant::flottant() : valeur(0.0) {}
void flottant::egal(float valeur) { valeur = valeur; }
float flottant::valeur_() { return valeur; }