#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    void PrintArray(int[],int);
    void PrintArray1(int[],int,int);
    void PrintPositiveNumbersInArray(int[],int);
    void PrintNegativeNumbersInArray(int[],int);
    void GetArrayInputBetweenRange(int,int,int);
    void PrintArrayReverse(int[],int);
    void PrintOddPoisition(int[],int);
    void PrintEvenPoisition(int[],int);
    void PrintArrayElementfromK(int[],int,int);
    void PrintArrayElementUptoK(int[],int,int);
    void PrinttheAlternateElementsinArray(int[],int,int);
    void PrintArrayWithFormat(int[],int);
    void SubractwithFirstIndex(int[],int);
    int PrintSumofArray(int[],int);
    void SumOfOddPositions(int[],int);
    int MeanOfArray(int[],int);
    void CountOfNonZeroElements(int[],int);
    void CountOfPositiveElements(int[],int);
    void CountOfNegativeElements(int[],int);
    void CountIsEqualPositiveandNegativeElements(int[],int);
    void MeanForNonZeroElements(int[],int);
    void SubractEachElementByMeanOfArray(int[],int);
    int OddNumberCountInArray(int[],int);
    int EvenNumberCountInArray(int[],int);
    void CountOfOddAndEvenInArray(int[],int);
    int IsPerfectSqure(int);
    void PerfectSqureArray(int[],int);
    int IsPrimeNumber(int);
    void PrintBooleanArray(int[],int);
    void PrintPrimeBooleanArray(int);
    void PrintPerfectNumberBooleanArray(int);
    int arr[10]={5,25,81,36,49,16,2,3,7,8,2};


     PrintPerfectNumberBooleanArray(10);



}

void PrintArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}

void PrintPositiveNumbersInArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            printf("%d \n",arr[i]);
        }
    }
}
void PrintNegativeNumbersInArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            printf("%d \n",arr[i]);
        }
    }
}

void GetArrayInputBetweenRange(int From,int To,int size)
{
    int arr[size];
    int i=0;
    while(i<size)
    {
        int number;
        printf("\nEnter the Number");
        scanf("%d",&number);
        if(number>=From && number<=To)
        {
            arr[i]=number;
        i++;
        }
        else
        {
            printf("Please Enter the Number Between %d and %d ",From,To);
        }
    }
    PrintArray(arr,size);
}

void PrintArrayReverse(int arr[],int size)
{

    for(int i=size-1;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
}


void PrintOddPoisition(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",arr[i]);
        }
    }
}

void PrintEvenPoisition(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",arr[i]);
        }
    }
}

void PrintArray1(int arr[],int size,int From)
{
    for(int i=From-1;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}

void PrintArrayElementfromK(int arr[],int size,int k)
{
    PrintArray1(arr,size,k);
}
void PrintArrayElementUptoK(int arr[],int size,int k)
{
    PrintArray(arr,k);
}

void PrinttheAlternateElementsinArray(int arr[],int size,int k)
{
    for(int i=k-1;i<size;i=i+2)
    {
        printf("%d ",arr[i]);

    }
}

void PrintArrayWithFormat(int arr[],int size)
{

    for(int i=0;i<size;i++)
    {
        printf("Index of Array : %d , Element : %d\n",i+1,arr[i]);
    }
}


void SubractwithFirstIndex(int arr[],int size)
{
    int firstnumber=arr[0];
    printf("%d\n",firstnumber);
    for(int i=1;i<size;i++)
    {
        printf("%d\n",arr[i]-firstnumber);
    }
}

int PrintSumofArray(int arr[],int size)
{

    int sum=0;
    int start=0;
    int end=size-1;
    while(start<end)
    {
        sum+=arr[start]+arr[end];
        start++;
        end--;
    }
    if(start==end)
    {
        sum+=arr[start];
    }
    return sum;
}

void SumOfEvenPositions(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i=i+2)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
}

void SumOfOddPositions(int arr[],int size)
{
    int sum=0;
    for(int i=1;i<size;i=i+2)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
}

