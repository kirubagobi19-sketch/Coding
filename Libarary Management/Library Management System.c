#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

// a. Structure definition for Book
struct Book {
    int bookID;
    char title[100];
    char author[100];
    int quantity;
};

// Global array and counter to store books
struct Book library[MAX_BOOKS];
int count = 0;

// b. Function implementations

// 1. Add a new book
void addBook() {
    if (count >= MAX_BOOKS) {
        printf("\nLibrary inventory is full!\n");
        return;
    }

    struct Book newBook;

    printf("\nEnter Book ID: ");
    scanf("%d", &newBook.bookID);

    // Check if Book ID already exists
    for (int i = 0; i < count; i++) {
        if (library[i].bookID == newBook.bookID) {
            printf("Error: Book with ID %d already exists.\n", newBook.bookID);
            return;
        }
    }

    getchar(); // Clear buffer newline
    printf("Enter Title: ");
    fgets(newBook.title, sizeof(newBook.title), stdin);
    newBook.title[strcspn(newBook.title, "\n")] = '\0'; // Remove trailing newline

    printf("Enter Author: ");
    fgets(newBook.author, sizeof(newBook.author), stdin);
    newBook.author[strcspn(newBook.author, "\n")] = '\0'; // Remove trailing newline

    printf("Enter Quantity: ");
    scanf("%d", &newBook.quantity);

    library[count] = newBook;
    count++;

    printf("Book added successfully!\n");
}

// 2. Update the quantity of a book using Book ID
void updateQuantity() {
    int id, newQty, found = 0;

    if (count == 0) {
        printf("\nLibrary inventory is empty.\n");
        return;
    }

    printf("\nEnter Book ID to update quantity: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (library[i].bookID == id) {
            printf("Current quantity for '%s': %d\n", library[i].title, library[i].quantity);
            printf("Enter new quantity: ");
            scanf("%d", &newQty);
            
            library[i].quantity = newQty;
            printf("Quantity updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book with ID %d not found.\n", id);
    }
}

// 3. Search a book using Book ID
void searchBook() {
    int id, found = 0;

    if (count == 0) {
        printf("\nLibrary inventory is empty.\n");
        return;
    }

    printf("\nEnter Book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (library[i].bookID == id) {
            printf("\n--- Book Details ---\n");
            printf("Book ID  : %d\n", library[i].bookID);
            printf("Title    : %s\n", library[i].title);
            printf("Author   : %s\n", library[i].author);
            printf("Quantity : %d\n", library[i].quantity);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book with ID %d not found.\n", id);
    }
}

// 4. Delete a book record
void deleteBook() {
    int id, found = 0;

    if (count == 0) {
        printf("\nLibrary inventory is empty.\n");
        return;
    }

    printf("\nEnter Book ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (library[i].bookID == id) {
            // Shift elements to the left to overwrite the deleted book
            for (int j = i; j < count - 1; j++) {
                library[j] = library[j + 1];
            }
            count--;
            printf("Book record deleted successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book with ID %d not found.\n", id);
    }
}

// 5. Display all book records
void displayBooks() {
    if (count == 0) {
        printf("\nNo books available in the inventory.\n");
        return;
    }

    printf("\n%-10s %-30s %-25s %-10s\n", "Book ID", "Title", "Author", "Quantity");
    printf("-----------------------------------------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%-10d %-30s %-25s %-10d\n", library[i].bookID, library[i].title, library[i].author, library[i].quantity);
    }
}

// c. Main function with menu-driven interface
int main() {
    int choice;

    while (1) {
        printf("\n=== LIBRARY MANAGEMENT SYSTEM ===\n");
        printf("1. Add a New Book\n");
        printf("2. Update Quantity of a Book\n");
        printf("3. Search Book by ID\n");
        printf("4. Delete a Book Record\n");
        printf("5. Display All Books\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                updateQuantity();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                deleteBook();
                break;
            case 5:
                displayBooks();
                break;
            case 6:
                printf("\nExiting program... Goodbye!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please select a valid option (1-6).\n");
        }
    }

    return 0;
}