//
//  main.c
//  Circle in a Rectangle
//
//  Created by x16026xx on 2018/05/21.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int W,H,x,y,r;
    scanf("%d %d %d %d %d",&W, &H, &x, &y, &r);
    
    if(x<r || x+r>W || y<r || y+r>H){
        printf("No\n");
    }else{
        printf("Yes\n");
    }
    return 0;
}
