//
// Created by Administrator on 2021/6/4.
//

#ifndef DATASTRUCTURE_DYNAMICARRAY_H
#define DATASTRUCTURE_DYNAMICARRAY_H

#define InitSize 100

typedef int ElementType;

typedef struct {
    ElementType *data;
    int MaxSize, length;
} SeqList;


void InitList(SeqList *List);

void display(SeqList *List);

#endif //DATASTRUCTURE_DYNAMICARRAY_H