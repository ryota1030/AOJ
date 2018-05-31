//
//  main.c
//  Distance 2
//
//  Created by x16026xx on 2018/05/31.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {

    int n,i;
    double x[100],y[100];
    double p1,p2,p22,p3,p33,p4;
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++) scanf("%lf",&x[i]);
    for(i=0; i<n; i++) scanf("%lf",&y[i]);
    
    p1=0;
    for(i=0; i<n; i++) p1 += fabs(x[i]-y[i]);
    
    p2=0;
    for(i=0; i<n; i++) p2 += pow(fabs(x[i]-y[i]),2);
    
    p3=0;
    for(i=0; i<n; i++) p3 += pow(fabs(x[i]-y[i]),3);
    
    p4=0;
    for(i=0; i<n; i++) {
        double a = fabs(x[i]-y[i]);
        if(a>p4) p4=a;
    }
    
    
    p22 = sqrt(p2);
    p33 = pow(p3, 1.0/3.0);

    
    printf("%lf\n%lf\n%lf\n%lf\n", p1, p22, p33 , p4);
    return 0;
}
