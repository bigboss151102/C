#include<iostream>
#include<iomanip>
#include<stdlib.h>

using namespace std;
void BubbleSortGiamDan(int *&a, int n);
void BubbleSortTangDan(int *&a, int n);
void QuickSortGiamDan(int *&a, int left, int right);
void QuickSortTangDan(int *&a, int left, int right);
void SelectionSortGiamDan(int *&a, int n);
void SelectionSortTangDan(int *&a, int n);
void InsertionSortGiamDan(int *&a, int n);
void InsertionSortTangDan(int *&a, int n);
void HeapityTangDan(int *&a, int n, int i);
void HeapityGiamDan(int *&a, int n, int i);
void BuildHeap(int *&a,int n);
void HeapSortTangDan(int *&a, int n);
void HeapSortGiamDan(int *&a, int n);
void SellSortGiamDan(int *&a, int n, int divideBy);
void SellSortTangDan(int *&a, int n, int divideby);
int  GetMax(int *&a, int n);
void CountingSort(int *&a, int n, int div);
int  LinearSearch(int *&a, int n, int x);
int  BinarySearch(int *&a, int n, int x);
int InterpolationSearch(int *&a, int n, int x);
void RadixSort(int *&a, int n);
void NhapMang(int *&a, int n);
void XuatMang(int *a, int n);
void Swap(int *&a, int *&b);
int main()
{
    int *a;
    int n;
    cout<<"Moi ban nhap n:";
    cin>>n;
    NhapMang(a,n);
    cout<<"Mang sau khi nhap la:"<<endl;
    XuatMang(a,n);
    cout<<"Thuat toan bubblesort giam dan:"<<endl;
    BubbleSortGiamDan(a, n);
    XuatMang(a,n);
    cout<<"Thuat toan bubblesort tang dan:"<<endl;
    BubbleSortTangDan(a, n);
    XuatMang(a,n);
    cout<<"Thuat toan Quicksort giam dan:"<<endl;
    QuickSortGiamDan(a,0,n-1);
    XuatMang(a,n);
    cout<<"Thuat toan Quicksort tang dan:"<<endl;
    QuickSortTangDan(a,0,n-1);
    XuatMang(a,n);
    cout<<"SelectionSort tang dan:"<<endl;
    SelectionSortTangDan(a,n);
    XuatMang(a,n);
    cout<<"SelectionSort giam dan:"<<endl;
    SelectionSortGiamDan(a,n);  
    XuatMang(a,n);
    cout<<"InsertionSort tang dan:"<<endl;
    InsertionSortTangDan(a,n);
    XuatMang(a,n);
    cout<<"InsertionSort giam dan:"<<endl;
    InsertionSortGiamDan(a,n);
    XuatMang(a,n);
    cout<<"HeapSort tang dan:"<<endl;
    HeapSortTangDan(a,n);
    XuatMang(a,n);
    cout<<"HeapSort giam dan:"<<endl;
    HeapSortGiamDan(a,n);
    XuatMang(a,n);
    cout<<"SellSort tang dan:"<<endl;
    SellSortTangDan(a,n,2);
    XuatMang(a,n);
    cout<<"SellSort giam dan:"<<endl;
    SellSortGiamDan(a,n,2);
    XuatMang(a,n);
    cout<<"RadixSort:"<<endl;
    RadixSort(a,n);
    XuatMang(a,n);
    int x;
    cout<<"Ban muon tim kiem phan tu nao bang LinearSearch:";
    cin>>x;
    int kq=LinearSearch(a,n,x);
    if(kq==1)
    {
        cout<<"Khong tim thay "<<x<<" trong day !"<<endl;
    }else{
        cout<<"Tim thay "<<x<<" trong day !"<<endl;
    }
    int y;
    cout<<"Ban muon tim phan nao bang BinarySearch:";
    cin>>y;
    int kq2=BinarySearch(a,n,y);
    if(kq2==1)
    {
        cout<<"Tim thay "<<y<<" trong day !"<<endl;
    }else{
        cout<<"Khong tim thay "<<y<<" trong day !"<<endl;
    }
    int z;
    cout<<"Nhap vao gia tri can tim bang InterpolationSearch:";
    cin>>z;
    int kq3=InterpolationSearch(a,n,z);
    if(kq3 != -1)
    {
        cout<<"Tim thay "<<z<<" trong day"<<endl;
    }else{
        cout<<"Khong tim thay "<<z<<" trong day"<<endl;
    }
    cout<<kq3;
    return 0;
}
void NhapMang(int *&a, int n)
{
    srand(time(NULL));
    a= new int[n];
    for(int i=0;i<n; i++)
    {
        *(a+i)=rand()%101;
    }
}

