// Définition des fonctions

#include "croissant#.h"

vide afficher(fil fil) {
	for (const auto& c : fil.chaine) {
		std::cout << c;
	}
	return vide();
}

void afficher(std::string fil) {
	std::locale::global(std::locale{ "" });
	std::cout << fil;
}

fil lecture() {
	std::string lu = "";
	std::getline(std::cin,lu);
	fil fil;
	for (const auto& c : lu) {
		fil.chaine.push_back(c);
	}
	return fil;
}

caractere lecture_caractere()
{
	return caractere(_getche());
}

caractere entree_caractere()
{
	return caractere(_getch());
}

void si(bool condition, void(*fonction))
{
	if (condition) {
		fonction;
	}
	else{return;}
}

void si_sinon(bool condition, void(*si), void(*sinon))
{
	{
		if (condition) {
			si;
		}
		else{
			sinon;
		}
	}
}

void pour(entier iterateur, entier maximum, entier incrementation, void(*fonction))
{
	for (iterateur; iterateur.valeur < maximum.valeur; iterateur.egal(iterateur.valeur + incrementation.valeur)) {
		fonction;
	}
}

void pour(entier iterateur, entier maximum, void(*fonction))
{
	for (iterateur; iterateur.valeur < maximum.valeur; iterateur.egal(iterateur.valeur + 1)) {
		fonction;
	}
}

void tantque(bool condition, void(*fonction))
{
	while (condition) { fonction; }
}

void utiliser_espacenom_std()
{
	using namespace std;
}

std::string finligne()
{
	return "\n";
}

caractere majuscule(caractere carac)
{
	if (carac.valeur >= 97 && carac.valeur <= 122) {
		return caractere(carac.valeur - 32);
	}
	else return carac;
}

caractere minuscule(caractere carac)
{
	if (carac.valeur >= 65 && carac.valeur <= 90) {
		return caractere(carac.valeur + 32);
	}
	else return carac;
}

void nettoyer()
{
	system("CLS");
}

void pause()
{
	system("PAUSE");
}

booleen faux()
{
	return booleen("faux");
}

booleen vrai()
{
	return booleen("vrai");
}


