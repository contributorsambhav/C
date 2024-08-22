#include <stdio.h>

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

int main() {
    struct student n1, n2, n3;

    printf("\n Enter name: ");
    scanf("%s", n1.name);  
    printf("\n Enter roll: ");
    scanf("%d", &n1.roll);
    printf("\n Enter CGPI: ");
    scanf("%f", &n1.CGPI);

    printf("\n Enter name: ");
    scanf("%s", n2.name);  
    printf("\n Enter roll: ");
    scanf("%d", &n2.roll);
    printf("\n Enter CGPI: ");
    scanf("%f", &n2.CGPI);

    printf("\n Enter name: ");
    scanf("%s", n3.name);  
    printf("\n Enter roll: ");
    scanf("%d", &n3.roll);
    printf("\n Enter CGPI: ");
    scanf("%f", &n3.CGPI);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    printList(&n1);  // Calling printList to display the student list

    return 0;
}
