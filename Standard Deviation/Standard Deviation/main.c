//
//  main.c
//  Standard Deviation
//
//  Created by x16026xx on 2018/05/29.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>
#include <math.h>


int main(int argc, const char * argv[]) {
    
    double a[1001];
    double ave=0, sum=0, x=0;
    int n,i;
    
    while(1){
        scanf("%d",&n);
        if(n==0)break;
        
        for(i=0; i<n; i++){
            scanf("%lf",&a[i]);
            sum += a[i];
        }
        ave = sum / n;
        
        for(i=0; i<n; i++){
            x += pow(ave - a[i], 2);
        }
        printf("%f\n",sqrt(x/n));
        sum=0;
        x=0;
    }
    return 0;
}
