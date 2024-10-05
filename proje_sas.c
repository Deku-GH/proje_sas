#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max_reservation 100

struct reservation
{
    char Nome[max_reservation][50];
    char prenome[max_reservation][50];
    int age[max_reservation];
    char telephone[max_reservation][50];
    char statu[max_reservation][50];
    int id[max_reservation];
    char date[max_reservation][50];
};
struct reservation reservt;
int count;
void fisrt_rest()
{
    strcpy(reservt.Nome[0], "sara");
    strcpy(reservt.prenome[0], "sertar");
    strcpy(reservt.telephone[0], "067547648");
    reservt.age[0] = 18;
    reservt.id[0] = rand() % 1000;
    strcpy(reservt.statu[0], " annule");
    strcpy(resevt.date[0], "2025/10/4");

    strcpy(reservt.Nome[1], "najate");
    strcpy(reservt.prenome[1], "setra");
    strcpy(reservt.telephone[1], "05535754");
    reservt.age[1] = 43;
    reservt.id[1] = rand() % 1000;
    strcpy(reservt.statu[1], "valid");
    strcpy(resevt.date[1], "2025/10/4");

    strcpy(reservt.Nome[2], "mouad");
    strcpy(reservt.prenome[2], "sertati");
    strcpy(reservt.telephone[2], "062376");
    reservt.age[2] = 24;
    reservt.id[2] = rand() % 1000;
    strcpy(reservt.statu[2], "raporte");
    strcpy(resevt.date[2], "2025/10/5");

    strcpy(reservt.Nome[3], "mohemmd");
    strcpy(reservt.prenome[3], "ouzzatt");
    strcpy(reservt.telephone[3], "04757434");
    reservt.age[3] = 18;
    reservt.id[3] = rand() % 1000;
    strcpy(reservt.statu[3], "validated");
    strcpy(resevt.date[3], "2025/10/5");

    strcpy(reservt.Nome[4], "oussama");
    strcpy(reservt.prenome[4], "ben");
    strcpy(reservt.telephone[4], "0587587");
    reservt.age[4] = 22;
    reservt.id[4] = rand() % 1000;
    strcpy(reservt.statu[4], "trait");
    strcpy(resevt.date[4], "2025/10/5");

    strcpy(reservt.Nome[5], "fatima");
    strcpy(reservt.prenome[5], "charte");
    strcpy(reservt.telephone[5], "064347490");
    reservt.age[5] = 28;
    reservt.id[5] = rand() % 1000;
    strcpy(reservt.statu[5], "valide");
    strcpy(resevt.date[5], "2025/10/6");

    strcpy(reservt.Nome[6], "lana");
    strcpy(reservt.prenome[6], "trambe");
    strcpy(reservt.telephone[6], "06743470");
    reservt.age[6] = 21;
    reservt.id[6] = rand() % 1000;
    strcpy(reservt.statu[6], "trait");
    strcpy(resevt.date[6], "2025/10/6");

    strcpy(reservt.Nome[7], "amal");
    strcpy(reservt.prenome[7], "madis");
    strcpy(reservt.telephone[7], "0664276");
    reservt.age[7] = 22;
    reservt.id[7] = rand() % 1000;
    strcpy(reservt.statu[7], "valide");
    strcpy(resevt.date[7], "2025/10/7");

    strcpy(reservt.Nome[8], "tara");
    strcpy(reservt.prenome[8], "amrab");
    strcpy(reservt.telephone[8], "04674367");
    reservt.age[8] = 25;
    reservt.id[8] = rand() % 1000;
    strcpy(reservt.statu[8], "raporte");
    strcpy(resevt.date[8], "2025/10/7");

    strcpy(reservt.Nome[9], "nable");
    strcpy(reservt.prenome[9], "nos");
    strcpy(reservt.telephone[9], "0673746");
    reservt.age[9] = 22;
    reservt.id[9] = rand() % 1000;
    strcpy(reservt.statu[9], "valide");
    strcpy(resevt.date[9], "2025/10/8");

    count = 10;
}

void ajoute()
{
    int x, st;
    char annee[20];
    printf("Combien de rendez-vous allez-vous prendre ?\n");
    scanf("%d", &x);
    for (int i = count; i < count + x; i++)
    {
        printf("==========================================\n");
        printf("la reservation : %d\n", count + 1);
        printf("Entrez le nom :\n");
        scanf("%s", &reservt.Nome[i]);
        printf("Entrez le prenom :\n");
        scanf("%s", &reservt.prenome[i]);
        printf("Entrez l'age :\n");
        scanf("%d", &reservt.age[i]);
        printf("Entrez le telephne : \n");
        scanf("%s", &reservt.telephone[i]);
        printf("Statut de réservation :\n");
        printf("1:valider ---");
        printf("2:raporte ---");
        printf("3:annule ---");
        printf("4:trait\n");
        printf("entrez :");
        scanf("%d", &st);
        switch (st)
        {
        case 1:
            strcpy(reservt.statu[i], "valider");
            break;
        case 2:
            strcpy(reservt.statu[i], "raporte");
            break;
        case 3:
            strcpy(reservt.statu[i], "annule");
            break;
        case 4:
            strcpy(reservt.statu[i], "trait");
            break;
        default:
            break;
        }

        reservt.id[i] = rand() % 10000;

        printf("Entrez la date de réservation \n:");
        printf("yyyy/mm/dd \n");
        scanf("%s", &annee);

        strcpy(reservt.date[i], annee);
        printf("id de reservation : %d\n", reservt.id[i]);
        printf("==========================================\n");
    }
    count++;
}
void modev_suprime()

