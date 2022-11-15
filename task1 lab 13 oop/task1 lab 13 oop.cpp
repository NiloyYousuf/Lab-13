// task1 lab 13 oop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    int my_array[10];
    vector<int> my_vector;
    set<int> my_set;

    for (int i = 0; i < 10; i++)
    {
        my_array[i] = 2 * i;
    }

    for (int i = 0; i < 10; i++)
    {
        my_set.insert(2 * i + 1);
    }

    
    merge(my_array,my_array+10, my_set.begin(), my_set.end(),back_inserter( my_vector));

    for (auto u:my_vector)
        cout << u << " ";

 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
