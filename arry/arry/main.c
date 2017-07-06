//
//  main.c
//  arry
//
//  Created by 胡啸 on 2017/7/6.
//  Copyright © 2017年 胡啸. All rights reserved.
//

/*利用指针遍历数组
#include <stdio.h>

int main(){
    int arr[] = { 99, 15, 100, 888, 252 };
 
    int *p = arr;
    int *p = &arr[0];
 
    int len = sizeof(arr) / sizeof(int);  //求数组长度
    int i;
    for(i=0; i<len; i++){
        printf("%d  ", *(arr+i) );  //*(arr+i)等价于arr[i]
    }
    printf("\n");
    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    int arr[] = { 99, 15, 100, 888, 252 };
    int i, *p = arr, len = sizeof(arr) / sizeof(int);
    
    for(i=0; i<len; i++){
        printf("%d  ", *p++ );
    }
    printf("\n");
    return 0;
}
 */

/*最终理解
#include<stdio.h>

int main(void)
{
    int a[]={1,2,3,5};
    int *p=a;
    int c,d,e,f,g,g2;
    f=*(p++);    //先取第n个值再将指针加一
    g=*(p);      // 指向a[1]
    c=(*p)++;   //先取第n个值再将第n个值加一
    g2=*(p);    //指向a[2]
    d=*(++p);  //取第n+1个元素
    e=++(*p);  //取第n个数据并加一
    printf("c=%d d=%d e=%d f=%d g=%d g2=%d\n",c,d,e,f,g,g2);
}
 */

/*字符串
#include <stdio.h>
int main(){
    char str[] = "http://c.biancheng.net";
    int len = strlen(str), i;
    //直接输出字符串
    printf("%s\n", str);
    //每次输出一个字符
    for(i=0; i<len; i++){
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
 */
