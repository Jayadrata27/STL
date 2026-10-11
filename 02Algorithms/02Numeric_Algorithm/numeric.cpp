#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;
int main(){
//    vector<int>arr(5);
//    arr[0]=10;
//    arr[1]=20;
//    arr[2]=30;
//    arr[3]=40;
//    arr[4]=50;

//    int totalSum=accumulate(arr.begin(),arr.end(), 0);            //accumulate algo
//    cout<<totalSum;



//   vector<int>first;
//   first.push_back(1);
//   first.push_back(2);
//   first.push_back(3);


//   vector<int>second;
//   second.push_back(3);
//   second.push_back(4);
//   second.push_back(5);

//   int ans=inner_product(first.begin(),first.end(),second.begin(), 0);                 //inner_product algo
//   cout<<ans;


    // vector<int>result(first.size());                                                   //partial_sum algo
    // partial_sum(first.begin(),first.end(),result.begin());
    
    // for(int a:result){
    //     cout<<a<<" ";
    // }


    vector<int>ans(5);
    iota(ans.begin(),ans.end(),250);
    for(int a:ans){
        cout<<a<<" ";
    }



    return 0;
}