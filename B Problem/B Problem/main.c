//
//  main.c
//  B Problem
//
//  Created by x16026xx on 2018/05/21.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,b,d,r;
    double f;
    scanf("%d %d",&a, &b);
    
    d = a/b;
    r = a%b;
    f = (double)a/b;
    
    printf("%d %d %lf\n",d, r, f);
    return 0;
}
