//
//  main.c
//  How Many Divisors?
//
//  Created by x16026xx on 2018/05/21.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,b,c,n,i;
    
    scanf("%d %d %d",&a, &b, &c);
    
    for(i=a; i<=b; i++){
        if(c%i == 0){
            n++;
        }
    }
    printf("%d\n",n);
    return 0;
}
