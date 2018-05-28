//
//  main.c
//  Card Game
//
//  Created by x16026xx on 2018/05/28.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {

    char a[101],b[101];
    int n,i;
    int x=0,y=0;

    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%s %s", a, b);
        if(strcmp(a,b) == 0) x++, y++;
        if(strcmp(a,b) > 0) x+=3;
        if(strcmp(a,b) < 0) y+=3;
    }
    
    printf("%d %d\n",x,y);
    return 0;
}
