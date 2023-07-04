#include <stdio.h>
#include "operations.h"


int main(){
    float mv1;
    float mv2;
    int choix;
    printf( "entrez un nombre \t\n");
    scanf("%f", &mv1);
    printf( "entrez un second nombre \t\n");
    scanf("%f", &mv2);

    printf(" selectionner une opération \n\t1) Addition \n\t2) Soustraction \n\t3) Multiplication \n\t4) Division \n\t5) Exit\n");
    scanf(" \n %d", &choix);

       if (choix==1){
        float resultata =addition(mv1,mv2);
        printf(" Resultat de l'addition \n %f \n", resultata);
       }
        else if(choix==2){
        float resultats =soustraction(mv1,mv2);
        printf(" Resultat de la soustracion \n %f \n", resultats);
       }
       else if(choix==3){
        float resultatm =multiplication(mv1,mv2);
         printf(" Resultat de la multiplication \n %f \n", resultatm);
       }
       else if(choix==4){
        float resultatd =division(mv1,mv2);
         printf(" Resultat de la division \n%f \n", resultatd);
       }
        else if(choix==5){
        return  0;
        }
       

    return 0;

}
