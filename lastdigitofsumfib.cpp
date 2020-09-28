#include<iostream>
#include<vector>

using namespace std;
int fib(long long int n)
{
    //int *arr = new int[n + 2];  
    vector<int>* v = new vector<int>();

    long long int i; 
   // arr[0] = 0; 
    v->push_back(0);
   // arr[1] = 1; 
    v->push_back(1);

    for(i = 2; i <= n; i++) 
    {  
       //arr[i] = (((arr[i - 1] + arr[i - 2])%60)+9)%10;
      v->push_back(((v->at(i-1) + v->at(i-2) )%60 +9)%10);
     //cout<<v->at(i)<<"\n";
      // v[i] = (((v[i - 1] + v[i - 2])%60)+9)%10;     
    } 
    return v->at(n); 
}
int main(){
    long long int n;
    cin>>n;
    cout<< fib(n)<<"\n";
    return 0;
}