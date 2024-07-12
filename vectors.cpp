#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  vector<int> v1(10); // this is a declaration for a vector of integers that has size 10. Note that unlike an array declaration, we use ()
                      // instead of []
  for(int i=0 ; i < 10 ; i++)
    v1[i] = i;

    for(int i=0 ; i < 10 ; i++)
    {
        cout<< v1[i] << " ";
    }
    cout<< endl;

    vector<int> v2; // Here, we are not declaring the size of the vector

    int len = v2.size(); // v.size() returns the size of the vector
    cout<<"Initial size of v2 is "<<len<<endl; // Output is 0, because we have not specified the size of the vector yet.

    
    for(int i=0 ; i < 15 ; i++)
    v2.push_back(i); // Since v[i] is not a valid index yet, we use the push_back() function to insert an element into the vector

    for(int i=0 ; i < 15 ; i++) cout<<v2[i]<<" ";
    cout<<endl;
    int len1 = v1.size() , len2 = v2.size();
    cout<<"Sizes of the two vectors are "<<len1<<" and "<<len2<<endl;

return 0;
}