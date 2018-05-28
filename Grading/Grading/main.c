//
//  main.c
//  Grading
//
//  Created by x16026xx on 2018/05/26.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int m,f,r;
    int sum = 0;
    
    while(1){
        scanf("%d %d %d",&m, &f, &r);
        if(m == -1 && f == -1 && r == -1){
            break;
        }
        if(m == -1 || f ==-1){
            printf("F\n");
        }else{
            sum = m + f;
            if(sum >= 80) {
                printf("A\n");
            }else if(65 <= sum && sum < 80){
                printf("B\n");
            }else if(50 <= sum && sum < 65){
                printf("C\n");
            }else if(30 <= sum && sum < 50){
                if(r >= 50){
                    printf("C\n");
                }else{
                printf("D\n");
                }
            }else if(sum < 30){
                printf("F\n");
            }
            
        }
    }
    return 0;
}
