#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[50];
    int roll;
    float CGPI;
    struct student *next;  
};

void printList(struct student *node) {
    while (node != NULL) {
        printf("Name: %s, Roll: %d, CGPI: %f\n", node->name, node->roll, node->CGPI);
        node = node->next;
    }
}

void allocator(struct student **header) {
    int n, i;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        struct student *newNode = (struct student*)malloc(sizeof(struct student));

        printf("\nEnter name: ");
        scanf("%s", newNode->name);
        printf("Enter roll: ");
        scanf("%d", &newNode->roll);
        printf("Enter CGPI: ");
        scanf("%f", &newNode->CGPI);

        newNode->next = NULL;

        if (i == 0) {
            *header = newNode;
        } else {
            struct student *temp = *header;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
}

void deleteNode(struct student **header, int roll) {
    struct student *temp = *header, *prev = NULL;

    if (temp != NULL && temp->roll == roll) {
        *header = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->roll != roll) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Roll number %d not found.\n", roll);
        return;
    }

    prev->next = temp->next;
    free(temp);
}

void verifierDelete(struct student **header) {
    int roll;
    printf("Enter the roll number of the student you want to delete: ");
    scanf("%d", &roll);
    deleteNode(header, roll);
}

int main() {
    struct student *header = NULL;

    allocator(&header);
    printf("\nOriginal List:\n");
    printList(header);

    verifierDelete(&header);
    printf("\nUpdated List after deletion:\n");
    printList(header);

    return 0;
}
