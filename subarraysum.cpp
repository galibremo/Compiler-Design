#include<iostream>
using namespace std;
void subArraySum(int arr[],int n,int s)
{
    int sum=0,i,j;
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            sum=sum+arr[j];
            if(sum>s)
            {
                break;
            }
            else if(sum==s)
            {
                cout<<"Sum : "<<sum<<endl;

                cout<<i+1<<" & "<<j+1;
            }

        }
    }
}
int main()
{
    int N=5,S=12;
    int A[N]= {1,2,3,7,5};
    subArraySum(A,N,S);
}

