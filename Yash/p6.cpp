#include<stdio.h>
int getMaxRepeatingElement(int array[], int n) 
{
    int i, j, maxElement, count;
     int maxCount = 0;  
    for(i = 0; i< n; i++)   
    {
        count = 1;
        for(j = i+1; j < n; j++)  
        {
            if(array[j] == array[i])
            {
                count++;     
                if(count > maxCount)
                {
                    maxElement = array[j];
                }
            }
        }
    }
    return maxElement;
}
int main()
{
    int n;
    scanf("%d",&n);    
    int array[n];     
    for(int i=0;i<n;i++)  
    {
        scanf("%d",&array[i]);
    } 
    int maxElement = getMaxRepeatingElement(array, n);    
    printf("%d\n",maxElement);   
    return 0;
}
