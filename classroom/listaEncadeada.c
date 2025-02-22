#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *nextNode;
};

struct node *insertAtStart(struct node *startArray, int newNumber)
{
    // usando malloc

    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->info = newNumber;
    newNode->nextNode = startArray;

    return newNode;
};

struct node *insertAtEnd(struct node *startArray, int newNumber)
{
    struct node *currentNode = startArray;
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    // se a lista não estiver vazia
    if (currentNode != NULL)
    {
        // ou seja currentNode == startArray
        // mas em algum momento ele vai ser NULL
        // Pq a lista começa vazia!! e se tem valor

        // PERCORREMOS:
        //  enquanto o existir um próximo, ou seja:
        while (currentNode->nextNode != NULL)
        {
            // Nó atual passa a ser o próximo
            currentNode = currentNode->nextNode;
        }

        // quando não houver mais um proximo nó
        newNode->info = newNumber;
        newNode->nextNode = currentNode->nextNode;
        currentNode->nextNode = newNode;
    }
    else
    {
        // se tiver vazia
        newNode->info = newNumber;
        newNode->nextNode = startArray;
        startArray = newNode;
    }

    return startArray;
}

void printArray(struct node *startArray)
{
    struct node *currentNode = startArray;

    printf("======== Conteúdo da lista ========\n");
    while (currentNode != NULL)
    {
        printf("%d --> ", currentNode->info);
        currentNode = currentNode->nextNode;
    }

    printf("NULL\n");
}

int main()
{

    struct node *firstNode = NULL;

    firstNode = insertAtStart(firstNode, 13);
    firstNode = insertAtStart(firstNode, 14);
    firstNode = insertAtEnd(firstNode, 15);
    firstNode = insertAtEnd(firstNode, 16);
    printArray(firstNode);

    return 0;
}