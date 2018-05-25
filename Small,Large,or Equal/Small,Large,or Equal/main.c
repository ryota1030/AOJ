//
//  main.c
//  Small,Large,or Equal
//
//  Created by x16026xx on 2018/05/21.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,b;
    scanf("%d %d",&a, &b);
    
    if(a>b){
        printf("a > b\n");
    }else if(a<b){
        printf("a < b\n");
    }else{
        printf("a == b\n");
    }
    return 0;
}
