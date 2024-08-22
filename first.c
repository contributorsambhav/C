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
    printf("\nCurrent List:\n");
    if (node == NULL) {
        printf("List is empty.\n");
        return;
    }
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
        if (!newNode) {
            printf("Memory allocation failed.\n");
            return;
        }

        printf("\nEnter name: ");
        scanf("%49s", newNode->name);
        printf("Enter roll: ");
        scanf("%d", &newNode->roll);
        printf("Enter CGPI: ");
        scanf("%f", &newNode->CGPI);

        newNode->next = NULL;

        if (*header == NULL) {
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
    if (!newNode) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("\nEnter name: ");
    scanf("%49s", newNode->name);
    printf("Enter roll: ");
    scanf("%d", &newNode->roll);
    printf("Enter CGPI: ");
    scanf("%f", &newNode->CGPI);

    newNode->next = *header;
    *header = newNode;
}

void insertEnd(struct student **header) {
    struct student *newNode = (struct student*)malloc(sizeof(struct student));
    if (!newNode) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("\nEnter name: ");
    scanf("%49s", newNode->name);
    printf("Enter roll: ");
    scanf("%d", &newNode->roll);
    printf("Enter CGPI: ");
    scanf("%f", &newNode->CGPI);

    newNode->next = NULL;

    if (*header == NULL) {
        *header = newNode;
    } else {
        struct student *temp = *header;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insertAtPosition(struct student **header, int position) {
    struct student *newNode = (struct student*)malloc(sizeof(struct student));
    if (!newNode) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("\nEnter name: ");
    scanf("%49s", newNode->name);
    printf("Enter roll: ");
    scanf("%d", &newNode->roll);
    printf("Enter CGPI: ");
    scanf("%f", &newNode->CGPI);

    if (position == 1) {
        newNode->next = *header;
        *header = newNode;
    } else {
        struct student *temp = *header;
        for (int i = 1; i < position - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            printf("Position out of bounds. Inserting at the end.\n");
            newNode->next = NULL;
        } else {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
}

void deleteBeginning(struct student **header) {
    if (*header == NULL) {
        printf("List is empty.\n");
        return;
    }
    
    struct student *temp = *header;
    *header = (*header)->next;
    free(temp);
}

void deleteEnd(struct student **header) {
    if (*header == NULL) {
        printf("List is empty.\n");
        return;
    }

    if ((*header)->next == NULL) {
        free(*header);
        *header = NULL;
        return;
    }

    struct student *temp = *header;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void deleteAtPosition(struct student **header, int position) {
    if (*header == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct student *temp = *header;

    if (position == 1) {
        *header = (*header)->next;
        free(temp);
        return;
    }

    struct student *prev = NULL;
    for (int i = 1; i < position && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of bounds.\n");
    } else {
        prev->next = temp->next;
        free(temp);
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

void deleter(struct student **header) {
    char select;
    int position;

    printf("Enter where you want to delete:\n For Beginning (B)\n For a specific location (L)\n For end (E): ");
    scanf(" %c", &select);

    switch(select) {
        case 'B':
        case 'b':
            deleteBeginning(header);
            break;
        case 'L':
        case 'l':
            printf("Enter the position: ");
            scanf("%d", &position);
            deleteAtPosition(header, position);
            break;
        case 'E':
        case 'e':
            deleteEnd(header);
            break;
        default:
            printf("Invalid option. Please choose B, L, or E.\n");
            break;
    }
}

void prioritize(struct student **header) {
    int opn;

    while (1) {
        printf("Do you want to perform any operations? (1 for Yes, 0 for No): ");
        scanf("%d", &opn);

        if (opn == 1) {
            int select;
            printf("Enter 0 to insert or 1 to delete: ");
            scanf("%d", &select);

            if (select == 0) {
                verifier(header); 
            } else if (select == 1) {
                deleter(header); 
            } else {
                printf("Invalid option. Please choose 0 or 1.\n");
            }
            printList(*header);
        } else if (opn == 0) {
            printf("Thanks for using our application!\n");
            break;
        } else {
            printf("Invalid option. Please choose 1 for Yes or 0 for No.\n");
        }
    }
}

int main() {
    struct student *header = NULL;

    allocator(&header);
    printList(header);

    prioritize(&header);
    printList(header);

    return 0;
}
