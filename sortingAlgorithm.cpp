#include <bits/stdc++.h>
using namespace std;
//input3
int inp3_pertition2(int brr[],int lb, int ub)
{
    int pivot=brr[(lb+ub)/2];
    int start=lb;
    int End=ub;
    while(start<End)
    {
        while(brr[start]>=pivot && start<End)
        {
            start=start+1;
        }
        while(brr[End]<pivot)
        {
            End=End-1;
        }
        if(start<End)
        {
            swap(brr[start],brr[End]);
        }
    }
    brr[lb]=brr[End];
    brr[End]=pivot;
    return End;
}
double inp3_Quick_sort2(int brr[],int lb,int ub)
{
    clock_t t1=clock();
    if(lb<ub)
    {
        int q=inp3_pertition2(brr,lb,ub);
        inp3_Quick_sort2(brr,lb,q-1);
        inp3_Quick_sort2(brr,q+1,ub);

    }
    clock_t t2=clock();
    double t=(double)(t2-t1)/CLOCKS_PER_SEC;
    return t;
}
int inp3_pertition(int brr[],int lb, int ub)
{
    int pivot=brr[(lb+ub)/2];
    int start=lb;
    int End=ub;
    while(start<End)
    {
        while(brr[start]<=pivot && start<End)
        {
            start=start+1;
        }
        while(brr[End]>pivot)
        {
            End=End-1;
        }
        if(start<End)
        {
            swap(brr[start],brr[End]);
        }
    }
    brr[lb]=brr[End];
    brr[End]=pivot;
    return End;
}

double inp3_Quick_sort(int brr[],int lb,int ub)
{
    clock_t t1=clock();
    if(lb<=ub)
    {
        int q=inp3_pertition(brr,lb,ub);
        inp3_Quick_sort(brr,lb,q-1);
        inp3_Quick_sort(brr,q+1,ub);

    }
    clock_t t2=clock();
    double t=(double)(t2-t1)/CLOCKS_PER_SEC;
    return t;
}
void inp3_Merge2(int brr[],int lo,int mid,int hi)
{
    int temp[100000], k = 1, i = lo, j = mid+1 ;
    while(i<=mid&&j<=hi)
    {
        if(brr[i]>brr[j]) temp[k++] = brr[i++] ;
        else temp[k++] = brr[j++] ;
    }
    while(i<=mid) temp[k++] = brr[i++] ;
    while(j<=hi) temp[k++] = brr[j++] ;
    for(i=lo,k=1; i<=hi; i++,k++)
        brr[i] = temp[k] ;

}

double inp3_merge_sort2(int brr[],int lo,int hi)
{

    clock_t t1=clock();
    if(lo<hi)
    {
        int mid = (lo+hi)/2 ;
        inp3_merge_sort2(brr,lo,mid);
        inp3_merge_sort2(brr,mid+1,hi);
        inp3_Merge2(brr,lo,mid,hi);
    }
    clock_t t2=clock();
    double t=(double)(t2-t1)/CLOCKS_PER_SEC;
    return t;
}

void inp3_Merge(int brr[],int lo,int mid,int hi)
{

    int temp[100000], k = 1, i = lo, j = mid+1 ;
    while(i<=mid&&j<=hi)
    {
        if(brr[i]<brr[j]) temp[k++] = brr[i++] ;
        else temp[k++] = brr[j++] ;
    }
    while(i<=mid) temp[k++] = brr[i++] ;
    while(j<=hi) temp[k++] = brr[j++] ;
    for(i=lo,k=1; i<=hi; i++,k++)
        brr[i] = temp[k] ;

}
double inp3_merge_sort(int brr[],int lo,int hi)
{

    clock_t t1=clock();
    if(lo<hi)
    {
        int mid = (lo+hi)/2 ;
        inp3_merge_sort(brr,lo,mid);
        inp3_merge_sort(brr,mid+1,hi);
        inp3_Merge(brr,lo,mid,hi);

    }
    clock_t t2=clock();
    double t=(double)(t2-t1)/CLOCKS_PER_SEC;
    return t;

}

int bubble_sort_inp3D(int brr[],int n)
{
    clock_t t1=clock();
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            if(brr[j]<brr[j+1]) swap(brr[j],brr[j+1]);

        }
    }
    clock_t t2=clock();
    clock_t t=(t2-t1)/CLOCKS_PER_SEC;
    return t;
}

