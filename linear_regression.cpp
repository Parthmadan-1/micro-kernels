#include<iostream>
#include<vector>
using namespace std;
vector<double> vector_regression(vector<int>&x, vector<int>&y, double alpha)
{
    double m=0,c=0; // initializing our parameters randomly
    while(1)
    {
         int temp=0, temp1=0;
        for(int i=0;i<x.size();i++)
        {
            temp= temp + (m*x[i]+c)-y[i];
        }
        for(int i=0;i<x.size();i++)
        {
            temp1= temp1 + ((m*x[i]+c)-y[i])*x[i];
        }
        if(c== temp && m==temp1 ) break;
        c=c- (alpha/x.size())*temp;
        m= m- ((alpha/x.size()))*temp1;

    }
    vector<double>a;
    a.push_back(c);
    a.push_back(m);
    return a;
}
int main()
{
   vector<int>x={1};
   vector<int>y={2};
 vector<double>m= vector_regression(x,y,0.1);
 for(int i=0;i<m)
  return 0;
}
