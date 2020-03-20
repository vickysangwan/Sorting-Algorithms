#include <iostream>
using namespace std;
void selection(int* a,int n)
{
     //Selection Sort in Ascending order
    //Space complexity is O(1) and Time complexity for Best ,Average and worst Case is O(n^2)
    int pos;
    for(int i=0;i<n-1;i++)
    {
        int small=INT_MAX;
        for(int j=i;j<n;j++)
        {
            if(a[j]<small)
            {
                small=a[j];
                pos=j;
            }
        }
        swap(a[pos],a[i]);
    }
}
void bubble(int* a,int n)
{
     //Bubble Sort in Ascending order
    //Space complexity is O(1) and Time complexity for Best case O(n) when array is already sorted
    //Average and worst Case is O(n^2)
    bool swapped;
    for(int i=0;i<n-1;i++)
    {
        swapped=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                swapped=true;
            }
        }
        //If no swapping is occurring than array is sorted
        if(swapped==false)
        {
            break;
        }
    }
}
void insertion(int* a,int n)
{
     //Insertion Sort in Ascending order
    //Space complexity is O(1) and Time complexity for Best case O(n)
    //Average and worst Case is O(n^2)
    for(int i=1;i<n;i++)
    {
        //Picking a number a placing it on its write place;
        int num=a[i];
        int j=i-1;
        while(j>=0 && a[j]>num)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=num;
    }
}
int main()
{
    int a[1000],n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter data in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    selection(a,n);
    bubble(a,n);
    insertion(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
    return 0;
}
