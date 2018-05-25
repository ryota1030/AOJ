//
//  main.c
//  Circle
//
//  Created by x16026xx on 2018/05/21.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    double r;
    double a,b;
    scanf("%lf",&r);
    
    a = M_PI*r*r;
    b = 2*M_PI*r;
    
    printf("%f %f\n",a,b);
    return 0;
}
