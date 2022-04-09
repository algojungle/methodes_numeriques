/*
    Partie 2: Systèmes d'équations linéaires
    2.1. Méthode du pivot de Gauss

    Il s'agit d'une méthode itérative


    par Joseph Konka (https://github.com/lekoinc/mathematiques-avec-c)
*/

#include<stdio.h>
#include<math.h>

// Constantes
// Nombre d'inconnus
#define N 3

int main()
{
    // Les coefficients A
    float A[N][N]={{1, 2, 2}, {1, 3, -2}, {3, 5, 8}};
    // Second membre B
    float B[N]={2, -1, 8};
    // Inconnus
    float X[N];
    
    //
    int i,j;
    
    // Afficher l'équation
    printf("Système d'equations AX=B\n");
    for(i=0; i<N; i++)
    {
        for(j=0; j<N ;j++)
        {
            printf("%0.2fX%d ", fabs(A[i][j]), j+1);
            if(j<N-1)
            {
                if(A[i][j+1]>0)
                printf("+ ");
                else
                printf("- ");
            }
        }
        printf("= %0.2f\n", B[i]);
    }
    
    // Résolution - Étape 1: Triangularisation
    for(i=1; i<N; i++)
    {
        printf("%d,%f,%f\n",i,A[i-1][i-1],A[i][i-1]);
        for(j=0; j<N ;j++)
        {
            A[i][j]=A[i-1][i-1]*A[i][j] - A[i][i-1]*A[i-1][j];
        }
        B[i] = A[i][i-1]*B[i] - A[i-1][i-1]*B[i-1];
        break;
    }
    
    // Résolution - Étape 2: Remontée
    
    // Affichage de la solution
    
    
    printf("Système d'equations AX=B\n");
    for(i=0; i<N; i++)
    {
        for(j=0; j<N ;j++)
        {
            printf("%0.2fX%d ", fabs(A[i][j]), j+1);
            if(j<N-1)
            {
                if(A[i][j+1]>0)
                printf("+ ");
                else
                printf("- ");
            }
        }
        printf("= %0.2f\n", B[i]);
    }
    
    
    return 0;
}