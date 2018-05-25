//
//  main.c
//  Min, Max and Sum
//
//  Created by x16026xx on 2018/05/22.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int i,n,a;
    long int max=-1000000, min=1000000, sum=0;
    
    scanf("%d",&n);
    
    for(i=0; i<n; i++){
        scanf("%d",&a);
        if(max<a){
            max = a;
        }
        if(min>a){
            min = a;
        }
        sum += a;
    }
    printf("%ld %ld %ld\n",min,max,sum);
    return 0;
}
