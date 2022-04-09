/*
    Partie 5: Intégration Numérique
    5.2. Méthode des trapèzes

    par Joseph Konka (https://github.com/algojungle/mathematiques-avec-c)
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// Constantes
// Nombre d'inconnus
#define N 100

// Fonction à intégrer
float f(float x) {
    float y;

    y = exp(-pow(x, 2));

    return y;
}


int main()
{
    // Prototype
    float f(float);

    // Intervalle [a, b]
    float a=0, b=1;
    float h;
    float x[N+1], y;

    // Subdivisions
    h = (b-a) / N;
    for(i=0; i<N+1; i++)
    {
        x[i] = h * i;
    }
    
    // Calcul des surfaces
    y = (N/2) * (f(x[0]) + f(x[N]));
    for(i=1; i<N; i++)
    {
        y += h * f(x[i]);
    }
    
    // Affichage de la solution
    printf("L'intégrale de f de a=%f allant à b=%f est %f.\n", a, b, y);
    
    return 0;
}