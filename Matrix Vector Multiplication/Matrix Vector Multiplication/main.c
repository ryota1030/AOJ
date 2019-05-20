//
//  main.c
//  Matrix Vector Multiplication
//
//  Created by x16026xx on 2018/05/25.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a[101][101],b[101][101];
    int l,m,n,i,j,k;
    long long int c[101][101];
    
    scanf("%d %d %d", &l, &m, &n);
    
    for(i=0; i<l; i++){
        for(j=0; j<m; j++){
            scanf("%d",&a[i][j]);
        }
        scanf("\n");
    }
    
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d",&b[i][j]);
        }
        scanf("\n");
    }
    
    for(i=0; i<l; i++){
        for(j=0; j<n; j++){
            c[i][j] = 0;
            for(k=0; k<m; k++){
                c[i][j] += (a[i][k]*b[k][j]);
            }
            printf("%lld",c[i][j]);
            if(j<n-1)printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
