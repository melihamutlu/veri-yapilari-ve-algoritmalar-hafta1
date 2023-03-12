# veri-yapilari-ve-algoritmalar
veri yapıları ve algoritmalar

/* 1- Sıralı verilen iki diziyi birleştiren program kodunu yazınız. */


#include <iostream>
using namespace std;

int main()
{
    int array1[] = {1, 3, 4, 5}; /* 1. dizi tanımlandı */
    int array2[] = {2, 4, 6, 8}; /* 2. dizi tanımlandı */

    int size1 = sizeof(array1) / sizeof(array1[0]); /* dizi bellek boyutu */
    int size2 = sizeof(array2) / sizeof(array2[0]);

    int merged[size1 + size2]; /* 2 diziyi birleştiren 3.dizi tanımlandı */
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) /* 2 diziyi karşılaştırmak için while döngüleri oluşturdum. */
    {
        if (array1[i] < array2[j])
        {
            merged[k] = array1[i];
            i++;
        }
        else
        {
            merged[k] = array2[j];
            j++;
        }
        k++;
    }

    while (i < size1)
    {
        merged[k] = array1[i];
        i++;
        k++;
    }

    while (j < size2)
    {
        merged[k] = array2[j];
        j++;
        k++;
    }

    cout << "Array3 : ";
    for (int x = 0; x < size1 + size2; x++)
    {
        cout << merged[x] << " ";
    }

    return 0;
}

