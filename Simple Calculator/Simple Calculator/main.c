//
//  main.c
//  Simple Calculator
//
//  Created by x16026xx on 2018/05/21.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,b;
    char op;
    
    while(op != '?'){
        scanf("%d %c %d",&a, &op, &b);
        if(op == '+'){
            printf("%d\n", a+b);
        }else if(op == '-'){
             printf("%d\n", a-b);
        }else if(op == '*'){
             printf("%d\n", a*b);
        }else if(op == '/'){
             printf("%d\n", a/b);
        }
    }
    return 0;
}
