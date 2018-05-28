//
//  main.c
//  Finding a Word
//
//  Created by x16026xx on 2018/05/28.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    char W[11],T[101];
    int count=0,i;
    
    scanf("%s",W);
    
    while(1){
        scanf("%s",T);
        if(strcmp("END_OF_TEXT",T) == 0)break;
        for(i=0; i<101; i++){
            if('A'<=T[i] && T[i]<='Z'){
                T[i] = T[i]+ 32;  //大文字アルファベット + 32 = 小文字アルファベット
            }
        }
        if(strcmp(W, T) == 0)count++;
    }
    printf("%d\n",count);
    return 0;
}
