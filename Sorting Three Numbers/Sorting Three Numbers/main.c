//
//  main.c
//  Sorting Three Numbers
//
//  Created by x16026xx on 2018/05/21.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x,y,z,tmp;
    scanf("%d %d %d",&x, &y, &z);
    
    if(x > y){
        tmp = x;
        x = y;
        y = tmp;
    }
    if(y > z){
        tmp = y;
        y = z;
        z = tmp;
    }
    if(x > y){
        tmp = x;
        x = y;
        y = tmp;
    }
    printf("%d %d %d\n",x, y, z);
    return 0;
}
