//
//  main.c
//  Swapping Two Numbers
//
//  Created by x16026xx on 2018/05/21.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x,y,tmp;
    while(1){
        scanf("%d %d",&x, &y);
        if(x==0 && y==0){
            break;
        }
        if(x>y){
            tmp = x;
            x = y;
            y = tmp;
        }
        printf("%d %d\n",x,y);
    }
    return 0;
}
