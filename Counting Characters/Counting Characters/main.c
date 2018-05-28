//
//  main.c
//  Counting Characters
//
//  Created by x16026xx on 2018/05/28.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int num,i;
    char ch;
    int count[26];
    char s[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m',
                    'n','o','p','q','r','s','t','u','v','w','x','y','z'};
    
    for(i=0;i<26;i++){  //カウントの初期化
        count[i]=0;
    }
    
    while(scanf("%c",&ch) != EOF){
        
        if(ch == EOF)break;
        
        if('A' <= ch && ch <= 'Z'){  //大文字を小文字に変換
            ch = (ch + 'a') - 'A';
        }
        
        if('a'<= ch && ch <= 'z'){  //小文字を変数に当てはめ、カウント
            num = ch - 'a';
            count[num]++;
            
        }
        
    }
    for(i=0; i<26; i++){
        printf("%c : %d\n",s[i],count[i]);  //全てのアルファベットが入った配列とそのカウント数の表示
    }
    return 0;
}