int MeanOfArray(int arr[],int size)
{

    int sum=PrintSumofArray(arr,size);
    return sum/size;
}

void CountOfNonZeroElements(int arr[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=0)
        {
            count+=1;
        }
    }
    printf("%d",count);
}
void CountOfPositiveElements(int arr[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            count+=1;
        }
    }
    printf("%d",count);
}
void CountOfNegativeElements(int arr[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            count+=1;
        }
    }
    printf("%d",count);
}

void CountIsEqualPositiveandNegativeElements(int arr[],int size)
{
    int PositiveCount=0;
    int NegativeCount=0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            NegativeCount++;
        }
        else if(arr[i]>=0)
        {
            PositiveCount++;
        }
    }
    if(PositiveCount==NegativeCount)
    {
        printf("Same");
    }
    else
    {
        printf("Not Same");
    }
}

void MeanForNonZeroElements(int arr[],int size)
{
    int MeanSize=size;
    int sum=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            MeanSize--;
        }
        else
        {
            sum+=arr[i];
        }
    }
    int Mean=sum/MeanSize;
    printf("%d",Mean);
}



void SubractEachElementByMeanOfArray(int arr[],int size)
{
    int Mean=MeanOfArray(arr,size);
    for(int i=0;i<size;i++)
    {
        arr[i]=arr[i]-Mean;
    }
    PrintArray(arr,size);

}

int OddNumberCountInArray(int arr[],int size)
{
    int Count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
        {
            Count++;
        }
    }
    return Count;
}
int EvenNumberCountInArray(int arr[],int size)
{
    int Count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            Count++;
        }
    }
    return Count;
}

void CountOfOddAndEvenInArray(int arr[],int size)
{
    int oddcount=OddNumberCountInArray(arr,size);
    int EvenCount=EvenNumberCountInArray(arr,size);

    printf("Odd Count : %d \nEven Count : %d",oddcount,EvenCount);
}


int IsPerfectSqure(int Number)
{
    int Num;
    float Num1=sqrt((double)Number);
    Num=Num1;
    if(Num1==Num)
    {
        return 1;
    }
    return 0;
}


void PerfectSqureArray(int arr[],int size)
{
    int newarr[size];
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(IsPerfectSqure(arr[i])==1)
        {
            newarr[count]=arr[i];
            count++;
        }
    }

    if(count!=0)
    {
        PrintArray(newarr,count);
    }
    else
    {
        printf("No Perfect Squres in Given Array");
    }
}

int IsPrimeNumber(int Number)
{
    int Count=0;

    int Loop=Number/2;
    if(Number%2==0)
    {
        return 0;
    }
    else
    {
        for(int i=2;i<=Loop;i++)
        {
            if(Number%2==0)
            {
                return 0;
            }
        }
    }
    return 1;
}

void PrimeNumbersinArray(int arr[],int size)
{
    int newarr[size];
    int count=0;

    for(int i=0;i<size;i++)
    {
        if(IsPrimeNumber(arr[i])==1)
        {
            newarr[count]=arr[i];
            count++;
        }
    }
    if(count!=0)
    {
        PrintArray(newarr,count);
    }
    else
    {
        printf("No Prime Numbers in Given Array");
    }
}


void PrintBooleanArray(int arr[],int size)
{
    int newarr[size];
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
        {
            newarr[count]=0;
            count++;
        }
        else
        {
            newarr[count]=1;
            count++;
        }
    }
    PrintArray(newarr,count);
}


void PrintPrimeBooleanArray(int number)
{
    int arr[number];

    for(int i=0;i<number;i++)
    {
        if(IsPrimeNumber(i+1)==1)
        {
            arr[i]=1;
        }
        else
        {
            arr[i]=0;
        }
    }
    PrintArray(arr,number);
}

void PrintPerfectNumberBooleanArray(int number)
{
    int arr[number];

    for(int i=0;i<number;i++)
    {
        if(IsPerfectSqure(i+1)==1)
        {
            arr[i]=1;
        }
        else
        {
            arr[i]=0;
        }
    }
    PrintArray(arr,number);
}



