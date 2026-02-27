#include <bits/stdc++.h>
using namespace std;

constexpr int N = 1e8;

int Tab[N];

int main()
{

    vector<int> tab(N);
    list<int> A;
    auto start = std::chrono::steady_clock::now();

    for (int i = 0; i < N; i++)
        int x = Tab[i];

    auto end = std::chrono::steady_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    std::cout << "Elapsed time for table: " << duration.count() << " ms" << std::endl;

    start = std::chrono::steady_clock::now();

    for (int i = 0; i < N; i++)
        int x = tab[i];

    end = std::chrono::steady_clock::now();

    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    std::cout << "Elapsed time for vector: " << duration.count() << " ms" << std::endl;

    for (int i = 0; i < N; i++)
        A.push_back(i);

    start = std::chrono::steady_clock::now();

    for (auto itr = A.begin(); itr != A.end(); itr++)
        int x = *itr;

    end = std::chrono::steady_clock::now();

    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    std::cout << "Elapsed time for list: " << duration.count() << " ms" << std::endl;

    return 0;
}