//
//  main.c
//  Print a Rectangle
//
//  Created by x16026xx on 2018/05/23.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int W,H,i,j;

    while(1){
        scanf("%d %d",&H ,&W);
        if(W==0 && H==0){
                break;
        }
        for(i=0; i<H; i++){
            for(j=0; j<W; j++){
                printf("#");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
