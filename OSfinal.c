#include <stdio.h>
#include<conio.h>
int main() 
{
      int at[10], bt[10], temp[10];
      int i=0, min,n;
      printf("\nEnter the Total Number of Processes:\t");
      scanf("%d", &n); 
      while (i < n)
      {
      		printf("Process P%d\n",i);
            printf("Enter Arrival Time:\t");
            scanf("%d", &at[i]);
            printf("Enter Burst Time:\t");
            scanf("%d", &bt[i]); 
            temp[i] = bt[i];
            i++;
      }
}

//after entering the arrival and burst time of processes
//sorting burst time using selection sort
//reducing the value of burst time after each second
//displaying ghantt chart.
//caluculatng avg tat and avg wt.
