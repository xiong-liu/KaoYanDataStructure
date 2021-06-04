//
// Created by Administrator on 2021/6/4.
//
#include <stdio.h>
#include <stdlib.h>
#include "DynamicArray.h"

void InitList(SeqList *List) {
    List->data = (ElementType *) malloc(sizeof(ElementType) * InitSize);
    for (int i = 0; i < InitSize; ++i) {
        List->data[i] = 0;
    }
    List->length = 0;
    List->MaxSize = InitSize;
}

void display(SeqList *List) {
    for (int i = 0; i < List->MaxSize; ++i) {
        printf("%d\n", List[i]);
    }
}