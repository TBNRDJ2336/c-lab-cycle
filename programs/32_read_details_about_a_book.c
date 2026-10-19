#include <stdio.h>
struct Book {
    char title[50];
    char author[50];
    float price;
    int pages;
};
int main() {
    struct Book b;
    printf("Title: ");
    scanf(" %[^\n]", b.title);
    printf("Author: ");
    scanf(" %[^\n]", b.author);
    printf("Price: ");
    scanf("%f", &b.price);
    printf("Pages: ");
    scanf("%d", &b.pages);
    printf("\nTitle: %s\nAuthor: %s\nPrice: %.2f\nPages: %d\n",
           b.title, b.author, b.price, b.pages);
    return 0;
}
