//
//  main.c
//  Dice 2
//
//  Created by x16026xx on 2018/05/31.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

void E (int dice[6]){
    int t = dice[2];
    dice[2] = dice[0];
    dice[0] = dice[3];
    dice[3] = dice[5];
    dice[5] = t;
}

void S (int dice[6]){
    int t = dice[1];
    dice[1] = dice[0];
    dice[0] = dice[4];
    dice[4] = dice[5];
    dice[5] = t;
}

void R (int dice[6]){
    int t = dice[3];
    dice[3] = dice[1];
    dice[1] = dice[2];
    dice[2] = dice[4];
    dice[4] = t;
}


int main(int argc, const char * argv[]) {
    
    int dice[6];
    int i,j,n,x,y;
    
    for(i=0; i<6; i++){
        scanf("%d",&dice[i]);
    }
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d %d", &x,&y);
        for(j=0; j<4; j++){
            if(dice[1] == y)break;
            S(dice);
        }
        
        if(dice[1] != y){
            for(j=0; j<4; j++){
                if(dice[1] == y)break;
                R(dice);
            }
        }
        for(j=0; j<4; j++){
            if(dice[0] == x)break;
            E(dice);
        }
        printf("%d\n",dice[2]);
    }
    return 0;
}
