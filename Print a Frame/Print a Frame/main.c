//
//  main.c
//  Print a Frame
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
        for(i=1; i<=H; i++){
            for(j=1; j<=W; j++){
                if(j<W && i<H && j>1 && i>1){
                    printf(".");
                }else{
                    printf("#");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}