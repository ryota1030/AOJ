//
//  main.c
//  Triangle
//
//  Created by x16026xx on 2018/05/29.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {

    double a,b,C;
    double S,L,h;
    
    scanf("%lf %lf %lf", &a, &b, &C);
    
    S = 0.5 * a * b * sin(C * M_PI/180);
    L = a + b + sqrt(a * a + b * b - 2 * a * b * cos(C * M_PI/180));
    h = b * sin(C * M_PI/180);
    
    printf("%f %f %f\n", S, L, h);
    return 0;
}
