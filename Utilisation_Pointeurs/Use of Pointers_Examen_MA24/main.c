#include <stdio.h>
#include <stdlib.h>

/** \brief Fonction principal Main du programme
 *
 * \return int
 *
 */
int main()
{
    /*Initialisation des variables à zéro*/
    int annee = 0;
    int mois = 0;
    int jour = 0;


    printf("DECOMPOSITION DU NOMBRE DE JOURS EN ANNEE, MOIS ET JOURS\n\n");

    //Utilisation de la fonction de décomposition. Récupération des adresses mémoire des variables annee, mois, jour
    Decomposition_Annee_Mois_Jour(&annee, &mois, &jour);

    printf("Voici la decomposition:\n\n");
    printf("Annees: %i\n", annee);
    printf("Mois: %i\n", mois);
    printf("Jours: %i\n", jour);

    return EXIT_SUCCESS;
}

/** \brief Récupération et transformation de la valeur à l'adresse mémoire des variables
 *
 * \param anneePointeur int*
 * \param moisPointeur int*
 * \param jourPointeur int*
 * \return void
 *
 */
void Decomposition_Annee_Mois_Jour(int* anneePointeur, int* moisPointeur, int* jourPointeur)
{
    //Decomposition de la variable "jour"
    *anneePointeur = *jourPointeur/360;
    *moisPointeur = *jourPointeur%360/30;
    *jourPointeur = *jourPointeur%360%30;
}
