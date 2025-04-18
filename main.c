// admin_search_main.c
#include <stdio.h>
#include "admin_search.h"

int main() {
    int choice;

    do {
        printf("\n===== Admin Menu =====\n");
        printf("1. Search Student by Digital ID\n");
        printf("2. Delete Student by Digital ID\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                searchStudentByID();
                break;
            case 2:
                deleteStudentByID();
                break;
            case 3:
                printf("?? Exiting program. Goodbye!\n");
                break;
            default:
                printf("?? Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
