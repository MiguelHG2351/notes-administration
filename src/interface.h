
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
        char nombre[20];
        printf("Ingresa en Nombre del estudiante\n");
        scanf("%s", &nombre);
        for (i = 0; i <= 8; i++)
        {
            if (nombre == payload[i].name)
            {
                printf("\nEse es el nombre\n");
                getch();
            }
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
        render(name, nota, position);
    }
    else
    {
        system("cls");
        interface(name, nota, 1);
    }
}
