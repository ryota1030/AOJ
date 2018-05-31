//
//  main.c
//  Dice 3
//
//  Created by x16026xx on 2018/05/31.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>

int main(int argc, const char * argv[]){
    int i,ex1,ex2,ex3,ex4,a;
    int dice_1[7],dice_2[7];
    int w;
    
    for(i=0; i<6; i++){
        scanf("%d",&dice_1[i]);
    }
    
    for(i=0; i<6; i++){
        scanf("%d",&dice_2[i]);
    }
    
    for(i=0; i<10000; i++){
        w = rand() % 4;
        if(w == 0){
            ex1 = dice_1[1];
            ex2 = dice_1[2];
            ex3 = dice_1[5];
            ex4 = dice_1[6];
            dice_1[1] = ex3;
            dice_1[2] = ex1;
            dice_1[5] = ex4;
            dice_1[6] = ex2;
        }else if(w == 1){
            ex1 = dice_1[1];
            ex2 = dice_1[2];
            ex3 = dice_1[5];
            ex4 = dice_1[6];
            dice_1[1] = ex2;
            dice_1[2] = ex4;
            dice_1[5] = ex1;
            dice_1[6] = ex3;
        }else if(w == 2){
            ex1 = dice_1[1];
            ex2 = dice_1[3];
            ex3 = dice_1[4];
            ex4 = dice_1[6];
            dice_1[1] = ex3;
            dice_1[3] = ex1;
            dice_1[4] = ex4;
            dice_1[6] = ex2;
        }else if(w == 3){
            ex1 = dice_1[1];
            ex2 = dice_1[3];
            ex3 = dice_1[4];
            ex4 = dice_1[6];
            dice_1[1] = ex2;
            dice_1[3] = ex4;
            dice_1[4] = ex1;
            dice_1[6] = ex3;
        }
        for(a=0; a<6; a++)
            if(dice_1[a] != dice_2[a])
                break;
        if(a == 7){
            printf("Yes\n");return 0;
        }
    }
    printf("No\n");
    return 0;
}