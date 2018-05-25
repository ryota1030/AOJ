//
//  main.c
//  Print Test Cases
//
//  Created by x16026xx on 2018/05/21.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x,i=1;
    
    while(1){
        scanf("%d",&x);
        if(x==0){
            break;
        }
        printf("Case %d: %d\n",i,x);
        i++;
    }
    return 0;
}
