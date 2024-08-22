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

void insertBeginning(struct student **header) {
    struct student *newNode = (struct student*)malloc(sizeof(struct student));

    printf("\nEnter name: ");
    scanf("%s", newNode->name);
    printf("Enter roll: ");
    scanf("%d", &newNode->roll);
    printf("Enter CGPI: ");
    scanf("%f", &newNode->CGPI);

    newNode->next = *header;
    *header = newNode;
}

void insertEnd(struct student **header) {
    struct student *newNode = (struct student*)malloc(sizeof(struct student));
    struct student *temp = *header;

    printf("\nEnter name: ");
    scanf("%s", newNode->name);
    printf("Enter roll: ");
    scanf("%d", &newNode->roll);
    printf("Enter CGPI: ");
    scanf("%f", &newNode->CGPI);

    newNode->next = NULL;

    if (*header == NULL) {
        *header = newNode;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insertAtPosition(struct student **header, int position) {
    struct student *newNode = (struct student*)malloc(sizeof(struct student));
    struct student *temp = *header;
    int i;

    printf("\nEnter name: ");
    scanf("%s", newNode->name);
    printf("Enter roll: ");
    scanf("%d", &newNode->roll);
    printf("Enter CGPI: ");
    scanf("%f", &newNode->CGPI);

    if (position == 1) {
        newNode->next = *header;
        *header = newNode;
    } else {
        for (i = 1; i < position - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL || temp->next == NULL) {
            printf("Position out of bounds. Inserting at the end.\n");
            newNode->next = NULL;
            if (temp != NULL) {
                temp->next = newNode;
            } else {
                *header = newNode;
            }
        } else {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
}

void verifier(struct student **header) {
    char select;
    int position;

    printf("Enter where you want to insert:\n For Beginning (B)\n For a specific location (L)\n For end (E): ");
    scanf(" %c", &select);

    switch(select) {
        case 'B':
        case 'b':
            insertBeginning(header);
            break;
        case 'L':
        case 'l':
            printf("Enter the position: ");
            scanf("%d", &position);
            insertAtPosition(header, position);
            break;
        case 'E':
        case 'e':
            insertEnd(header);
            break;
        default:
            printf("Invalid option. Please choose B, L, or E.\n");
            break;
    }
}

int main() {
    struct student *header = NULL;

    allocator(&header);
    printList(header);

    verifier(&header);
    printList(header);

    return 0;
}
