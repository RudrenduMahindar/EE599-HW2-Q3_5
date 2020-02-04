#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(IntersectVectorTest, ValidVectors) {
  Solution solution ;
  int arr[]={1,2,3,4};
  int n=sizeof(arr)/sizeof(int);
  vector<int> v1 = {arr,arr + n};
  int arr1[]={3,4,5,6};
  n=sizeof(arr1)/sizeof(int);
  vector<int> v2 = {arr1,arr1 + n};
  vector<int> v3(v1.size()+v2.size());
  v3=solution.intersect(v1,v2);
  vector<int> actual = v3;
  int arr2[]={3,4};
  n=sizeof(arr2)/sizeof(int);
  vector<int> v4 = {arr2,arr2 + n};
  vector<int> expected = v4;
  EXPECT_EQ(expected, actual);
}

TEST(IntersectVectorTest, EmptyVectors) {
  Solution solution ;
  int arr[]={};
  int n=sizeof(arr)/sizeof(int);
  vector<int> v1 = {arr,arr + n};
  int arr1[]={};
  n=sizeof(arr1)/sizeof(int);
  vector<int> v2 = {arr1,arr1 + n};
  vector<int> v3(v1.size()+v2.size());
  v3=solution.intersect(v1,v2);
  vector<int> actual = v3;
  int arr2[]={};
  n=sizeof(arr2)/sizeof(int);
  vector<int> v4 = {arr2,arr2 + n};
  vector<int> expected = v4;
  EXPECT_EQ(expected, actual);
}