#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#define ITEM_TYPE int

typedef struct list {
    ITEM_TYPE item;
    struct list* next;
} list;

extern void list_insert(list **l, ITEM_TYPE item);
extern void list_delete_item(list **l, ITEM_TYPE item);
extern void list_delete(list *l);
extern void list_print(list *l);

#endif