int bubble_sort_inp3A(int brr[],int n)
{
    clock_t t1=clock();
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            if(brr[j]>brr[j+1]) swap(brr[j],brr[j+1]);

        }
    }
    clock_t t2=clock();
    clock_t t=(t2-t1)/CLOCKS_PER_SEC;
    return t;
}

//input2
int inp2_pertition2(int brr[],int lb, int ub)
{
    int pivot=brr[(lb+ub)/2];
    int start=lb;
    int End=ub;
    while(start<End)
    {
        while(brr[start]>=pivot && start<End)
        {
            start=start+1;
        }
        while(brr[End]<pivot)
        {
            End=End-1;
        }
        if(start<End)
        {
            swap(brr[start],brr[End]);
        }
    }
    brr[lb]=brr[End];
    brr[End]=pivot;
    return End;
}
double inp2_Quick_sort2(int brr[],int lb,int ub)
{
    clock_t t1=clock();
    if(lb<ub)
    {
        int q=inp2_pertition2(brr,lb,ub);
        inp2_Quick_sort2(brr,lb,q-1);
        inp2_Quick_sort2(brr,q+1,ub);

    }
    clock_t t2=clock();
    double t=(double)(t2-t1)/CLOCKS_PER_SEC;
    return t;
}
int inp2_pertition(int brr[],int lb, int ub)
{
    int pivot=brr[(lb+ub)/2];
    int start=lb;
    int End=ub;
    while(start<End)
    {
        while(brr[start]<=pivot && start<End)
        {
            start=start+1;
        }
        while(brr[End]>pivot)
        {
            End=End-1;
        }
        if(start<End)
        {
            swap(brr[start],brr[End]);
        }
    }
    brr[lb]=brr[End];
    brr[End]=pivot;
    return End;
}

double inp2_Quick_sort(int brr[],int lb,int ub)
{
    clock_t t1=clock();
    if(lb<=ub)
    {
        int q=inp2_pertition(brr,lb,ub);
        inp2_Quick_sort(brr,lb,q-1);
        inp2_Quick_sort(brr,q+1,ub);

    }
    clock_t t2=clock();
    double t=(double)(t2-t1)/CLOCKS_PER_SEC;
    return t;
}

void inp2_Merge2(int brr[],int lo,int mid,int hi)
{
    int temp[100000], k = 1, i = lo, j = mid+1 ;
    while(i<=mid&&j<=hi)
    {
        if(brr[i]>brr[j]) temp[k++] = brr[i++] ;
        else temp[k++] = brr[j++] ;
    }
    while(i<=mid) temp[k++] = brr[i++] ;
    while(j<=hi) temp[k++] = brr[j++] ;
    for(i=lo,k=1; i<=hi; i++,k++)
        brr[i] = temp[k] ;

}

double inp2_merge_sort2(int brr[],int lo,int hi)
{

    clock_t t1=clock();
    if(lo<hi)
    {
        int mid = (lo+hi)/2 ;
        inp2_merge_sort2(brr,lo,mid);
        inp2_merge_sort2(brr,mid+1,hi);
        inp2_Merge2(brr,lo,mid,hi);
    }
    clock_t t2=clock();
    double t=(double)(t2-t1)/CLOCKS_PER_SEC;
    return t;
}

void inp2_Merge(int brr[],int lo,int mid,int hi)
{

    int temp[100000], k = 1, i = lo, j = mid+1 ;
    while(i<=mid&&j<=hi)
    {
        if(brr[i]<brr[j]) temp[k++] = brr[i++] ;
        else temp[k++] = brr[j++] ;
    }
    while(i<=mid) temp[k++] = brr[i++] ;
    while(j<=hi) temp[k++] = brr[j++] ;
    for(i=lo,k=1; i<=hi; i++,k++)
        brr[i] = temp[k] ;

}
double inp2_merge_sort(int brr[],int lo,int hi)
{

    clock_t t1=clock();
    if(lo<hi)
    {
        int mid = (lo+hi)/2 ;
        inp2_merge_sort(brr,lo,mid);
        inp2_merge_sort(brr,mid+1,hi);
        inp2_Merge(brr,lo,mid,hi);

    }
    clock_t t2=clock();
    double t=(double)(t2-t1)/CLOCKS_PER_SEC;
    return t;

}