void XuatMang(int *a, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<*(a+i)<<"\t";
    }
    cout<<endl;
}
void Swap(int *&a, int *&b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void BubbleSortGiamDan(int *&a, int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            if(*(a+j)>*((a+j)-1))
            {
                int *a1=(a+j);
                int *a2=((a+j)-1);
                Swap(a1,a2);             
            }
        }
    }

}
void BubbleSortTangDan(int *&a, int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            if(*(a+j)<*((a+j)-1))
            {
                int *a1=(a+j);
                int *a2=((a+j)-1);
                Swap(a1,a2);             
            }
        }
    }
}
void QuickSortTangDan(int *&a, int left, int right)
{
    int i, j, x;
    x=a[(left+right)/2];
    i=left;
    j=right;
    do
    {
        while (*(a+i)<x)      
        {
            i++;
        }
        while (*(a+j)>x)      
        {
            j--;
        }
        if (i<=j)
        {
            swap(*(a+i),*(a+j));
            i++;
            j--;
        }
    } while (i <= j);
    if (left<j)
    {
        QuickSortTangDan(a,left,j);
    }
    if(i<right)
    {
        QuickSortTangDan(a,i,right);
    }
}
void QuickSortGiamDan(int *&a, int left, int right)
{
    int i, j, x;
    x=a[(left+right)/2];
    i=left;
    j=right;
    do
    {
        while (*(a+i)>x)      
        {
            i++;
        }
        while (*(a+j)<x)      
        {
            j--;
        }
        if (i<=j)
        {
            swap(*(a+i),*(a+j));
            i++;
            j--;
        }
    } while (i <= j);
    if (left<j)
    {
        QuickSortGiamDan(a,left,j);
    }
    if(i<right)
    {
        QuickSortGiamDan(a,i,right);
    }
}

