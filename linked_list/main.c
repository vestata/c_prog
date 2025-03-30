#include "linked_list.h"
#include <stdio.h>

int main()
{
    struct LinkedList list;
    init_list(&list);

    list.add_head(&list, 10);
    list.add_head(&list, 20);
    list.add_head(&list, 30);

    printf("List after adding 30, 20, 10:\n");
    print_list(&list);

    list.remove_head(&list);
    printf("List after removing head:\n");
    print_list(&list);

    free_list(&list);
    return 0;
}
