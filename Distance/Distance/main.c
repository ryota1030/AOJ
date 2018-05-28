//
//  main.c
//  Distance
//
//  Created by x16026xx on 2018/05/29.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    double x1,y1,x2,y2;
    double x;
    
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    
    x = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    
    printf("%f\n",x);
    
    return 0;
}
