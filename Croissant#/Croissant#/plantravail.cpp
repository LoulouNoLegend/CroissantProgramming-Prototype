#include "croissant#.h"

int main() {
	fichier_ecrit fichier;

	fichier.ouvrir("C:/Temp/fichier.txt",vrai());
	fil texte = lecture();
	fichier.fichier << texte.chaine_();

	fichier.fermer();

}