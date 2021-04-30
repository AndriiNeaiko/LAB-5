#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void nav(int arr[10]) {
  int zero_counter = 0;
  printf("\nУтворений масив:\n");
  printf("{");
  for (int i=0; i<10; i++) {
    if (arr[i] == 0) {
      zero_counter++;
    }
    if (i == 9) {
     printf("%d}\n", arr[i]);
   }
   else {
     printf("%d, ", arr[i]);
   }
  }
  int max = -50, max_index=0;

  for (int i=0; i<10; i++) {
    if (abs(arr[i]) > max) {
      max = abs(arr[i]);
      max_index = i;
    }
  }
  int d = 1;
  if(arr[9] == max) {
    d = 0;
  }
  for (int i=max_index+1; i<10; i++) {
    d*= arr[i];
  }
  printf("\nКількість нульових елементів масиву: %d\n", zero_counter);
  printf("Максимальний за модулем елемент масиву: %d\n", max);
  printf("Добуток елементів масиву, розташованих після максимального за модулем елемента: %d", d);
}

int main() {
  int n, a;

  printf ("-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
  printf ("За домогою клавіатури - 1\n");
  printf("За допомогою генератора псевдовипадкових чисел - 2\n");
  printf ("Вийти з програми - 3\n");
  printf ("-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");

  while (1) {
    if (a == 0) {
     printf("\nВвести: ");
     scanf("%d", &n);
     a++;
   }
   else {
     printf("\n\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
     printf("Ви можете спробувати ще раз\n\n");
     printf ("За домогою клавіатури - 1\n");
     printf("За допомогою генератора псевдовипадкових чисел - 2\n");
     printf ("Вийти з програми - 3\n");
     printf("-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
     printf("Ввести: ");
     scanf("%d", &n);
   }
   if (n == 1) {
     int arr[10];
     printf("\nВведіть 10 чисел, які ввійдуть в масив:\n");
     for (int i=0; i<10; i++) {
       printf("Введіть %d значення масиву: ", i+1);
       scanf("%d", &arr[i]);
     }
     nav(arr);

   }
   else if (n==2) {
     int arr[10];
     const int Low = -100;
     const int High = 100;
     srand(time(0));

     for (int i=0; i<10; i++) {
       arr[i]=Low/2+rand()%High;
     }
     nav(arr);
   }
   else {
     break;
   }

}
}
