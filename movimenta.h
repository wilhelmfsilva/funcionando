#include <stdio.h>

///////////// 0 - LIVRE  E   1 - OCUPADO

void imprimematriz(int posicao[25][22]){
    int i, j;

    for(i=0;i<25;i++){
        for(j=0;j<22;j++){
            gotoxy(j+26,i+1);
                printf("%d", posicao[i][j]);
        }
    }
}

int verificadireita(char peca, int x, int y, int posicao[25][22]){
    int i;

    if(peca=='i'){
        if(posicao[y][x+8]>=1){
            return 1;
        }
        else{return 0;}
    }
    if(peca=='o'){
        if((posicao[y][x+6]>=1)||(posicao[y+1][x+6]>=1)){
            return 1;
        }
        else{return 0;}
    }
    if(peca=='t'){
        if((posicao[y][x+6]>=1)||(posicao[y+1][x+4]>=1)){
            return 1;
        }
        else{return 0;}
    }
    if(peca=='l'){
        if((posicao[y][x+6]>=1)||(posicao[y+1][x+6]>=1)){
            return 1;
        }
        else{return 0;}
    }
    if(peca=='s'){
        if((posicao[y][x+6]>=1)||(posicao[y+1][x+4]>=1)){
            return 1;
        }
        else{return 0;}
    }
    if(peca=='z'){
        if((posicao[y][x+4]>=1)||(posicao[y+1][x+6]>=1)){
            return 1;
        }
        else{return 0;}
    }
    if(peca=='p'){
        if((posicao[y][x+6]>=1)||(posicao[y+1][x+6]>=1)){
            return 1;
        }
        else{return 0;}
    }
    if(peca=='a'){
        if(posicao[y][x+2]>=1 || posicao[y+1][x+2]>=1 || posicao[y+2][x+2]>=1 || posicao[y+3][x+2]>=1){
            return 1;
        }
        else{return 0;}
    }
}

int verificaesquerda(char peca, int x, int y, int posicao[25][22]){
    int i;

    if(peca=='i'){
        if(posicao[y][x-1]>=1){
            return 1;
        }
        else{return 0;}
    }
    if(peca=='o'){
        if((posicao[y][x+1]>=1)||(posicao[y+1][x+1]>=1)){
            return 1;
        }
        else{return 0;}
    }
    if(peca=='t'){
        if((posicao[y][x-1]>=1)||(posicao[y+1][x+1]>=1)){
            return 1;
        }
        else{return 0;}
    }
    if(peca=='l'){
        if((posicao[y][x+3]>=1)||(posicao[y+1][x-1]>=1)){
            return 1;
        }
        else{return 0;}
    }
    if(peca=='s'){
        if((posicao[y][x+1]>=1)||(posicao[y+1][x-1]>=1)){
            return 1;
        }
        else{return 0;}
    }
    if(peca=='z'){
        if((posicao[y][x-1]>=1)||(posicao[y+1][x+1]>=1)){
            return 1;
        }
        else{return 0;}
    }
    if(peca=='p'){
        if((posicao[y][x-1]>=1)||(posicao[y+1][x+3]>=1)){
            return 1;
        }
        else{return 0;}
    }
    if(peca=='a'){
        if(posicao[y][x-1]>=1 || posicao[y+1][x-1]>=1 || posicao[y+2][x-1]>=1 || posicao[y+3][x-1]>=1){
            return 1;
        }
        else{return 0;}
    }
}

int verificabaixo(char peca, int x, int y, int posicao[25][22]){
    int i, flag=0;

    if(peca=='i'){
        for(i=0; i<8; i++){
            if(posicao[y+0][x+i]>=1){
                return 1;
                flag=1;
            }
        }
        if(flag==0){return 0;}
    }
    if(peca=='o'){
        for(i=0; i<4; i++){
            if(posicao[y+1][x+i+2]>=1){
                return 1;
                flag=1;
            }
        }
        if(flag==0){return 0;}
    }
    if(peca=='t'){
        if(posicao[y+0][0+x]>=1 || posicao[y+0][1+x]>=1 || posicao[y+0][4+x]>=1 ||
           posicao[y+0][5+x]>=1 || posicao[y+1][2+x]>=1 || posicao[y+1][3+x]>=1){
                return 1;
                flag=1;
        }
        if(flag==0){return 0;}
    }
    if(peca=='l'){
        for(i=0; i<6; i++){
            if(posicao[y+1][x+i]>=1){
                return 1;
                flag=1;
            }
        }
        if(flag==0){return 0;}
    }
    if(peca=='s'){
        if(posicao[y+0][4+x]>=1 || posicao[y+0][5+x]>=1 || posicao[y+1][0+x]>=1 ||
           posicao[y+1][1+x]>=1 || posicao[y+1][2+x]>=1 || posicao[y+1][3+x]>=1){
                return 1;
                flag=1;
        }
        if(flag==0){return 0;}
    }
    if(peca=='z'){
        if(posicao[y+1][4+x]>=1 || posicao[y+1][5+x]>=1 || posicao[y+0][0+x]>=1 ||
           posicao[y+0][1+x]>=1 || posicao[y+1][2+x]>=1 || posicao[y+1][3+x]>=1){
                return 1;
                flag=1;
        }
        if(flag==0){return 0;}
    }
    if(peca=='p'){
        if(posicao[y+1][4+x]>=1 || posicao[y+1][5+x]>=1 || posicao[y+0][0+x]>=1 ||
           posicao[y+0][1+x]>=1 || posicao[y+0][2+x]>=1 || posicao[y+0][3+x]>=1){
                return 1;
                flag=1;
        }
        if(flag==0){return 0;}
    }
    if(peca=='a'){
        if(posicao[y+3][x+0]>=1 || posicao[y+3][x+1]>=1){
            return 1;
        }
        else{return 0;}
    }
}

char girapeca(char peca, int x, int y, int posicao[25][22]){

    if(peca=='a' || peca=='i' || peca=='o'){
        if(peca=='o'){
            return 'o';
        }
        if(peca=='i'){
            return 'a';
        }
        if(peca=='a'){
            return 'i';
        }
    }
    if(peca=='t' || peca=='b' || peca=='c' || peca=='d'){
        if(peca=='t'){
            return 'b';
        }
        if(peca=='b'){
            return 'c';
        }
        if(peca=='c'){
            return 'd';
        }
        if(peca=='d'){
            return 't';
        }
    }
    if(peca=='l' || peca=='e' || peca=='f' || peca=='g'){
        if(peca=='l'){
            return 'e';
        }
        if(peca=='e'){
            return 'f';
        }
        if(peca=='f'){
            return 'g';
        }
        if(peca=='g'){
            return 'l';
        }
    }
    if(peca=='s' || peca=='h' || peca=='z' || peca=='j'){
        if(peca=='s'){
            return 'h';
        }
        if(peca=='h'){
            return 's';
        }
        if(peca=='z'){
            return 'j';
        }
        if(peca=='j'){
            return 'z';
        }
    }
    if(peca=='p' || peca=='k' || peca=='m' || peca=='n'){
        if(peca=='p'){
            return 'k';
        }
        if(peca=='k'){
            return 'm';
        }
        if(peca=='m'){
            return 'n';
        }
        if(peca=='n'){
            return 'p';
        }
    }

}
