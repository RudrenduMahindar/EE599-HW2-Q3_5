#include "solution.h"
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<int> Solution::intersect(vector<int>& v1,vector<int>& v2) { 
  
  sort(v1.begin(),v1.end());
  sort(v2.begin(),v2.end());
  
  vector<int> v3(v1.size()+v2.size());
  //merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
  
    /*if(binary_search(v2.begin(),v2.end(),*it))
      v3.insert(*it);*/

     auto it=set_intersection(v1.begin(),v1.end(),
                          v2.begin(),v2.end(),
                          v3.begin());
    v3.resize(it-v3.begin());
  
  return v3;
   
}