int bubble_sort_inp2D(int brr[],int n)
{
    clock_t t1=clock();
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            if(brr[j]<brr[j+1]) swap(brr[j],brr[j+1]);

        }
    }
    clock_t t2=clock();
    clock_t t=(t2-t1)/CLOCKS_PER_SEC;
    return t;
}

int bubble_sort_inp2A(int brr[],int n)
{
    clock_t t1=clock();
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            if(brr[j]>brr[j+1]) swap(brr[j],brr[j+1]);

        }
    }
    clock_t t2=clock();
    clock_t t=(t2-t1)/CLOCKS_PER_SEC;
    return t;
}
//input1
int pertition2(int arr[],int lb, int ub)
{
    int pivot=arr[lb];
    int start=lb;
    int End=ub;
    while(start<End)
    {
        while(arr[start]>=pivot && start<End)
        {
            start=start+1;
        }
        while(arr[End]<pivot)
        {
            End=End-1;
        }
        if(start<End)
        {
            swap(arr[start],arr[End]);
        }
    }
    arr[lb]=arr[End];
    arr[End]=pivot;
    return End;
}
double Quick_sort2(int arr[],int lb,int ub)
{
    clock_t t1=clock();
    if(lb<ub)
    {
        int q=pertition2(arr,lb,ub);
        Quick_sort2(arr,lb,q-1);
        Quick_sort2(arr,q+1,ub);

    }
    clock_t t2=clock();
    double t=(double)(t2-t1)/CLOCKS_PER_SEC;
    return t;
}
int pertition(int arr[],int lb, int ub)
{
    int pivot=arr[lb];
    int start=lb;
    int End=ub;
    while(start<End)
    {
        while(arr[start]<=pivot && start<End)
        {
            start=start+1;
        }
        while(arr[End]>pivot)
        {
            End=End-1;
        }
        if(start<End)
        {
            swap(arr[start],arr[End]);
        }
    }
    arr[lb]=arr[End];
    arr[End]=pivot;
    return End;
}

double Quick_sort(int arr[],int lb,int ub)
{
    clock_t t1=clock();
    if(lb<ub)
    {
        int q=pertition(arr,lb,ub);
        Quick_sort(arr,lb,q-1);
        Quick_sort(arr,q+1,ub);

    }
    clock_t t2=clock();
    double t=(double)(t2-t1)/CLOCKS_PER_SEC;
    return t;
}

void Merge2(int arr[],int lo,int mid,int hi)
{
    int temp[100000], k = 1, i = lo, j = mid+1 ;
    while(i<=mid&&j<=hi)
    {
        if(arr[i]>arr[j]) temp[k++] = arr[i++] ;
        else temp[k++] = arr[j++] ;
    }
    while(i<=mid) temp[k++] = arr[i++] ;
    while(j<=hi) temp[k++] = arr[j++] ;
    for(i=lo,k=1; i<=hi; i++,k++)
        arr[i] = temp[k] ;

}

double merge_sort2(int arr[],int lo,int hi)
{

    clock_t t1=clock();
    if(lo<hi)
    {
        int mid = (lo+hi)/2 ;
        merge_sort2(arr,lo,mid);
        merge_sort2(arr,mid+1,hi);
        Merge2(arr,lo,mid,hi);
    }
    clock_t t2=clock();
    double t=(double)(t2-t1)/CLOCKS_PER_SEC;
    return t;
}

void Merge(int arr[],int lo,int mid,int hi)
{

    int temp[100000], k = 1, i = lo, j = mid+1 ;
    while(i<=mid&&j<=hi)
    {
        if(arr[i]<arr[j]) temp[k++] = arr[i++] ;
        else temp[k++] = arr[j++] ;
    }
    while(i<=mid) temp[k++] = arr[i++] ;
    while(j<=hi) temp[k++] = arr[j++] ;
    for(i=lo,k=1; i<=hi; i++,k++)
        arr[i] = temp[k] ;

}
double merge_sort(int arr[],int lo,int hi)
{

    clock_t t1=clock();
    if(lo<hi)
    {
        int mid = (lo+hi)/2 ;
        merge_sort(arr,lo,mid);
        merge_sort(arr,mid+1,hi);
        Merge(arr,lo,mid,hi);

    }
    clock_t t2=clock();
    double t=(double)(t2-t1)/CLOCKS_PER_SEC;
    return t;

}

