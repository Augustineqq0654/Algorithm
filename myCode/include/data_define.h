#ifndef __DATA_DEFINE_H_
#define __DATA_DEFINE_H_

#define MAX1(x, y)  x > y ? x : y   // 合格
#define MAX2(x, y)  (x) > (y) ? (x) : (y)   // 中等
#define MAX3(x, y)  ((x) > (y) ? (x) : (y)) // 良好
#define MAX4(x, y)({    \
    int _x = x;         \
    int _y = y;         \
    _x > _y ? _x : _y;  \
})
#define MAX5(type, x, y)({  \
    type _x = x;            \
    type _y = y;            \
    _x > _y ? _x : _y;      \
})
#define MAX6(x, y)({        \
    typeof(x) _x = (x);       \
    typeof(y) _y = (y);       \
    _x > _y ? _x : _y;      \
})

typedef int elementType;

typedef struct{
    elementType *data;      // 存储元素
    int size;       // 容量大小
    int length;     // 已存储大小
}sequence_table_t;

typedef struct Node{
    elementType element;
    struct Node *next;
}node_struct_t;

#endif
