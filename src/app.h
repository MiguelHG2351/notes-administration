#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "state/initialState.h"

void interface(char name, int nota, int arrows)
{
    int position = 1;
    int i;
    printf("\t\t\t\tBienvienido profesor\n");
    printf("\t\t----------------------------------------------\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Seccion de estudiantes\n");
    printf("\n");
    printf("\n");
    arrows == 1 ? printf("|") : 0;
    printf("Lista de aprobados y reprobados\t");
    arrows == 2 ? printf("|") : 0;
    printf("Lista de estudiantes\t");
    arrows == 3 ? printf("|") : 0;
    printf("Cambiar nota\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    // router(arrows, payload);

    if (arrows == 1)
    {
        for (i = 0; i <= 2; i++)
        {
            if (payload[i].notas < 60)
            {
                printf("\t%s |%i|, reprobado\t", payload[i].name, payload[i].notas);
            }
            else
            {
                printf("%s |%i|\t", payload[i].name, payload[i].notas);
            }
        }

        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");

        for (i = 3; i <= 6; i++)
        {
            if (payload[i].notas < 60)
            {
                printf("\t%s |%i|, reprobado\t", payload[i].name, payload[i].notas);
            }
            else
            {
                printf("\t%s |%i|\t", payload[i].name, payload[i].notas);
            }
        }
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");

        for (i = 7; i <= 7; i++)
        {
            if (payload[i].notas < 60)
            {
                printf("\t%s |%i|\t, reprobado", payload[i].name, payload[i].notas);
            }
            else
            {
                printf("\t%s |%i|\t", payload[i].name, payload[i].notas);
            }
        }
    }
    else if (arrows == 2)
    {
        for (i = 0; i <= 2; i++)
        {
            printf("\t%s\t", payload[i].name);
        }

        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");

        for (i = 3; i <= 6; i++)
        {
            printf("\t%s\t", payload[i].name);
        }
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");

        for (i = 7; i <= 7; i++)
        {
            printf("\t%s\t", payload[i].name);
        }
    }
    else if (arrows == 3)
    {
        int nombre;
        int notaNueva;
        printf("Ingresa en número del estudiante\n");
        scanf("%i", &nombre);
        switch (nombre)
        {
        case 1:
                printf("Ingresa la nueva nota de %s\n", payload[nombre-1].name);
                scanf("%i", &notaNueva);
                payload[nombre].notas = notaNueva;
                printf("Listo!");
                interface(name, nota, position);

            break;
        case 2:
                printf("Ingresa la nueva nota de %s\n", payload[nombre-1].name);
                scanf("%i", &notaNueva);
                payload[nombre].notas = notaNueva;
                printf("Listo!");
                interface(name, nota, position);

            break;
        case 3:
                printf("Ingresa la nueva nota de %s\n", payload[nombre-1].name);
                scanf("%i", &notaNueva);
                payload[nombre].notas = notaNueva;
                printf("Listo!");
                interface(name, nota, position);

            break;
        case 4:
                printf("Ingresa la nueva nota de %s\n", payload[nombre-1].name);
                scanf("%i", &notaNueva);
                payload[nombre].notas = notaNueva;
                printf("Listo!");
                interface(name, nota, position);

            break;
        case 5:
                printf("Ingresa la nueva nota de %s\n", payload[nombre-1].name);
                scanf("%i", &notaNueva);
                payload[nombre].notas = notaNueva;
                printf("Listo!");
                interface(name, nota, position);

            break;
        case 6:
                printf("Ingresa la nueva nota de %s\n", payload[nombre-1].name);
                scanf("%i", &notaNueva);
                payload[nombre].notas = notaNueva;
                printf("Listo!");
                interface(name, nota, position);

            break;
        case 7:
                printf("Ingresa la nueva nota de %s\n", payload[nombre-1].name);
                scanf("%i", &notaNueva);
                payload[nombre].notas = notaNueva;
                printf("Listo!");
                interface(name, nota, position);

            break;
        case 8:
                printf("Ingresa la nueva nota de %s\n", payload[nombre-1].name);
                scanf("%i", &notaNueva);
                payload[nombre].notas = notaNueva;
                printf("Listo!");
                interface(name, nota, position);

            break;
        
        default:
            interface(name, nota, position);
            break;
        }
    }
    else
    {
        for (i = 0; i <= 2; i++)
        {
            if (payload[i].notas < 60)
            {
                printf("\t%s |%i|, reprobado\t", payload[i].name, payload[i].notas);
            }
            else
            {
                printf("%s |%i|\t", payload[i].name, payload[i].notas);
            }
        }

        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");

        for (i = 3; i <= 6; i++)
        {
            if (payload[i].notas < 60)
            {
                printf("\t%s |%i|, reprobado\t", payload[i].name, payload[i].notas);
            }
            else
            {
                printf("\t%s |%i|\t", payload[i].name, payload[i].notas);
            }
        }
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");

        for (i = 7; i <= 7; i++)
        {
            if (payload[i].notas < 60)
            {
                printf("\t%s |%i|\t, reprobado", payload[i].name, payload[i].notas);
            }
            else
            {
                printf("\t%s |%i|\t", payload[i].name, payload[i].notas);
            }
        }
    }
    printf("\n");
    printf("\n");
    scanf("%i", &position);
    if (position >= 1 && position <= 3)
    {
        interface(name, nota, position);
    }
    else
    {
        system("cls");
        interface(name, nota, 1);
    }
}


void dispatch()
{

    int i;

    for (i = 0; i <= 28; i++)
    {
        switch (i)
        {
        case 0:
            strcpy(payload[0].name, "FreddyVega");
            payload[0].notas = 45;
            break;
        case 1:
            strcpy(payload[1].name, "LeonidasEsteban");
            payload[1].notas = 85;
            break;
        case 2:
            strcpy(payload[2].name, "OscarBarajas");
            payload[2].notas = 79;
            break;
        case 3:
            strcpy(payload[3].name, "MiguelHernàndez");
            payload[3].notas = 30;
            break;
        case 4:
            strcpy(payload[4].name, "Carlos Aburto");
            payload[4].notas = 78;
            break;
        case 5:
            strcpy(payload[5].name, "CarlosArturo");
            payload[5].notas = 100;
            break;
        case 6:
            strcpy(payload[6].name, "Enrique");
            payload[6].notas = 75;
            break;
        case 7:
            strcpy(payload[7].name, "JosuéJosé");
            payload[7].notas = 78;
            break;
        default:
            break;
        }
    }
}
// void putData()
// {
//     int i;

// }

void container()
{
    char name;
    int keeps = 1;
    dispatch();
    interface(name, keeps, 1);
}
