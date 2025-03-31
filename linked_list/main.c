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
    list.print(&list);

    printf("List after reverse:\n");
    list.reverse(&list);
    list.print(&list);

    list.remove_head(&list);
    printf("List after removing head:\n");
    list.print(&list);

    list.free(&list);
    return 0;
}
