// Classe fil
#include "fil.h"

fil::fil(std::vector<char> chaine) : chaine(chaine){}
fil::fil(std::string chainefil){
	int i = 0;
	for(const auto& c:chainefil){
		this->chaine.push_back(c);
		i++;
	}
}
fil::fil() : chaine() {}
void fil::egal(std::vector<char> chaine) { this->chaine = chaine; }
void fil::egal(std::string chaine){
	int i = 0;
	for (const auto& c : chaine) {
		this->chaine[i] = c;
		i++;
	}
}
std::vector<char> fil::valeur() { return chaine; }

std::string fil::chaine_()
{
	return std::string(this->chaine.begin(), this->chaine.end());
}
