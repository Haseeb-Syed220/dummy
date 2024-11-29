// // #include<iostream>
// // #include<iomanip>

// // using namespace std;

// // void bubbleSortFunction(int *x,int i,int n);

// // main()
// // {
// //     int i=0;
// //     int unsorted[]={21,43,55,23,65,5,24,7};
// //     int n=sizeof(unsorted)/sizeof(unsorted[0]);
// //     bubbleSortFunction(unsorted,i,n);
// //     for(int k=0;k<n;k++)
// //     {
// //         cout<<setw(4)<<unsorted[k];
// //     }
// //     return 0;
// // }

// // void bubbleSortFunction(int *x,int i,int n)
// // {
// //   if(i<=n)
// //   {
// //     if(n-i==0)
// //     {
// //         return;
// //     }
// //     for(int j=0;j<n-i-1;j++)
// //     {
// //         if(*(x+j)>*(x+j+1))
// //         {
// //             swap(*(x+j),*(x+j+1));
// //         }
// //     }
// //     bubbleSortFunction(x,i+1,n);
// //   }
// // }

#include<iostream>
#include<iomanip>

using namespace std;

void bubbleSortFunction(int *lolz,int i,int n);
void printPointer(int *rubaab,int n);

main()
{
    int arr[]={3,33,44,55,23,53,76,45,88};
    int i=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The unsorted array is: "<<endl;
    for(int k=0;k<n;k++)
    {
        cout<<setw(5)<<arr[k];
    }
    cout<<endl;
    bubbleSortFunction(arr,i,n);
    printPointer(arr,n);
    return 0;
}

void bubbleSortFunction(int *lolz,int i,int n)
{
    if(i<=n)
    {
        if(n-i==0)
        {
            return;
        }
        for(int j=0;j<n-i-1;j++)
        {
            if(*(lolz+j)>*(lolz+j+1))
            {
                swap(*(lolz+j),*(lolz+j+1));
            }
        }
        bubbleSortFunction(lolz,i+1,n);
    }
}

void printPointer(int *rubaab,int n)
{
    cout<<"The sorted array is: "<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<setw(5)<<*(rubaab+j);
    }
}

// #include<iostream>
// #include<iomanip>

// using namespace std;

// main()
// {
//     int *p=new int();
//     cout<<p;
// }