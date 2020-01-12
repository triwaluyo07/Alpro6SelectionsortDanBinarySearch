#include "header.h"

int main()
{
    int Arr[10]={1,3,4,5,6,8,10,11,13,15};
    int cari,hasil;

    printf("Masukkan nilai yang anda cari : ");
    scanf("%d",&cari);

    hasil=binary_search(Arr,10,cari);
    printf("\n");
    printf("[%d] ",hasil);
    return 0;
}
