//
//  main.c
//  Range
//
//  Created by x16026xx on 2018/05/21.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,b,c;
    scanf("%d %d %d",&a, &b ,&c);
    if(a < b && b < c){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