{
    struct nouveau_modifier
    {
        char nouveau_nom[20];
        char nouveau_prenom[20];
        int nouveau_age;
        char nouveau_telephone[20];
        char nouveau_date[20];
    };
    struct nouveau_modifier nouveau;

    int M_s, ID, ch;
    printf("==========================================\n");
    printf("Que voulez-vous ?\n");
    printf("1:modifier Une réservation\n");
    scanf("%d", &M_s);

    if (M_s == 1)
    {
        printf("entrez id:\n");
        scanf("%d", &ID);
        for (int i = 0; i < count; i++)
        {
            if (ID == reservt.id[i])
            {
                printf("==========================================\n");
                printf("Que voulez-vous  changer ? \n");
                printf("1:nom \n");
                printf("2:prenom \n");
                printf("3:age \n");
                printf("4:telephon \n");
                printf("5:date \n");
                scanf("%d", &ch);
                switch (ch)
                {
                case 1:
                {
                    printf("entrez un nouveau nom \n");
                    scanf("%s", &nouveau.nouveau_nom);
                    strcpy(reservt.Nome[i], nouveau.nouveau_nom);
                }
                break;
                case 2:
                {
                    printf("entrez un nouveau prenom \n");
                    scanf("%s", &nouveau.nouveau_prenom);
                    strcpy(reservt.prenome[i], nouveau.nouveau_prenom);
                }
                break;
                case 3:
                {
                    printf("entrez un nouveau age\n");
                    scanf("%d", &nouveau.nouveau_age);
                    reservt.age[i] = nouveau.nouveau_age;
                }
                break;

                case 4:
                {
                    printf("entrez un nouveau telephone \n");
                    scanf("%s", &nouveau.nouveau_telephone);
                    strcpy(reservt.telephone[i], nouveau.nouveau_telephone);
                }
                break;
                case 5:
                {
                    printf("entrez un nouveau date \n");
                    scanf("%s", &nouveau.nouveau_date);
                    strcpy(reservt.date[i], nouveau.nouveau_date);
                }
                break;

                default:
                    printf("a Cette option n'est pas disponible");
                    break;
                }
            }
        }
    }
}

void affiche_details()
{
    for (int a = 0; a < count; a++)

    {

        printf("==========================================\n");
        printf("la reservation : %d\n", count + 1);
        printf("nom==>   %s \n", reservt.Nome[a]);
        printf("prenom==> %s, :\n", reservt.prenome[a]);
        printf("age==> %d \n", reservt.age[a]);
        printf("telephone==> %s \n", reservt.telephone[a]);
        printf("Statut de réservation==> %s\n", reservt.statu[a]);
        printf("id==> %d\n", reservt.id[a]);
        printf("date==> %s \n", reservt.date[a]);
        printf("==========================================\n");
    }
}
void recherche()
{
    int rech;
    char name[20];
    int iad;
    printf("//vous voulez cherche avec//\n 1:le nome \n 2:id ");
    scanf("%d", &rech);
    switch (rech)
    {
    case 1:
    {
        printf("entez la nom \n");
        scanf("%s", &name);
        for (int i = 0; i < count; i++)
        {
            if (strcmp(reservt.Nome[i], name))

            {
                printf("==========================================\n");
                printf("la reservation : %d\n", count + 1);
                printf("nom prenom %s ", reservt.Nome[i]);
                printf("%s, :\n", reservt.prenome[i]);
                printf("%d \n", reservt.age[i]);
                printf("%d \n", reservt.telephone[i]);
                printf("Statut de réservation : %s\n", reservt.statu[i]);
                printf("id %d\n", reservt.id[i]);
                printf("date :%s \n", reservt.date[i]);
            }
        }
    }
    break;
    case 2:
    {
        printf("entez id \n");
        scanf("%d", &iad);
        for (int i = 0; i < count; i++)
        {
            if (reservt.id[i] == iad)

            {
                printf("la reservation : %d\n");
                printf(" nom prenom %s ", reservt.Nome[i]);
                printf("%s, :\n", reservt.prenome[i]);
                printf("%d \n", reservt.age[i]);
                printf("%d \n", reservt.telephone[i]);
                printf("Statut de réservation : %s\n", reservt.statu[i]);
                printf("%d", reservt.id[i]);
                printf("date :%s \n", reservt.date[i]);
            }
        }
    }
    break;

    default:
        printf("npas exite ");
        break;
    }
}

void affiche_choix()
{

    printf("1:ajoute une réservation\n");
    printf("2:modifier ou supprimer Une réservation \n");
    printf("3:affiche les détails d'une réservation\n");
    // printf("4:tre des réservation \n");
    printf("4:recherche des réservation \n");
    printf("5: statistiques \n");
}

void statac()
{
    int sum, resulta;

    for (int i = 0; i < count; i++)
    {
        sum += reservt.age[i];
    }
    resulta = sum / count;
    printf("la moyanne et = %d \n", resulta);
}

int main()
{
    fisrt_rest();

    int choise;
    int i = 0;
    do
    {
        fisrt_rest();
        affiche_choix();
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            ajoute();
            break;
        case 2:
            modev_suprime();
            break;
        case 3:
        {

            affiche_details();
        }
        break;
        case 4:
            recherche();
            break;
        case 5:
            statac();
            break;
        default:
            printf("Entrez un nombre entre 1 et 7");
            break;
        }

    } while (i < choise);
    i++;
}