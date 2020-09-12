struct initialState
    {
        char name[20];
        int notas;
    } payload[28];

// void getUsersData() {
//     float data;
//     int i;
//     FILE * fs;
//     fs = fopen("notas.txt", 'r');
//     if(fs != NULL) {
//         for (i = 0; i <= 28; i++)
//         {
//             fscanf(fs, "%f", &data);
//             payload[i].notas = data;
//         }
//         fclose(fs);
//         printf("data is", payload[1].notas);
//     }
// }

// void getUsersNotes() {
//     float data;
//     int i;
//     FILE * fs;
//     fs = fopen("notas.txt", 'r');
//     if(fs != NULL) {
//         for (i = 0; i <= 28; i++)
//         {
//             fscanf(fs, "%s", payload[i].name);
//         }
//         fclose(fs);
//         printf("data is", payload[1].notas);
//     }
// }