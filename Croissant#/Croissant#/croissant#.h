/*
Fichier principal du croissant#
*/
#pragma once

#include "fil.h"
#include "entier.h"
#include "caractere.h"
#include "booleen.h"
#include "flottant.h"
#include "vide.h"
#include "fichier_ecrit.h"
#include "fichier_lu.h"

#include <vector>
#include <any>
#include <iostream>
#include <conio.h>

vide afficher(fil fil);
void afficher(std::string fil);
fil lecture();
caractere lecture_caractere();
caractere entree_caractere();
void si(bool condition, void(*fonction()));
void si_sinon(bool condition, void(*si()), void(*sinon()));
void pour(entier iterateur, entier maximum, entier incrementation, void(*fonction()));
void pour(entier iterateur, entier maximum, void(*fonction()));
void tantque(bool condition, void(*fonction()));
void utiliser_espacenom_std();
std::string finligne();
caractere majuscule(caractere carac);
caractere minuscule(caractere carac);
void nettoyer();
void pause();

booleen faux();
booleen vrai();