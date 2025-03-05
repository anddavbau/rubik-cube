#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"
#define WHITE "Blanco"
#define YELLOW "Amarillo"
#define BLUE "Azul"
#define GREEN "Verde"
#define RED "Rojo"
#define ORANGE "Naranja"

Rubik create_rubik(){
    Rubik this;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            this.White[i][j]='W';
            this.Yellow[i][j]='Y';
            this.Blue[i][j]='B';
            this.Green[i][j]='G';
            this.Red[i][j]='R';
            this.Orange[i][j]='O';
        }
    }
    return this;
}

void print_rubik(Rubik this){
    char Faces[6][10]={WHITE,YELLOW,BLUE,GREEN,RED,ORANGE};
    for(int i=0;i<6;i++){
        printf("Mostrando la cara de color %s\n",Faces[i]);
        char temp[3][3];
        //memcpy Permite realizar una copia del arreglo
        switch (i) {
            case 0:
                memcpy(temp, this.White, sizeof(this.White));
                break;
            case 1:
                memcpy(temp, this.Yellow, sizeof(this.Yellow));
                break;
            case 2:
                memcpy(temp, this.Blue, sizeof(this.Blue));
                break;
            case 3:
                memcpy(temp, this.Green, sizeof(this.Green));
                break;
            case 4:
                memcpy(temp, this.Red, sizeof(this.Red));
                break;
            case 5:
                memcpy(temp, this.Orange, sizeof(this.Orange));
                break;
            default:
                fprintf(stderr,"Error al mostrar cubo rubik");
                exit(EXIT_FAILURE);
        }
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++)
                printf("%c ",temp[j][k]);
            printf("\n");
        }
        printf("\n");
    }
}

//El nombre de los movientos y dirección son los mismos que se utilizan para lecturas del cubo de rubik.
//Referencia https://4.bp.blogspot.com/-c20lpxkzL1E/UeeSEqlwIbI/AAAAAAAAZjA/gQqWVa569b4/s1600/Movimientos3x3x3.jpg

void move_R(Rubik this){}
void move_RP(Rubik this){}
