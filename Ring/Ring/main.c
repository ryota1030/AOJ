//
//  main.c
//  Ring
//
//  Created by x16026xx on 2018/05/28.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    char str1[101],str2[101],n[201];
 
    scanf("%s",str1);
    scanf("%s",str2);
    strcpy(n, str1);  //nにコピー
    strcat(n, str1);  //nに連結
    
    if(strstr(n, str2) != NULL){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    
    return 0;
}