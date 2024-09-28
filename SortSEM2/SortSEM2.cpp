#include <iostream>
#include "binary_insertion_sort.cpp"




int main()
{
    int N = 5;
    double Array[5] = { 2.1, 2.5, 2.3, -2.4, 1.9 };
    binary_insertion_sort(N, Array);

    for(int i = 0; i < N; i++ )
    std::cout << Array[i] << " ";
}
