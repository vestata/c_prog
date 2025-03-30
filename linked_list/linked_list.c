#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

void init_list(struct LinkedList* list)
{
    list->head = NULL;

    list->add_head = add_head_impl;
    list->remove_head = remove_head_impl;
}

void add_head_impl(struct LinkedList* list, int value)
{
    struct ListNode* new = malloc(sizeof(struct ListNode*));
    new->val = value;
    new->next = list->head;
    list->head = new;
}

struct ListNode* remove_head_impl(struct LinkedList* list)
{
    if (list->head)
    {
        struct ListNode* tmp = list->head;
        list->head = list->head->next;
    }
    return tmp;
}

void print_list(struct LinkedList* list)
{
    struct ListNode* cur = list->head;
    for (; cur;)
    {
        printf("%d\t", cur->val);
        cur = cur->next;
    }
    printf("\n");
}

void free_list(struct LinkedList* list)
{
    for (; list->head;)
    {
        struct ListNode* tmp = list->head;
        list->head = list->head->next;
        free(tmp);
    }
}
