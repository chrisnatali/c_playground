/*
 * Define Functions for constructing and manipulating linked lists
 */

#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

void list_insert(list **l, ITEM_TYPE item) {
    /* insert at beginning */
    list *p = (list*) malloc(sizeof(list));
    p->item = item;
    p->next = *l;
    *l = p;
}

list* list_find(list *l, ITEM_TYPE item) {
    while(l != NULL) {
        if (l->item == item) {
            return l;
        } else {
			l = l->next;
		}
    }
    return NULL;
}
 
list* list_find_predecessor(list *l, ITEM_TYPE item) {
    while(l != NULL && l->next != NULL) {
        if ((l->next)->item == item) {
            return l;
        } else { 
			l = l -> next;
		}
    }
    return NULL;
}
        
void list_delete_item(list **l, ITEM_TYPE item) {
    /* find and delete item */
	list *p_item = list_find(*l, item);
	if (p_item != NULL) {
    	list *p_pred = list_find_predecessor(*l, item);
		if (p_pred == NULL) { 
			/* 
			 * item is in list, but there's no predecessor
			 * so it must be head.  Need to free head and 
			 * set it to the next item
			 */
			*l = p_item->next;
			free(p_item);
		}
		else {
			p_pred->next = p_item->next;
			free(p_item);
		}
    }
}

void list_delete(list *l) {
	/* client should set list to NULL after this */
    list *p;
    while (l != NULL) {
       p = l->next;
       free(l);
       l = p;
    }
}

void list_print(list *l) {
    list *p = l;
    while (p != NULL) {
        printf("%d\n", p->item);
        p = p->next;
    }
}
