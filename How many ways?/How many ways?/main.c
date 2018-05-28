//
//  main.c
//  How many ways?
//
//  Created by x16026xx on 2018/05/26.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i,j,k;
    int n,x,count;
    
    while(1){
        count=0;
        scanf("%d %d", &n, &x);
        if(n == 0 && x == 0)break;
        for(i=1; i<=n; i++){
            for(j=i+1; j<=n; j++){
                for(k=j+1; k<=n; k++){
                    if(i+j+k == x)count++;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
