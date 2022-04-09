/*

    https://fr.wikipedia.org/wiki/Algorithme_du_gradient
*/


// Bibilothèques
#include<stdio.h> // Obligatoire
#include<stdlib.h> // Gestion des fonctions
#include<math.h> // Fonctions mathématiques


// Impoter des données
LireDonnees(FILE *fichier)
{
    return 0;
}


float CalculerErreur(float *x, float *y, float a, float b)
{
    int i;
    float erreur;

    i = 0;
    while(x)
    {
        erreur += (a*(*(x+i)) + b) - (*(y+i))
    }

    return erreur;
}

// DescenteDeGradient
void DescenteDeGradient(float *donnees, float *etiquettes, float pas, int iterations)
{
    float a, b;
    int n;

    // Étape 1. Initialisation
    a = 5.0;
    b = 10.0;
    n = 0;
    while(n < iterations)
    {
        // Calculer les erreurs
        erreur = 0;
        while(x)
        {
            erreur += (a*(*(x+i)) + b) - (*(y+i))
        }
        CalculerErreur(donnees, etiquettes);
        gradient_a = ;
        gradient_b = ;
        a = a - pas*gradient_a;
        b = b - pas*gradient_b;
    }
}

int main(){
    // Variables
    float a=0;
    float b=1;
    float pas=0.001;

    // Résolution
    solution = Dichotomie(a,b,precision);

    // Affichage de la solution
    printf("Solution approximative: f(x)=0 => x=%f\n", solution);

    return 0;
}
