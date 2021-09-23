#include <stdio.h>
#include <stdlib.h>

int main()
{
    int IsElementFound(int[],int,int);
    int FindTargetOccurMoreThanOnce(int[],int,int);
    void PrintOccurenceOfTargetValue(int[],int,int);
    void RemoveOccurenceOfK(int[],int,int);
    void AddElementInKthPosition(int[],int,int,int);
    int MinElementComparision(int[],int);
    void RemoveElementInArray(int[],int,int,int);
    int MinElementIndex(int[],int);
    int SecondMaxElementInArray(int[],int);
    int MissingElementInArray(int[],int,int);

    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    int Result=MissingElementInArray(arr);
    printf("%d",Result);
    printf("%d",Result);

}


int IsElementFound(int arr[],int size,int TargetValue)
{
    int Bool=0;
    for(int i=0;i<size;i++)
    {
        if(TargetValue==arr[i])
        {
            Bool=1;
            break;
        }
    }
    return Bool;
}

int IsPrintIndex(int arr[],int size,int TargetValue)
{
    int index=-1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==TargetValue)
        {
            index=i;
            break;
        }
    }
    return index;
}

int FindTargetOccurMoreThanOnce(int arr[],int size,int TargetValue)
{
    int TargetCount=0;
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==TargetValue)
        {
            count++;
            if(count>1)
            {
                TargetCount=1;
                break;
            }
        }
    }
    return TargetCount;
}

int PrintSecondOccurenceIndex(int arr[],int size,int TargetValue)
{
    int SecondIndexLocation=-1;
    int count=0;
    int Result=FindTargetOccurMoreThanOnce(arr,size,TargetValue);
    if(Result==1)
    {
        for(int i=0;i<size;i++)
        {
            if(arr[i]==TargetValue)
            {
                count++;
                if(count==2)
                {
                    SecondIndexLocation=i;
                    break;
                }
            }
        }
    }
    return SecondIndexLocation;
}


void PrintOccurenceOfTargetValue(int arr[],int size,int TargetValue)
{
    int Count=0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]==TargetValue)
        {
            Count++;
        }
    }
    printf("%d",Count);
}

int MinElementInArray(int arr[],int size)
{
    int min=arr[0];

    for(int i=1;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}


int MinElementComparision(int arr[],int size)
{
    int min=arr[0];
    int Comparision=0;;
    for(int i=1;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            Comparision++;
        }
    }
    return Comparision;

}

int MinElementIndex(int arr[],int size)
{
    int min=arr[0];
    int index=0;;
    for(int i=1;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            index=i;
        }
    }
    return index+1;

}

int MaxElementInArray(int arr[],int size)
{
    int Max=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>Max)
        {
            Max=arr[i];
        }
    }
    return Max;
}

int SecondMaxElementInArray(int arr[],int size)
{
    int Max=arr[0];
    int SecondMax=arr[0];
    for(int i=1;i<size;i++)
    {
        int value=arr[i];
        if(value>Max)
        {
            SecondMax=Max;
            Max=arr[i];
        }
        if(value<Max && value>SecondMax)
        {
            SecondMax=arr[i];
        }
    }
    return SecondMax;
}

void PrintArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}

void RemoveOccurenceOfK(int arr[],int size,int K)
{

    int count=0;
    for(int i=0;i<size;i++)
    {
      if(arr[i]==K)
      {
          arr[i]=0;
      }
    }
    PrintArray(arr,size);

}



void AddElementInKthPosition(int arr[],int size,int k,int x)
{
    int newarr[size+1];

    for(int i=0;i<k;i++)
    {
            newarr[i]=arr[i];
    }
    newarr[k]=x;
    for(int j=k+1;j<size+1;j++)
    {
        newarr[j]= arr[j-1];
    }

    PrintArray(newarr,size+1);
}


void RemoveElementInArray(int arr[],int size,int K,int x)
{
    int newarr[size-1];
    int reach=0;
    for(int i=0;i<size;i++)
    {
        if(i==K)
        {
            reach++;
        }
        if(reach==0)
        {
            newarr[i]=arr[i];
        }
        if(reach==1)
        {
            newarr[i-1]=arr[i];
        }
    }
    PrintArray(arr,size-1);
}


int MissingElementInArray(int arr[],int size,int N)
{
    int MissingElement=-1;

    if(IsElementFound(arr,size,1)==0)
    {
        for(int i=2;i<size;i++)
        {
            if(IsElementFound(arr,size,i)==0)
            {
                return i;
            }
        }
    }
    else
    {
        return 1;
    }

    return MissingElement;
}

