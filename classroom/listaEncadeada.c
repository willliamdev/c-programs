#include <stdio.h>
#include <stdlib.h>

/*
 * Pra usar typedef adequadamente, tive que ler todas as respostas nessa threat:
 * https://stackoverflow.com/questions/588623/self-referential-struct-definition
 * e a documentação em: https://devdocs.io/c/language/typedef
 * e ainda não sei se é a melhor maneira mas na minha máquina funciona haha
 */

typedef struct node
{
    int info;
    struct node *nextNode;
} node; // Alias

node *insertAtStart(node *startArray, int newNumber)
{
    // usando malloc

    node *newNode = (node *)malloc(sizeof(node));

    newNode->info = newNumber;
    newNode->nextNode = startArray;

    return newNode;
};

node *insertAtEnd(node *startArray, int newNumber)
{
    node *currentNode = startArray;
    node *newNode = (node *)malloc(sizeof(node));

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

void printArray(node *startArray)
{
    node *currentNode = startArray;

    printf("======== Conteúdo da lista ========\n");
    while (currentNode != NULL)
    {
        printf("%d --> ", currentNode->info);
        currentNode = currentNode->nextNode;
    }

    printf("NULL\n");
}

node *search(node *startArray, int elementInfo)
{
    node *currentNode = startArray;

    while (currentNode != NULL)
    {
        if (currentNode->info == elementInfo)
        {
            return currentNode;
        }
        else
        {
            currentNode = currentNode->nextNode;
        }
    }

    return NULL;
}

node *removeElement(node *startArray, int elementInfo)
{

    node *previousNode = NULL;
    node *currentNode = startArray;

    while (currentNode != NULL && currentNode->info != elementInfo)
    {
        previousNode = currentNode;
        currentNode = currentNode->nextNode;
    }

    if (currentNode == NULL)
    {
        // chegou ao final
        return startArray;
    }
    //
    if (previousNode == NULL)
    {
        // primeiro da lista deu match
        startArray = currentNode->nextNode;
    }
    else
    {
        previousNode->nextNode = currentNode->nextNode;
    }

    free(currentNode);
    return startArray;
}

int main()
{

    node *firstNode = NULL;

    firstNode = insertAtStart(firstNode, 13);
    firstNode = insertAtStart(firstNode, 14);
    firstNode = insertAtEnd(firstNode, 15);
    firstNode = insertAtEnd(firstNode, 15);
    firstNode = insertAtEnd(firstNode, 16);
    printArray(firstNode);
    removeElement(firstNode, 15);
    printArray(firstNode);

    return 0;
}