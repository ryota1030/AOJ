//
//  main.c
//  Dice 1
//
//  Created by x16026xx on 2018/05/31.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    struct Dice{
        int dice1;
        int dice2;
        int dice3;
        int dice4;
        int dice5;
        int dice6;
    };
    
    int a[6],i;
    for(i=0; i<6; i++){
        scanf("%d",&a[i]);
    }
    struct Dice Dice_1 = {a[0], a[1], a[2], a[3], a[4], a[5]};
    struct Dice Dice_2;
    
    char w;
    w = getchar();
    while(1){
        w = getchar();
        if(w == '\n')break;
        Dice_2 = Dice_1;
        if(w == 'E'){
            Dice_1.dice1 = Dice_2.dice4;
            Dice_1.dice3 = Dice_2.dice1;
            Dice_1.dice4 = Dice_2.dice6;
            Dice_1.dice6 = Dice_2.dice3;
        }else if(w == 'N'){
            Dice_1.dice1 = Dice_2.dice2;
            Dice_1.dice2 = Dice_2.dice6;
            Dice_1.dice5 = Dice_2.dice1;
            Dice_1.dice6 = Dice_2.dice5;
        }else if(w == 'S'){
            Dice_1.dice1 = Dice_2.dice5;
            Dice_1.dice2 = Dice_2.dice1;
            Dice_1.dice5 = Dice_2.dice6;
            Dice_1.dice6 = Dice_2.dice2;
        }else if(w == 'W'){
            Dice_1.dice1 = Dice_2.dice3;
            Dice_1.dice3 = Dice_2.dice6;
            Dice_1.dice4 = Dice_2.dice1;
            Dice_1.dice6 = Dice_2.dice4;
        }
    }
    printf("%d\n",Dice_1.dice1);
    return 0;
}
