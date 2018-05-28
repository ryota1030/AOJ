//
//  main.c
//  Sum of Numbers
//
//  Created by x16026xx on 2018/05/28.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i,sum;
    char x[1001];
    
    while(1){
        sum = 0;
        scanf("%s",x);
        if(x[0] == '0')break;
        for(i=0; x[i]!='\0'; i++){
            sum += (x[i]-'0');  //文字コードの48番('0')をひく.ex:1(49)-0(48)=1
        }
        printf("%d\n",sum);
    }
    return 0;
}
