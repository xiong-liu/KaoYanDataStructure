//
// Created by Administrator on 2021/6/4.
//
#include <stdio.h>
#include <stdlib.h>
#include "DynamicArray.h"

/**
 * 初始化动态数组的顺序表
 * @param List
 */
void InitList(SeqList *List) {
    List->data = (ElementType *) calloc(InitSize, sizeof(ElementType));
    List->length = 0;
    List->MaxSize = InitSize;
}

void display(SeqList *List) {
    for (int i = 0; i < List->MaxSize; ++i) {
        printf("%d\n", List->data[i]);
    }
}