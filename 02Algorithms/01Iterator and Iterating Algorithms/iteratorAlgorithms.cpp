#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printDouble(int a){
    cout<<2*a<<" ";
}

bool checkEven(int a){
    return a%2 == 0;
}


int main(){

    // vector<int>arr(5);
    // arr[0]=11;
    // arr[1]=40;
    // arr[2]=10;
    // arr[3]=20;
    // arr[4]=12;

   //for_each(arr.begin(),arr.end(),printDouble);                    //for_each algo

    // int target=400;
   // auto it=find(arr.begin(),arr.end(),target);                    //find algo    ,   here we use auto iterator
  // cout<<*it<<" ";

   

    // auto it=find_if(arr.begin(),arr.end(),checkEven);             //findI-if algo
    // cout<<*it<<endl;

               
    // int target=11;                                                //count algo        
    // int ans=count(arr.begin(),arr.end(),target);
    // cout<<ans<<endl;


    // int ans=count_if(arr.begin(),arr.end(),checkEven);               //count_if algo
    // cout<<ans<<endl;


    // sort(arr.begin(),arr.end());                                       //sort algo
    // for(int i:arr){
    //     cout<<i<<" ";
    // }



    // reverse(arr.begin(),arr.end());                                     //reverse algo
    // for(int i:arr){
    //     cout<<i<<" ";
    // }



    // cout<<"Before Shifting"<<endl;                                         //rotate (+3 position)
    // for(int i:arr){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // rotate(arr.begin(),arr.begin()+3,arr.end());
    // cout<<"After Shifting"<<endl;
    // for(int i:arr){
    //     cout<<i<<" ";
    // }



    vector<int>arr(5);
    arr[0]=11;
    arr[1]=11;
    arr[2]=22;
    arr[3]=22;
    arr[4]=12;

    auto it=unique(arr.begin(),arr.end());                                            //unique
    // it iterator k pahle saare unique element hai
    // it k baad saare duplicate element hai
    arr.erase(it,arr.end());
    for(int i:arr){
        cout<<i<<" ";
    }





    



    return 0;
}