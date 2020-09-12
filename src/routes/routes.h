#include<stdio.h>
#include "../controllers/notas.controllers.c"

void route(int number,data) {
    switch (number)
    {
    case 1:
        resultsFinal(payload);
        break;
    case 2:
        student(payload);
    case 3:
        modifyNotes(payload);
        break
    default:
        resultsFinal(payload);
        break;
    }
}

void router(number,payload) {
    route(number, payload)
}