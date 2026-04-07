#include <stdio.h>
#include <stdlib.h>
int main(void) {
 typedef struct node {
            int number; 
            struct node* next; 
        } node;
        node *list = NULL;
        for (int i = 0; i < 3; i++) {
            node *n = malloc(sizeof(node));
            if (n == NULL) {
                printf("Memory allocation failed!\n");
                return 1;
            }
            printf("What number? "); 
            scanf("%d", &n->number); 
            n->next = NULL; 
            n->next = list; 
            list = n; 
        }
        node* ptr = list; 
        while (ptr != NULL) {
            printf("%d\n", ptr->number); 
            ptr = ptr->next; 
        }
        for (node* ptr = list; ptr != NULL; ptr = ptr->next) {
            printf("%d\n", ptr->number); 
        }
        node* current = list;
}
