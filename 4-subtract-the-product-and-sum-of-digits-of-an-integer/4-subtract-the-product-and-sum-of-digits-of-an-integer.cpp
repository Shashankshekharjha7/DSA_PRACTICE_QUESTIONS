#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
      vector <int> v;
      int temp = n;
      int sum = 0,product = 1;
      while (temp)
      {
        v.push_back(temp%10);
        temp = temp/10;
      }
      for (int i = 0; i < v.size(); i++)
      {
        product*=v[i];
      }
      for (int i = 0; i < v.size(); i++)
      {
        sum+=v[i];
      }
      int difference = product - sum;
      return difference;
    }
};