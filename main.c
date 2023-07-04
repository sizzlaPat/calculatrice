#include <stdio.h>
#include "operations.h"


int main(){
    float mv1;
    float mv2;
    int choix;
    printf( "entrez un nombre");
    scanf("%f", &mv1);
    printf( "entrez un second nombre");
    scanf("%f", &mv2);

    printf(" selectionner une opération \n\t1) Addition \n\t2) Soustraction \n\t3) 			Multiplication \n\t4)Division \n\t5) Exit");
    scanf("%d", &choix);

       if (choix==1){
        float resultata =addition(mv1,mv2);
        printf(" Resultat de l'addition %f \n", resultata);
       }
        else if(choix==2){
        float resultats =soustraction(mv1,mv2);
        printf(" Resultat de la soustracion %f \n", resultats);
       }
       else if(choix==3){
        float resultatm =multiplication(mv1,mv2);
         printf(" Resultat de la multiplication %f \n", resultatm);
       }
       else if(choix==4){
        float resultatd =division(mv1,mv2);
         printf(" Resultat de la division %f \n", resultatd);
       }
        else if(choix==5){
        return  0;
        }
       

    return 0;

}
