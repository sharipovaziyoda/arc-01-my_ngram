#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    char morning;
    int uppercase_letter = 0;
    int lowercase_letter = 0;
    printf("Type in the letters (press Enter to submit):\n");
  int letter_counts[26] = {0};
  int lower_counts[26] = {0};
    while ((morning = getchar()) != '\n') {
            if (isupper(morning)) {
                 uppercase_letter++;
                letter_counts[morning - 'A']++;
            } else {
              lowercase_letter++;
                lower_counts[morning - 'a']++;
            }
        }
    printf("Uppercase letters:\n");
    for (int i = 0; i < 26; i++) {
        if (letter_counts[i] > 0) {
            printf(" %c: %d\n", 'A' + i, letter_counts[i]);
        }
    }
    printf("Lowercase letters:\n");
    for (int i = 0; i < 26; i++) {
        if (lower_counts[i] > 0) {
            printf("%c: %d\n", 'a' + i, lower_counts[i]);
        }
    }
    printf("Total count of uppercase letters: %d\n Total count of lowercase letters: %d\n ", uppercase_letter, lowercase_letter);
    return 0;
}