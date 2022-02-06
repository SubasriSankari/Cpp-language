#include<stdio.h>
#include<math.h>
int isEven(int num)
{
    if(!(num&1))
     return 1;
     return 0;
}
int isPrime(int num)
{
   for(int i=1; i<=(ceil(sqrt(num))); i++)
   {
       if((num%i)==0)
        return 0;
        
   }
   return 1;
}
int main()
{
    int num;
    FILE *f1, *f2, *f3, *f4;
    f1=fopen("read.txt", "r");
    f2=fopen("odd.txt", "w");
    f3=fopen("even.txt", "w");
    f4=fopen("prime.txt", "w");
    if(f1==NULL || f2==NULL || f3==NULL || f4==NULL)
    {
        printf("Error in opening files\n");
       
    }
    while(fscanf(f1, "%d", &num)!=-1)
    {
        if(!(isEven))
        {
            fprintf(f2, "%d ", num);
        }
        else if((isEven))
        {
            fprintf(f3, "%d ", num);

        }
        else if(isPrime)
        {
            fprintf(f4, "%d ", num);
        }

    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    fclose(f4);
    return 0;
}