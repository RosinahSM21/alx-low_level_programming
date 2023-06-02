0x12. C - Singly linked lists

Tests
* Tests: This directory is being used for testing.

Header File 📁
* lists.h: eader file contains all types and functions created for the project's definitions and prototypes.
Type/File              Prototype
* struct list_s         •       char *str
* unsigned int len
* struct list_s *next
typedef list_t  struct list_s
0-print_list.c  size_t print_list(const list_t *h);
1-list_len.c    size_t list_len(const list_t *h);
2-add_node.c    list_t *add_node(list_t **head, const char *str);
3-add_node_end.c        list_t *add_node_end(list_t **head, const char *str);
4-free_list.c   void free_list(list_t *head)


Tasks to complete
* 0. Print list
* 1. List length* 3. Add node at the end
* 2. Add node
* 4. Free list
* 5. The Hare and the Tortoise

