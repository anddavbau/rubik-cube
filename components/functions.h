#ifndef FUNCTIONS_H
#define FUNCTIONS_H

//Funciones y estructuras para el cubo de rubik
typedef struct {
    char White[3][3];
    char Yellow[3][3];
    char Blue[3][3];
    char Green[3][3];
    char Red[3][3];
    char Orange[3][3];
} Rubik;
Rubik create_rubik();
void print_rubik(Rubik);
#endif