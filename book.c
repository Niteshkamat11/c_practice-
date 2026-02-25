#include <stdio.h>

int main() {
    char gsi_prefix[20], group_identifier[20];
    char publisher_code[20], item_num[20], check_digit[20];
    char book_name[100];

    printf("Enter the Bookname: ");
    fgets(book_name, sizeof(book_name), stdin);

    printf("Enter the ISBN: ");
    scanf("%[^-]-%[^-]-%[^-]-%[^-]-%s",
          gsi_prefix,
          group_identifier,
          publisher_code,
          item_num,
          check_digit);

    printf("\nGS1 prefix: %s\n", gsi_prefix);
    printf("Group Identifier: %s\n", group_identifier);
    printf("Publisher code: %s\n", publisher_code);
    printf("Item number: %s\n", item_num);
    printf("Check digit: %s\n", check_digit);

    return 0;
}

