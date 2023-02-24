#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    // 数据域
    int data;
    // 指针域
    // 向后的指针
    struct node *next;
    // 向前的指针
    struct node *pre;
} node;

int main()
{
    node *head = NULL;

    node *newNode = malloc(sizeof(node));
    newNode->data = 0;
    newNode->next = NULL;
    newNode->pre = NULL;

    head = newNode;

    for (int i = 0; i < 5; i++)
    {
        node *temp = malloc(sizeof(node));
        scanf("%d", &temp->data);
        temp->next = NULL;
        temp->pre = NULL;

        newNode->next = temp;
        temp->pre = newNode;

        newNode = newNode->next;
    }

    newNode = head->next;
    while (newNode)
    {
        printf("node is %d. ", newNode->data);
        if(newNode->next)
            printf("node->next is %d. ", newNode->next->data);
        else
            printf("node->next is NUll. ");
        printf("node->pre is %d. \n", newNode->pre->data);
        newNode = newNode->next;
    }

    return 0;
}
