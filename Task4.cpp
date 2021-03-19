#include <stdio.h> 
#include <conio.h> 
 
const int N = 16;
int main()
// Variant 8, group 110, Iryna Kibets
{     
 //Task 4  Заданий масивв що складаєтьчя з 16 елементів дійсного типу. Визначити індекси макс. і мін. еементів
 int mass[N]; 
 int i, min, max; 
 
 printf(" Vvedite massiv iz 16 elementov: \n"); 
 
  for (i=0; i<N; i++) 
   { printf(" Vvedite element[%d]: ", i);
     scanf("%d", &mass[i]); }
 
  
  min=mass[0]; 
  for(i=1; i<N; i++) 
   if(mass[i]<min) 
 
  max=mass[0]; 
  for(i=1; i<N; i++) 
   if (mass[i]>max) 
   { max=mass[i]; } 
  printf("\n Min element = %d.", min); 
  printf("\n Max element = %d.", max); 
 getch(); 
 return 0; 
}