void resultsFinal( payload ) {
    int i;
    for ( i = 0; i <= 2; i++)
    {
        if(payload[i].notas < 60) {
            printf("\t%s |%i|, reprobado\t", payload[i].name, payload[i].notas);
        } else {
            printf("%s |%i|\t", payload[i].name, payload[i].notas);
        }   
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    for ( i = 3; i <= 6; i++)
    {
        if(payload[i].notas < 60) {
            printf("\t%s |%i|, reprobado\t", payload[i].name, payload[i].notas);
        } else {
            printf("\t%s |%i|\t", payload[i].name, payload[i].notas);
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    for ( i = 7; i <= 7; i++)
    {
        if(payload[i].notas < 60) {
            printf("\t%s |%i|\t, reprobado", payload[i].name, payload[i].notas);
        } else {
            printf("\t%s |%i|\t", payload[i].name, payload[i].notas);
        }
    }
}

void student() {
    int i;
    for ( i = 0; i <= 2; i++)
    {
        printf("\t%s\t", payload[i].name);
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    for ( i = 3; i <= 6; i++)
    {
        printf("\t%s\t", payload[i].name);
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    for ( i = 7; i <= 7; i++)
    {
        printf("\t%s\t", payload[i].name);
    }
}

void modifyNotes() {

}