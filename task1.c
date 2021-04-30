#include <stdio.h>

int main() {
  int n, a;

  printf ("-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
  printf ("Запустити програму введіть 1\n");
  printf ("Вийти з програми введіть 2\n");
  printf ("-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");

  while (1) {
    if (a == 0) {
     printf("\nВвести: ");
     scanf("%d", &n);
     a++;
   }
   else {
     printf("\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
     printf("Ви можете спробувати ще раз - 1 \nВийти з програми - 2\n");
     printf("-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
     printf("Ввести: ");
     scanf("%d", &n);
   }
   if (n == 1) {
     int arr[10];
     printf("\nВведіть 10 чисел, які мають ввійти в масив:\n");
     for (int i=0; i<10; i++) {
       printf("Введіть %d значення масиву: ", i+1);
       scanf("%d", &arr[i]);
     }

     printf("\nУтворений масив:\n");
     printf("{");
     for (int i=0; i<10; i++) {
       if (i==9) {
         printf("%d}\n", arr[i]);
       }
       else {
         printf("%d, ", arr[i]);
       }
     }
     int min = arr[0], max = arr[0], min_index = 0, max_index = 0;

     for (int i=0; i<10; i++) {
       if (arr[i] < min) {
         min = arr[i];
         min_index = i;
       }
       if (arr[i] > max) {
         max = arr[i];
         max_index = i;
       }
     }
     printf("\nМаксимальний елемент масиву: %d\n", max);
     printf("Мінімальний елемент масиву: %d\n", min);
     printf("\nМасив з видаленими елементами, які розташовані між мінімальним та максимальними елементами масиву:\n");
     if (min_index < max_index) {
       printf("{");
       for (int i=0; i <= min_index; i++){
         if (i == 9) {
           printf("%d}\n", arr[i]);
         }
         else {
           printf("%d, ", arr[i]);
         }
       }
       for (int i=max_index; i<10; i++) {
         if (i == 9) {
           printf("%d}\n", arr[i]);
         }
         else {
           printf("%d, ", arr[i]);
         }
       }
     }
     else if (max_index < min_index) {
       printf("{");
       for (int i=0; i <= max_index; i++){
         if (i == 9) {
           printf("%d}\n", arr[i]);
         }
         else {
           printf("%d, ", arr[i]);
         }
       }
       for (int i=min_index; i<10; i++) {
         if (i == 9) {
           printf("%d}\n", arr[i]);
         }
         else {
           printf("%d, ", arr[i]);
         }
       }
     }
     else {
       printf("Неможливо вивести елементи");
     }

   }
   else {
     break;
   }

}
}
