#include <iostream>
#include <cstdlib>

//5223600009 / Aditya Muhammad Ifanrus

using namespace std;

#define MAX 10
int Data[MAX];

// Fungsi pertukaran bilangan
void Tukar(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Fungsi pengurutan seleksi
void SelectionSort()
{
    int i, j, k;
    for (i = 0; i < MAX - 1; i++) {
        k = i;
        for (j = i + 1; j < MAX; j++)
            if (Data[k] > Data[j])
                k = j;
        Tukar(&Data[i], &Data[k]);
    }
}

int main()
{
    int i;
    srand(0);
    // Membangkitkan bilangan acak
    cout << "Data sebelum berurutan" << endl;
    for (i = 0; i < MAX; i++)
    {
        Data[i] = (int)rand() / 1000 + 1;
        cout << "Data ke " << i << ": " << Data[i] << endl;
    }
    SelectionSort();
    // Data setelah terurut
    cout << "\nData setelah berurutan" << endl;
    for (i = 0; i < MAX; i++)
    {
        cout << "Data ke " << i << ": " << Data[i] << endl;
    }
    return 0;
}
