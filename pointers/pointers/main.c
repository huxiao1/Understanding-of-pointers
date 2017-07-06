//
//  main.c
//  pointers
//
//  Created by 胡啸 on 2017/7/6.
//  Copyright © 2017年 胡啸. All rights reserved.
//

/*输出地址
#include <stdio.h>

int main(){
    int a = 100;
    char str[20] = "c.biancheng.net";
    printf("%#X, %#X\n", &a, str);
    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    int a = 15;
    int *p = &a;
    //int *p;
    //p=&a;
    printf("%d, %d\n", a, *p);  //两种方式都可以输出a的值
    return 0;
}
 */

/*指针的赋值
#include <stdio.h>

int main(){
    int a = 15, b = 99, c = 222;
    int *p ;  //定义指针变量
    p=&a;
    *p = b;  //通过指针变量修改内存上的数据
    c = *p;  //通过指针变量获取内存上的数据
    printf("%d, %d, %d, %d\n", a, b, c, *p);
    return 0;
}
 */

#include <stdio.h>
int main(void)
{
    int x=1;
    int y=1;
    int  *px = &x, *py = &y;
    y = *px + 5;  //表示把x的内容加5并赋给y，*px+5相当于(*px)+5
    y = ++*px;  //px的内容加上1之后赋给y，++*px相当于++(*px)
    y = *px++;  //相当于y=(*px)++
    py = px;  //把一个指针的值赋给另一个指针
    printf("%d %d %d %d",x,y,*px,*py);
}
