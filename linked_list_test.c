#include "linked_list.h"
#include <stdio.h>

int main(int argc, char *args[]) {
    
    int i;
    int num_insert;
    int num_delete;
    int item;
    list *l = NULL;

    scanf("%d %d", &num_insert, &num_delete);
     
    for(i = 0; i < num_insert; i++) {
        scanf("%d", &item);
        list_insert(&l, item);
    }
	list_print(l);
    for(i = 0; i < num_delete; i++) {
        scanf("%d", &item);
        list_delete_item(&l, item);
    }

    list_print(l);

    return 0;
}
