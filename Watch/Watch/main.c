//
//  main.c
//  Watch
//
//  Created by x16026xx on 2018/05/21.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int sec;
    int h,m,s;
    scanf("%d",&sec);
    
    h = sec / 3600;
    m = (sec % 3600) / 60;
    s = sec % 60;
    
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
