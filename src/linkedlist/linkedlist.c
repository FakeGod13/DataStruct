#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    // 数据域
    int data;
    // 指针域
    struct node *next;
} node;

int main()
{
    // node *head = NULL;
    node *newNode = malloc(sizeof(node));
    newNode->data = 0;
    newNode->next = NULL;
    node * head = newNode;
    for (int i = 0; i < 5; i++)
    {
        node * temp = malloc(sizeof(node));
        scanf("%d", &temp->data);
        temp->next = NULL;

        newNode->next = temp;
        newNode = newNode->next;
    }

    newNode = head->next;
    while (newNode)
    {
        printf(" %d", newNode->data);
        newNode = newNode->next;
    }

    return 0;
}
