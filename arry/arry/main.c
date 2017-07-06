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