int bubble_sortD(int arr[],int n)
{
    clock_t t1=clock();
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            if(arr[j]<arr[j+1]) swap(arr[j],arr[j+1]);

        }
    }
    clock_t t2=clock();
    clock_t t=(t2-t1)/CLOCKS_PER_SEC;
    return t;
}

int bubble_sort(int arr[],int n)
{
    clock_t t1=clock();
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);

        }
    }
    clock_t t2=clock();
    clock_t t=(t2-t1)/CLOCKS_PER_SEC;
    return t;
}


int main()
{
    int n, arr[100000+5];
    freopen("input1.txt","r",stdin);
    freopen("outputB1A.txt","w",stdout);
    cin >> n ;
    for(int i=1; i<=n; i++) cin >> arr[i];

    int t1=bubble_sort(arr,n);
    for(int i=1; i<=n; i++) cout <<  arr[i]<<endl ;

    int t2=bubble_sortD(arr,n);
    freopen("outputB1D.txt", "w",stdout);
    for(int i=1; i<=n; i++) cout <<  arr[i]<<endl ;

    double t3=merge_sort(arr,1,n);
    freopen("outputM1A.txt", "w",stdout);
    for(int i=1; i<=n; i++) cout << arr[i] << endl ;

    double t4=merge_sort2(arr,1,n);
    freopen("outputM1D.txt", "w",stdout);
    for(int i=1; i<=n; i++) cout << arr[i] << endl ;

    freopen("input1.txt","r",stdin);
    freopen("outputQ1A.txt","w",stdout);
    cin >> n ;
    for(int i=1; i<=n; i++) cin >> arr[i];
    double t5=Quick_sort(arr,1,n);
    for(int i=1; i<=n; i++) cout << arr[i]<<endl ;

    freopen("input1.txt","r",stdin);
    freopen("outputQ1D.txt","w",stdout);
    cin >> n ;
    for(int i=1; i<=n; i++) cin >> arr[i];
    double t6=Quick_sort2(arr,1,n);
    for(int i=1; i<=n; i++) cout << arr[i]<<endl ;

    int n2, brr[100000+5];
    freopen("input2.txt","r",stdin);
    freopen("outputB2A.txt","w",stdout);
    cin >> n2 ;
    for(int i=1; i<=n2; i++) cin >> brr[i];

    int t7=bubble_sort_inp2A(brr,n2);
    for(int i=1; i<=n2; i++) cout <<  brr[i]<<endl ;

    int t8=bubble_sort_inp2D(brr,n2);
    freopen("outputB2D.txt", "w",stdout);
    for(int i=1; i<=n2; i++) cout <<  brr[i]<<endl ;

    double t9=inp2_merge_sort(brr,1,n2);
    freopen("outputM2A.txt", "w",stdout);
    for(int i=1; i<=n2; i++) cout << brr[i] << endl ;

    double t10=inp2_merge_sort2(brr,1,n2);
    freopen("outputM2D.txt", "w",stdout);
    for(int i=1; i<=n2; i++) cout << brr[i] << endl ;

    freopen("input2.txt","r",stdin);
    freopen("outputQ2A.txt","w",stdout);
    cin >> n2 ;
    for(int i=1; i<=n2; i++) cin >> brr[i];
    double t11=inp2_Quick_sort(brr,1,n2);
    for(int i=1; i<=n2; i++) cout << brr[i]<<endl ;

    freopen("input2.txt","r",stdin);
    freopen("outputQ2D.txt","w",stdout);
    cin >> n2 ;
    for(int i=1; i<=n2; i++) cin >> brr[i];
    double t12=inp2_Quick_sort2(brr,1,n2);
    for(int i=1; i<=n2; i++) cout << brr[i]<<endl ;

    int n3, crr[100000+5];
    freopen("input3.txt","r",stdin);
    freopen("outputB3A.txt","w",stdout);
    cin >> n3 ;
    for(int i=1; i<=n3; i++) cin >> crr[i];

    int t13=bubble_sort_inp3A(crr,n3);
    for(int i=1; i<=n3; i++) cout <<  crr[i]<<endl ;

    int t14=bubble_sort_inp3D(crr,n3);
    freopen("outputB3D.txt", "w",stdout);
    for(int i=1; i<=n3; i++) cout <<  crr[i]<<endl ;

    double t15=inp3_merge_sort(crr,1,n3);
    freopen("outputM3A.txt", "w",stdout);
    for(int i=1; i<=n3; i++) cout << crr[i] << endl ;
    double t16=inp3_merge_sort2(crr,1,n3);
    freopen("outputM3D.txt", "w",stdout);
    for(int i=1; i<=n3; i++) cout << crr[i] << endl ;

    freopen("input3.txt","r",stdin);
    freopen("outputQ3A.txt","w",stdout);
    cin >> n3 ;
    for(int i=1; i<=n3; i++) cin >> crr[i];
    double t17=inp3_Quick_sort(crr,1,n3);
    for(int i=1; i<=n3; i++) cout << crr[i]<<endl ;

    freopen("input3.txt","r",stdin);
    freopen("outputQ3D.txt","w",stdout);
    cin >> n3 ;
    for(int i=1; i<=n3; i++) cin >> crr[i];
    double t18=inp3_Quick_sort2(crr,1,n3);
    for(int i=1; i<=n3; i++) cout << crr[i]<<endl ;

    freopen("output Time.txt", "w",stdout);
    cout<< "input1: "<<endl;
    cout<< "Bubblesort=Assending: "<<t1<<"s,"<< "Decending: "<<t2<<"s"<<endl;
    cout<< "Mergesort=Assending: "<<t3<<"s,"<< "Decending: "<<t4<<"s"<<endl;
    cout<< "Quicksort=Assending: "<<t5<<"s,"<< "Decending: "<<t6<<"s"<<endl;
    cout<< "Best Sorting:Assending:";
    if(t1<t3 && t1<t5) cout<< "Bubblesort,";
    if(t3<t1 && t3<t5) cout<< "Mergesort,";
    else cout<< "Quicksort,";
    cout<< "Decending:";
    if(t2<t4 && t2<t6) cout<< "Bubblesort,";
    if(t4<t2 && t4<t6) cout<< "Mergesort,";
    else cout<< "Quicksort"<<endl;

    cout<< "\n\n"<<endl;

    cout<< "input2: "<<endl;
    cout<< "Bubblesort=Assending: "<<t7<<"s,"<< "Decending: "<<t8<<"s"<<endl;
    cout<< "Mergesort=Assending: "<<t9<<"s,"<< "Decending: "<<t10<<"s"<<endl;
    cout<< "Quicksort=Assending: "<<t11<<"s,"<< "Decending: "<<t12<<"s"<<endl;
    cout<< "Best Sorting:Assending:";
    if(t7<t9 && t7<t11) cout<< "Bubblesort,";
    if(t9<t7 && t9<t11) cout<< "Mergesort,";
    else cout<< "Quicksort,";
    cout<< "Decending:";
    if(t8<t10 && t8<t12) cout<< "Bubblesort,";
    if(t10<t8 && t10<t12) cout<< "Mergesort,";
    else cout<< "Quicksort"<<endl;

    cout<< "\n\n"<<endl;
    cout<< "input3: "<<endl;
    cout<< "Bubblesort=Assending: "<<t13<<"s,"<< "Decending: "<<t14<<"s"<<endl;
    cout<< "Mergesort=Assending: "<<t15<<"s,"<< "Decending: "<<t16<<"s"<<endl;
    cout<< "Quicksort=Assending: "<<t17<<"s,"<< "Decending: "<<t18<<"s"<<endl;
    cout<< "Best Sorting:Assending:";
    if(t13<t15 && t13<t17) cout<< "Bubblesort,";
    if(t15<t13 && t15<t17) cout<< "Mergesort,";
    else cout<< "Quicksort,";
    cout<< "Decending:";
    if(t14<t16 && t14<t18) cout<< "Bubblesort,";
    if(t16<t4 && t16<t18) cout<< "Mergesort,";
    else cout<< "Quicksort"<<endl;

    return 0;
}

