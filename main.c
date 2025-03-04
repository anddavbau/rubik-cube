#include "components/functions.h"
#include <stdio.h>

int main(){
    printf("Creando cubo de rubik");
    Rubik example = create_rubik();
    print_rubik(example);
}