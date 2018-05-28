//
//  main.c
//  Official House
//
//  Created by x16026xx on 2018/05/26.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n,i;
    int b,f,r,p;
    int H[5][4][11];
    
    for(b=1; b<=4; b++){
        for(f=1; f<=3; f++){
            for(r=1; r<=10; r++){
                H[b][f][r] = 0;
            }
        }
    }
    
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d %d %d %d",&b, &f, &r, &p);
        H[b][f][r] += p;
    }
    
    for(b=1; b<=4; b++){
        for(f=1; f<=3; f++){
            for(r=1; r<=10; r++){
                printf(" %d",H[b][f][r]);
            }
            printf("\n");
        }
        if(b<4)printf("####################\n");
    }

    return 0;
}
