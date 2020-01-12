#include"header.h"

int binary_search(int data[],int jml_data,int cari)
{
    int x,y;
    int low=0;
    int mid;
    int high=jml_data-1;

    x=0;
    while(low<=high)
    {

        mid=(low+high)/2;
        if(cari==data[mid])
        {

            return data[mid]; ///bisa pakai cari/indeks
        }

        else if (cari>data[mid])
        {

            low=mid+1;

        }
        else
        {
            high=mid-1;
        }
    }
    return 0;

}

