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

void move_R(Rubik);
void move_RP(Rubik);
void move_L(Rubik);
void move_LP(Rubik);
void move_U(Rubik);
void move_UP(Rubik);
void move_D(Rubik);
void move_DP(Rubik);
void move_F(Rubik);
void move_FP(Rubik);
void move_B(Rubik);
void move_BP(Rubik);

#endif