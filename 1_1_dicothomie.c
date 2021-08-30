/*
    Partie 1: Équations non linéaires
    01. Dichotomie
    (E) x*sin(x)^2-cos(x)=0
    
    On dit qu'une équation est non linéaire lorsque son
    ensemble de solutions n'est pas un espace vectoriel.
    
    On va définir le problème en posant f(x)=x*sin(x)^2-cos(x)=0
    Reste à trouver la valeur de x qui annule f, f(x)=0
    On dessine la courbe pour identifier un intevalle qui contiet la solution
    On va appeler cet intervalle [a=0, b=1]
    On définit une précision 1e-4 puisqu'il s'agit d'approcher la solution
    Concrètement on va diviser l'intervalle en deux et répéter cela jusqu'à ce que
    la précision spécifiée soit attiente. (Je vous renvoie chercher les détails)
    
    par Joseph Konka (https://github.com/lekoinc/mathematiques-avec-c)
*/

// Bibilothèques
#include<stdio.h> // Obligatoire
#include<stdlib.h> // Gestion des fonctions
#include<math.h> // Fonctions mathématiques

// Fonction f
float f(float x){
    return x*pow(sin(x),2)-pow(cos(x),2);
}

// Méthode de la dichotomie
float Dichotomie(float a, float b, float precision){
    float x;
    // Initialisation
    x=(a+b)/2;
    while(fabs(f(x))>precision){
        x=(a+b)/2;
        printf("a=%f\tb=%f\tx=%f\tf(x)=%.5f\n",a,b,x,f(x));
        if((f(x)*f(a))<0){ // f(a) et f(x) sont de signes contraires
            // La solution se trouve entre a et x
            b=x;
        }
        else{
            // La solution se trouve entre x et b
            a=x;
        }
    }
    // On peut aussi utiliser |a-b|>precision comme condition d'arrêt
    return x;
}

int main(){
    // Variables
    float a=0;
    float b=1;
    float precision=0.0001;
    float solution;

    // Résolution
    solution = Dichotomie(a,b,precision);

    // Affichage de la solution
    printf("Solution approximative: f(x)=0 => x=%f\n", solution);

    return 0;
}
