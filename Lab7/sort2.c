#include <stdio.h>
#include <string.h>
void sort();
int compare();

char str[5][50], temp[50];
int i, j;

int main() {
   
   printf("Enter 5 names:\n");

   // Getting strings input
   for (i = 0; i < 5; ++i) {
      fgets(str[i], sizeof(str[i]), stdin);
   }

   sort(); // storing strings

   printf("\nIn lexicographical order: \n");
   for (int i = 0; i < 5; ++i) {
      fputs(str[i], stdout);
   }
   return 0;
}

void sort() {
   for (i = 0; i < 5; ++i) {
      for (j = i + 1; j < 5; ++j) {

         // swapping strings
         if (compare() > 0) {
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
         }
      }
   }
}

int compare() {
   return strcmp(str[i], str[j]);
}