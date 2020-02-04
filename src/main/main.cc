#include <iostream>
#include "src/lib/solution.h"
#include <vector>
using namespace std;

int main()
{
    Solution solution ;
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    vector<int> v1 = {arr,arr + n};
    int arr1[]={5,6,3,4};
    n=sizeof(arr1)/sizeof(int);
    vector<int> v2 = {arr1,arr1 + n};
    vector<int> v3(8);
    v3=solution.intersect(v1,v2);
    //std::cout << solution.PrintHelloWorld() << std::endl;
    for(auto it=v3.begin();it!=v3.end();it++)
        cout<<*it<<endl;

    return EXIT_SUCCESS;
}