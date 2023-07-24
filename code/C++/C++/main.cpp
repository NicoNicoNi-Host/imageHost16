

//#include<stdio.h>
//#include<math.h>
//#include<time.h>
//#include<stdlib.h>
//#include<string.h>
//#include "stdafx.h"
//#include "stdafx.h"
#include<iostream>
using namespace std;
//#include<fstream>
//#include<string>
//#include<iomanip>
//#define swap(a,b){a=a^b;b=a^b;a=a^b;}//定义数字交换的宏

//#include<stdio.h>
char *str_chr(const char *str, int c){

    return NULL;
}
/*
    编写如下函数，若字符串str中含有字符c（若含有多个，以先出现的为准），、
    则返回指向该字符的指针，否则返回NULL。
*/



char *str_chr( char *str, int c)
{
    char *p = NULL;
    
    while (c == *str) {
        p = str;
        str++;
    }
    return (p);
}

// int factorial (int n){
//     if (n==0 || n==1){
//         return 1;
//     }
// else
//     return n*factorial(n-1);
// }





int main(void)
{


    char str[100];
    char c;
    
    printf("请输入字符串：");    scanf("%s", str);
    
    getchar();                   // 清除缓存
    
    printf("请输入要查找的字符：");    scanf("%c", &c);
    
    printf("\n返回的指针地址是：%p。\n", str_chr(str, c));
    
    return (0);
}


