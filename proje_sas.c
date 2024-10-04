#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max_reservation 100

struct reservation
{
    char Nome[max_reservation][50];
    char prenome[max_reservation][50];
    int age[max_reservation];
    int telephone[max_reservation];
    char statu[max_reservation][50];
    int id[max_reservation];
    char date[max_reservation][50];
};
struct reservation reservt;
int count;

void ajoute()
{
    int x, st;
    char annee[20];
    printf("Combien de rendez-vous allez-vous prendre ?\n");
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
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
        scanf("%d", &reservt.telephone[i]);
        printf("Statut de réservation :\n");
        printf("1:valider\n");
        printf("2:raporte\n");
        printf("3:annule\n");
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
        count++;
    }
}
void modev_suprime()

{
    struct nouveau_modifier
    {
        char nouveau_nom[20];
        char nouveau_prenom[20];
        int nouveau_age;
        int nouveau_telephone;
        char nouveau_date[20];
    };
    struct nouveau_modifier nouveau;

    int M_s, ID, ch;
    printf("==========================================\n");
    printf("Que voulez-vous ?\n");
    printf("1:modifier Une réservation\n");
    printf("2:supprimer Une réservation\n");
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
                    reservt.telephone[i] = nouveau.nouveau_telephone;
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
    else if (M_s == 2)
    {
        printf("Entrez l'ID pour effacer la réservation:\n");
        scanf("%d", &ID);
        for (int s = 0; s < count; s++)
        {
            if (reservt.id[s] == ID)
            {
                for (int t = t + 1; t < count - 1; t++)
                {
                    strcpy(reservt.Nome[s], reservt.Nome[t]);
                    strcpy(reservt.prenome[s], reservt.prenome[t]);
                    strcpy(reservt.date[s], reservt.date[t]);
                    strcpy(reservt.statu[s], reservt.statu[t]);
                    reservt.age[s] = reservt.age[t];
                    reservt.telephone[s] = reservt.telephone[t];
                    reservt.id[s] = reservt.id[t];
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
        printf(" nom prenom %s ", reservt.Nome[a]);
        printf("%s, :\n", reservt.prenome[a]);
        printf("%d \n", reservt.age[a]);
        printf("%d \n", reservt.telephone[a]);
        printf("Statut de réservation : %s\n", reservt.statu[a]);
        printf("%d", reservt.id[a]);
        printf("date :%s \n", reservt.date[a]);
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
    case 2:
    {
        printf("entez id \n");
        scanf("%d", &iad);
        for (int i = 0; i < count; i++)
        {
            if (reservt.id[i] == iad)

            {
                printf("la reservation : %d\n" );
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
    printf("4:tre des réservation \n");
    printf("5:recherche des réservation \n");
    printf("6: statistiques \n");
}
void tre()

{
    int stt;
    char temp[100];
    char pre[100];
    int tele;
    int AG;
    int IAD;
    char DT[100];
    printf("Comme vous voulez organiser :\n");
    printf("1:statut");

    for (int i = 0; i < count - 1; i++)
    {
        int j_min = i;
        for (int g = 0; g < count - 1; g++)
        {

            if (strcmp(reservt.Nome[i], reservt.Nome[g]) < 0)
                j_min = g;

            if (j_min != i)
            {
                // swp name
                strcpy(temp, reservt.Nome[i]);
                strcpy(reservt.Nome[i], reservt.Nome[j_min]);
                strcpy(reservt.Nome[j_min], temp);
                // swp prenom
                strcpy(pre, reservt.prenome[i]);
                strcpy(reservt.prenome[i], reservt.prenome[j_min]);
                strcpy(reservt.prenome[j_min], pre);
                // swp date
                strcpy(DT, reservt.date[i]);
                strcpy(reservt.date[i], reservt.date[j_min]);
                strcpy(reservt.date[j_min], DT);
                // swp telephone
                tele = reservt.telephone[i];
                reservt.telephone[i] = reservt.telephone[j_min];
                reservt.telephone[j_min] = tele;
                // swp age
                AG = reservt.age[i];
                reservt.age[i] = reservt.age[j_min];
                reservt.age[j_min] = AG;
                // swp id
                IAD = reservt.id[i];
                reservt.id[i] = reservt.id[j_min];
                reservt.id[j_min] = IAD;
            }
        }
    }
}
void statac(){
    
}

int main()
{
    int choise;
    int i = 0;
    do
    {
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
            affiche_details();
            break;
            case 4 :tre();
            break;
        case 5:
            recherche();
            break;
            case 7 : break
        default:
            printf("Entrez un nombre entre 1 et 7");
            break;
        }

    } while (i < choise);
    i++;
}