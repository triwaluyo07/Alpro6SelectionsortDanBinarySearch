#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jmlArr,cari;
    printf("masukan jumlah Array ");
    scanf("%d",&jmlArr);

    int Array[jmlArr];
    input(Array,jmlArr);

    printf("Nilai array anda adalah : \n");
    cetakarr(Array,jmlArr);

    printf("Masukan nilai yang anda cari : ");scanf("%d",&cari);

    int hasil;
    hasil=sequentialsearch(Array,cari,jmlArr);

    if(hasil!=-1)
    {
        printf("\nArray yang anda cari adalah %d ada di indek ke %d",cari,hasil);
    }
    else
    {
        printf("\nNilai yang anda cari tidak ada di dalam array");
    }
    return 0;
}
void cetakarr(int Arr[], int n)
{
    int x;
    for(x=0;x<n;x++)
    {
        printf("[%d] ",Arr[x]);
    }
    printf("\n");
}
void input(int arr[], int n)
{
    int x;
    for(x=0;x<n;x++)
    {
        printf("Masukkan nilai array ke %d : ",x);
        scanf("%d",&arr[x]);
    }
}
int sequentialsearch(int Arr[], int cari, int n)
{
    int x;
    int genap;

    for(x=0;x<n;x++)
    {
        if(Arr[x]%2==0)
        {
            printf("[%d] ",Arr[x]);
        }
        if(Arr[x]==cari)
        {
            return x;
        }
    }
    return -1;
}


