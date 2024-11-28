#include <stdio.h>

struct Book {
    char title[50], author[50];
    int year;
    float price;
};

void readBookInfo(struct Book *b) {
    printf("Enter book title: ");
    fgets(b->title, sizeof(b->title), stdin);
    printf("Enter author name: ");
    fgets(b->author, sizeof(b->author), stdin);
    printf("Enter publication year and price: ");
    scanf("%d %f", &b->year, &b->price);
    getchar(); 
}

void displayBookInfo(const struct Book *b) {
    printf("\nBook Information:\nTitle: %sAuthor: %sPublication Year: %d\nPrice: %.2f\n", b->title, b->author, b->year, b->price);
}

int main() {
    struct Book myBook;
    readBookInfo(&myBook);
    displayBookInfo(&myBook);
    return 0;
}
