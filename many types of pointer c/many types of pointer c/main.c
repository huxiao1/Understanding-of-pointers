//
//  main.c
//  many types of pointer c
//
//  Created by 胡啸 on 2017/7/6.
//  Copyright © 2017年 胡啸. All rights reserved.
//

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
