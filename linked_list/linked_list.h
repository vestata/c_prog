struct ListNode
{
    int val;
    struct ListNode* next;
};

struct LinkedList;

struct LinkedList
{
    struct ListNode* head;

    void (*add_head)(struct LinkedList*, int);
    void (*remove_head)(struct LinkedList*);
    void (*print)(struct LinkedList*);
    void (*free)(struct LinkedList*);
    void (*reverse)(struct LinkedList*);
};

void init_list(struct LinkedList* list);
void add_head_impl(struct LinkedList* list, int val);
void remove_head_impl(struct LinkedList* list);
void print_list_impl(struct LinkedList* list);
void free_list_impl(struct LinkedList* list);
void reverse_impl(struct LinkedList* list);
