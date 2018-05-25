//
//  main.c
//  Structured Programing
//
//  Created by x16026xx on 2018/05/23.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int i,n,x;
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
        x=i;
        if(x%3==0){
            printf(" %d",i);
        }else if(x%10==3){
            printf(" %d",i);
        }else{
            while(1){
                x/=10;
                if(x==0)break;
                if(x%10==3){
                    printf(" %d",i);
                    break;
                }
            }
        }
    }
    printf("\n");
    return 0;
}
