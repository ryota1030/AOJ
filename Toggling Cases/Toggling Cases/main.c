//
//  main.c
//  Toggling Cases
//
//  Created by x16026xx on 2018/05/28.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char ch;
    
    while(1){
        scanf("%c", &ch);
        
        if(ch == '\n')break;
        
        if('a'<= ch && ch <='z'){
            ch = (ch - 'a') + 'A';
        }else if('A'<= ch && ch <='Z'){
            ch = (ch - 'A') + 'a';
        }
        printf("%c",ch);
    }
    printf("\n");
    return 0;
}
