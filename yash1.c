#include<stdio.h>
int main() 
{
      int at[10], bt[10], temp[10];
      int i=0, min;
	  int counter = 0, time, n,ct;
      float wt = 0, tat = 0;
      float average_wt, average_tat;
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
      bt[9] = 9999;
      printf("\nSequence in which processes will execute :\n");
      for(time = 0; counter != n; time++)
      {
            min = 9;
            for(i = 0; i < n; i++)
            {
                  if(at[i] <= time && bt[i] < bt[min] && bt[i] > 0)
                  {
                        min = i;
                  }
            }
            printf("P%d , ",min);
            bt[min]--;
            if(bt[min] == 0)
            {
                  counter++;
                  ct = time + 1;
                  wt = wt + ct - at[min] - temp[min];
                  tat = tat + ct - at[min];
            }
      }
      printf("end\n");
      average_wt = wt / n; 
      average_tat = tat / n;
      printf("\n\n***************");
      printf("\nAverage Waiting Time:%f\n", average_wt);
      printf("Average Turnaround Time:%f\n", average_tat);
      return 0;
}
