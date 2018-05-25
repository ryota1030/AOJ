//
//  main.c
//  Reversing Numbers
//
//  Created by x16026xx on 2018/05/25.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i,n,a[100];
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=n-1; i>=0; i--){
        printf("%d", a[i]);
        if(i!=0){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
