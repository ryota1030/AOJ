//
//  main.c
//  SpreadSheet
//
//  Created by x16026xx on 2018/05/27.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,j,r,c;
    int t[101][101];
    int sum;
    
    for(i=0; i<101; i++){
        for(j=0; j<101; j++){
            t[i][j]=0;
        }
    }
    
    scanf("%d %d",&r,&c);
    
    for(i=0; i<r; i++){
        sum = 0;
        for(j=0; j<c; j++){
            scanf("%d",&t[i][j]);
            sum += t[i][j];
        }
        t[i][c] = sum;
    }
    
    for(j=0; j<c+1; j++){
        sum = 0;
        for(i=0; i<r; i++){
            sum += t[i][j];
        }
        t[r][j] = sum;
    }
    
    for(i=0; i<r+1; i++){
        for(j=0; j<c+1; j++){
            if(j!= 0)printf(" ");
            printf("%d",t[i][j]);  //
        }
        printf("\n");
    }
    return 0;
}
