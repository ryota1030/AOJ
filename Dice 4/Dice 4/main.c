//
//  main.c
//  Dice 4
//
//  Created by x16026xx on 2018/05/31.
//  Copyright © 2018年 AIT. All rights reserved.
//


#include<stdio.h>
#include<stdlib.h>
    
int main(int argc, const char * argv[]){
    int i,j,k,ex1,ex2,ex3,ex4,n,a;
    int dice[101][7];
    int w;
        
    scanf("%d",&n);
        
    for(i = 1;i <= n;i++)
        for(j = 1;j <= 6;j++)
            scanf("%d",&dice[i][j]);
        
    for(i = 1;i <= n;i++){
        for(j = i + 1;j <= n;j++){
            for(k = 0;k < 10000;k++){
                w = rand() % 4;
                if(w == 0){
                    ex1 = dice[i][1];
                    ex2 = dice[i][2];
                    ex3 = dice[i][5];
                    ex4 = dice[i][6];
                    dice[i][1] = ex3;
                    dice[i][2] = ex1;
                    dice[i][5] = ex4;
                    dice[i][6] = ex2;
                }else if(w == 1){
                    ex1 = dice[i][1];
                    ex2 = dice[i][2];
                    ex3 = dice[i][5];
                    ex4 = dice[i][6];
                    dice[i][1] = ex2;
                    dice[i][2] = ex4;
                    dice[i][5] = ex1;
                    dice[i][6] = ex3;
                }else if(w == 2){
                    ex1 = dice[i][1];
                    ex2 = dice[i][3];
                    ex3 = dice[i][4];
                    ex4 = dice[i][6];
                    dice[i][1] = ex3;
                    dice[i][3] = ex1;
                    dice[i][4] = ex4;
                    dice[i][6] = ex2;
                }else if(w == 3){
                    ex1 = dice[i][1];
                    ex2 = dice[i][3];
                    ex3 = dice[i][4];
                    ex4 = dice[i][6];
                    dice[i][1] = ex2;
                    dice[i][3] = ex4;
                    dice[i][4] = ex1;
                    dice[i][6] = ex3;
                }
                for(a = 1;a <= 6;a++)
                    if(dice[i][a] != dice[j][a])
                        break;
                    if(a == 7){
                        printf("No\n");
                        return 0;
                    }
                }
            }
        }
        printf("Yes\n");
        return 0;
    }