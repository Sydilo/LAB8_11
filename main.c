#include <stdio.h>

int main() {
   char str[100];
   int i;

   printf("Введіть рядок і я вам переведу його у великі літери: ");
   scanf("%[^\n]", str);

   for(i = 0; str[i]; i++){
      if(str[i] >= 'a' && str[i] <= 'z')
         str[i] = str[i] - 32;
   }

   printf("Рядок з усіма великими літерами: %s", str);

   return 0;
}
