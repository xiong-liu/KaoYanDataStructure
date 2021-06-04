//
// Created by Administrator on 2021/6/4.
//

#ifndef DATASTRUCTURE_DYNAMICARRAY_H
#define DATASTRUCTURE_DYNAMICARRAY_H

#define InitSize 10

typedef int ElementType;

typedef struct {
    int *data;
    int MaxSize, length;
} SeqList;


void InitList(SeqList *List);

void display(SeqList *List);

#endif //DATASTRUCTURE_DYNAMICARRAY_H