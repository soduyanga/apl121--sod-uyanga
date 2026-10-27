#include <stdio.h>

int main() { 
int guests , buuz, buuzper, fam1, fam2, fam3, day, dayguests, daybuuz, t;
double meat, flour, hours, factor, daymeat, dayflour;
do { 
printf("Зочдын тоо?\n");
scanf("%d",&guests);
printf("Нэг хүнд ногдох буузны тоо?\n");
scanf("%d",&buuzper);
if (guests<0||buuzper<0||buuzper>40) {
  printf("Буруу утга\n");} 
} while(guests<0||buuzper<0||buuzper>40);
fam1=guests*buuzper;
meat=(fam1*20.0)/1000.0;
flour=(fam1*15.0)/1000.0;
hours=(fam1*0.5)/60.0;
if (fam1<200) { 
   printf("Бага\n"); }
if(fam1<=600) { 
   printf("Дунд\n"); }
if(fam1>600) { 
   printf("Их\n");}
printf("Шаардлагатай мах:     %.1fкг\n",meat);
printf("Шаардлагатай гурил:   %.1fкг\n",flour);
printf("Бэлтгэх нийт хугацаа: %.1fцаг\n",hours);
    printf("\n=========================================\n");
    printf("| Өдөр   | Зочид    | Бууз     |\n");
    printf("=========================================\n");
    for (day = 1; day <= 5; day++) {
        if (day == 1)      { factor = 1.0; }
        else if (day == 2) { factor = 0.8; }
        else if (day == 3) { factor = 0.6; }
        else if (day == 4) { factor = 0.4; }
        else if (day == 5) { factor = 0.2; }
        dayguests = guests * factor;
        daybuuz = dayguests * buuzper;
        printf("| Шинийн %d | %-8d | %-8d |\n", day, dayguests, daybuuz);
    }
    printf("=========================================\n");
printf("2 дох айлын буузны тоо?");
scanf("%d",&fam2);
printf("3 дах айлын буузны тоо?");
scanf("%d",&fam3);
if (fam1<fam2) { 
   t=fam1;
   fam1=fam2;
   fam2=t; }
if (fam1<fam3) {
   t=fam1;
   fam1=fam3;
   fam3=t;}
if(fam2<fam3) {
   t=fam2;
   fam2=fam3;
   fam3=t; }
printf("3 айлын бууз эрэмбэлэгдсэн:\n");
printf("1.  %d бууз\n",fam1);
printf("2.  %d бууз\n",fam2);
printf("3.  %d бууз\n",fam3);
 return 0;
}
