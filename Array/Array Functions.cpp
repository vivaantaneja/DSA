#include<iostream>
using namespace std;
class Array
{
public:
    int *A;
    int size;
    int length;
    Array()
    {
        size=10;
        length=0;
        A=new int[size];
    }
    Array(int s)
    {
        size=s;
        length=0;
        A=new int[size];
    }
    
    void display();
    void Append(int x);
    void Insert(int index, int x);
    void Delete(int index);
    int L_search(int x);
    void Swap(int *x,int *y);
    int B_search(int x);
    int Get(int index);
    void Set(int x,int index);
    void Max();
    void Min();
    int sum();
    float avg();
    void reverse1();
    void reverse2();
    void L_rotate(int k);
    void R_rotate(int k);
    void InsertSorted(int x);
    int isSorted();
    void PositiveNegative();
};
void Array :: display()
{
    for(int i=0;i<length;i++)
    {
        cout<<A[i]<<" ";
    }
}
void Array :: Append(int x)
{
    if(length<size)
    {
        A[length]=x;
        length++;
    }
    else
        cout<<"Invalid"<<endl;
}
void Array :: Insert(int index, int x)
{
    if(index<length)
    {
        int i;
        for(i=length;i>index;i--)
        {
            A[i]=A[i-1];
        }
        A[i]=x;
        length++;
    }
    else
        cout<<"Invalid"<<endl;
}
void Array :: Delete(int index)
{
    if(index<length && index>=0)
    {
        int i;
        for(i=index;i<length-1;i++)
        {
            A[i]=A[i+1];
        }
        length--;
    }
    else
        cout<<"Invalid"<<endl;
}
int Array :: L_search(int x)
{
    for(int i=0;i<length;i++)
    {
        if(A[i]==x)
        {
            swap(A[i], A[i-1]); //Swapping the searched element with previous element to reduce the search operations when                    searched again
            return i;
        }
            
    }
    return -1;
}
void Array::Swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int Array:: B_search(int x)
{
    int h,l,mid;
    l=0;
    h=length-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(x==A[mid])
        return mid;
        else if(x<A[mid])
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;
}

int Array::Get(int index)
{
    return A[index];
    
}

void Array ::Set(int x,int index)
{
    if(index>=0 && index<length)
    A[index]=x;
}

void Array::Max()
{
    int max=A[0];
    for(int i=0;i<length;i++)
    {
        if(A[i]>max)
            max=A[i];
    }
    cout<<max;
    
}
void Array::Min()
{
    int min=A[0];
    for(int i=0;i<length;i++)
    {
        if(A[i]<min)
            min=A[i];
    }
    cout<<min;
}
int Array::sum()
{
    int sum=0;
    for(int i=0;i<length;i++)
    {
        sum+=A[i];
    }
    return sum;
}
float Array::avg()
{
    int s=sum();
    return (float)s/length;
}

void Array :: reverse1()
{
    int i,j;
    for(i=0,j=length-1;i<j;i++,j--)
    {
        int temp;
        temp=A[j];
        A[j]=A[i];
        A[i]=temp;
    }
}

void Array :: reverse2()
{
    int *B;
    B=new int[size];
    int i,j;
    for(i=length-1,j=0;i>=0;i--,j++)
    {
        B[j]=A[i];
    }
    for(i=0;i<length;i++)
    {
        A[i]=B[i];
    }
}

void Array :: L_rotate(int k)
{
    while(k--)
    {
        int temp,i;
        temp=A[0];
        for(i=0;i<length-1;i++)
        {
            A[i]=A[i+1];
        }
        A[i]=temp;
    }
}

void Array :: R_rotate(int k)
{
    while(k--)
    {
        int temp,i;
        temp=A[length-1];
        for(i=length-1;i>0;i--)
        {
            A[i]=A[i-1];
        }
        A[i]=temp;
    }
}

void Array :: InsertSorted(int x)
{
    int i;
    for(i=length-1;A[i]>x;i--)
    {
        A[i+1]=A[i];
    }
    A[i+1]=x;
    length++;
}

int Array :: isSorted()
{
    for(int i=0;i<length-1;i++)
    {
        if(A[i]>A[i+1])
            return 0;
    }
    return 1;
}
void Array :: PositiveNegative()
{
    int i=0,j=length-1;
    while(i<j)
    {
        while(A[i]<0){i++;}
        while(A[j]>=0){j--;}
        if(i<j)
        {
            swap(A[i],A[j]);
        }
    }
}

int main()
{
    Array arr(10);
    cout<<"Enter length of array"<<endl;
    cin>>arr.length;
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<arr.length;i++)
    {
        cin>>arr.A[i];
    }
    arr.display();
    arr.Append(25);
    cout<<endl;
    arr.display();
    arr.Insert(4, 32);
    cout<<endl;
    arr.display();
    arr.Delete(7);
    cout<<endl;
    arr.display();
    arr.L_search(5);
    cout<<endl;
    arr.display();
    arr.B_search(5);
    cout<<endl;
    arr.display();
    arr.reverse1();
    cout<<endl;
    arr.display();
    arr.reverse2();
    cout<<endl;
    arr.display();
    arr.L_rotate(2);
    cout<<endl;
    arr.display();
    arr.R_rotate(1);
    cout<<endl;
    arr.display();
    arr.InsertSorted(12); //Enter a Sorted Array for this function
    cout<<endl;
    arr.display();
    cout<<endl;
    cout<<arr.isSorted();
   arr.PositiveNegative();
    cout<<endl;
    arr.display();
    return 0;
}