void SelectionSortTangDan(int *&a, int n)
{
    int min;
    for (int i=0; i<n-1; i++)
    {
        min=i;
        for (int j=i+1; j<n; j++)
        {
            if (*(a+j)<*(a+min))    
            {
                min=j;
            }
        }
        swap(*(a+i),*(a+min));
    }
}
void SelectionSortGiamDan(int *&a, int n)
{
    int max;
    for (int i=0; i<n-1; i++)
    {
        max=i;
        for (int j=i+1; j<n; j++)
        {
            if (*(a+j)>*(a+max))    
            {
                max=j;
            }
        }
        swap(a[i],a[max]);
    }
}
void InsertionSortGiamDan(int *&a, int n)
{
    int pos;    
    int x;
    for (int i = 1; i < n; i++)
    {
        x=*(a+i);
        pos=i-1;
        while ((pos >= 0) && *(a+pos) < x)  
        {
            *((a+pos)+1) = *(a+pos);
            pos--; 
        }
        *((a+pos)+1) = x;
    }
}
void InsertionSortTangDan(int *&a, int n)
{
    int pos;
    int x;
    for (int i = 1; i < n; i++)
    {
        x=*(a+i);
        pos=i-1;
        while ((pos >= 0) && *(a+pos) > x)  
        {
            *((a+pos)+1) = *(a+pos);
            pos--; 
        }
        *((a+pos)+1) = x;
    }
}
void HeapityTangDan(int *&a, int n, int i)
{
    while(i <= n/2 - 1)
    {
        int left = 2*i+1;
        int right = 2*i+2;
        int max= left;
        if(right<n && *(a+right) > *(a+max))
        {
            max=right;
        }
        if(*(a+i)<*(a+max))
        {
            swap(*(a+i),*(a+max));
        }
        i = max;
    }
}
void HeapityGiamDan(int *&a, int n, int i)
{
    while(i <= n/2 - 1)
    {
        int left = 2*i+1;
        int right = 2*i+2;
        int min= left;
        if(right<n && *(a+right) < *(a+min))
        {
            min=right;
        }
        if( *(a+i) > *(a+min))
        {
            swap(*(a+i),*(a+min));
        }
        i = min;
    }
}
void BuildHeapTangDan(int *&a,int n)
{
    for(int i=n/2-1; i>=0; i--)
    {
        HeapityTangDan(a,n,i);
    }
}
void BuildHeapGiamDan(int *&a,int n)
{
    for(int i=n/2-1; i>=0; i--)
    {
        HeapityGiamDan(a,n,i);
    }
}
void HeapSortTangDan(int *&a, int n)
{
    BuildHeapTangDan(a,n);
    for(int i=n-1;i >= 0; i--)
    {
        swap(*(a+0),*(a+i));
        HeapityTangDan(a,i,0);
    }
}
void HeapSortGiamDan(int *&a, int n)
{
    BuildHeapGiamDan(a,n);
    for(int i=n-1; i>=0; i--)
    {
        swap(*(a+0),*(a+i));
        HeapityGiamDan(a,i,0);
    }
}
void SellSortTangDan(int *&a, int n, int divideBy)
{
    int i,j,x, gap;
    for(gap = n/divideBy; gap>0;gap/=divideBy)
    {
        for (i = gap; i < n; i++)
        {
            x=*(a+i);
            j=i-gap;
            while (x<*(a+j) && (j>=0))        
            {
                *(a+(j+gap)) = *(a+j);
                j = j - gap;
            }
            *(a+(j+gap)) = x;
        }
    }
}
void SellSortGiamDan(int *&a, int n, int divideBy)
{
    int i, j, x, gap;
    for(gap = n/divideBy; gap>0; gap/=divideBy)
    {
        for(i=gap; i<n; i++)
        {
            x=*(a+i);
            j=i-gap;
            while (x > *(a+j) && (j>=0))
            {
                *(a+(j+gap)) = *(a+j);
                j = j-gap;
            }
            *(a+(j+gap)) = x;
        }
    }
}
int  GetMax(int *&a, int n)
{
    int max=*(a+0);
    for (int i = 0; i < n; i++)
    {
        if(*(a+i)>max)
        {
            max=*(a+i);
        }
    }
    return max;
    
}
void CountingSort(int *&a, int n, int div)
{
    int output[n];
    int count[10]={0};
    for (int i = 0; i < n; i++)
    {
        count[(*(a+i)/div) % 10 ]++;
    }
    for (int i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[(*(a+i)/div) % 10]-1] = *(a+i); 
        count[(*(a+i)/div) % 10]--;
    }
    for (int i = 0; i < n; i++)
    {
        *(a+i) = output[i];
    }
}
void RadixSort(int *&a, int n)
{
    int m=GetMax(a, n);
    for (int div = 1; m/div >0; div *= 10)
    {
        CountingSort(a,n,div);
    }
    
}

int LinearSearch(int *&a, int n, int x)
{
    int i=0;
    *(a+n)=x;
    while(*(a+i) != x)
    {
        i++;
    }
    if((i==n))
    {
        return 1;
    } else 
    {
        return -1;
    }
}
int  BinarySearch(int *&a, int n, int x)
{
    int left, right, mid;
    left=0;
    right= n -1;
    do
    {
        mid=(left+right)/2;
        if(*(a+mid) == x)
        {
            return 1;
        }else if (*(a+mid)<x)
        {   
            left = mid+1;
        }else
        {
            right = mid - 1;
        }
    } while (left <= right) ;
    return -1;
}
int InterpolationSearch(int *&a, int n, int x)
{
    int low=0;
    int hight = n-1;
    while(low <= hight && (x >= *(a+low)) && (x <=*(a+hight)))
    {
        if (low == hight)
        {
            if (*(a+low)==x)
            {
                return low;
            } else
            {
                return -1;
            }
        }
        int pos=low +(((double)(hight-low)/((*(a+hight)) - (*(a+low)))) * (x-(*(a+low))));
        if(*(a+pos) == x)
        {
            return pos;
        }
        if(*(a+pos) < x)
        {
            low = pos +1;
        }else{
            hight = pos - 1;
        }
    }
    return -1;
}
