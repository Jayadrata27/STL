#include<iostream>
#include<vector>
using namespace std;
int main(){

    // Creation
    // vector<int>marks(5,-1) ;
    // cout<<*(marks.begin())<<endl;


    // vector<int>miles(10);
    // vector<int>distance(15,0);

    //  vector<int>marks ;
    //  marks.push_back(10);
    //  marks.push_back(20);
    //  marks.push_back(30);
    //  marks.push_back(40);
    //  marks.push_back(50);
     
    // marks.clear();
    // cout<<marks.size()<<endl;

    // marks.insert(marks.begin(),50);
    // cout<<marks[0]<<endl;

    // marks.erase(marks.begin(),marks.end());
    // cout<<marks.size()<<endl;


    //  cout<<marks.size()<<endl;
    //  marks.pop_back();
    //  cout<<marks.size()<<endl;

    // cout<<marks.front()<<endl;
    // cout<<marks.back()<<endl;

    // if(marks.empty()==true){
    //     cout<<"Vector is Empty"<<endl;
    // }
    // else{
    //     cout<<"Vector is Not Empty"<<endl;
    // }
    

    // marks[0]=100;
    // cout<<marks[0]<<endl;

    // cout<<marks.capacity()<<endl;




    // vector<int>mar ;
    // mar.reserve(10);
    // cout<<mar.capacity()<<endl;
    // cout<<mar.max_size()<<endl;



    // vector<int>first;
    // vector<int>second;

    // first.push_back(10);
    // first.push_back(11);
    // first.push_back(12);
    // first.push_back(13);

    // second.push_back(100);
    // second.push_back(200);
    // second.push_back(300);
    // second.push_back(400);

    // first.swap(second);
    // // cout<<first[0]<<" "<<first[1]<<" "<<first[2]<<" "<<first[3];

    // for(int i:first){                      //use forEach loop
    //     cout<<i<<" ";
    // }

    // for(int j:second){                    //use forEach loop
    //     cout<<j<<" ";
    // }



    // vector<int>first;
    // first.push_back(10);
    // first.push_back(20);
    // first.push_back(30);

    // // Create an Iterator
    // vector<int>::iterator it=first.begin();
    // while(it!=first.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }




    // Create 2D array/vector
    // vector<vector<int>>arr(5,vector<int>(4,0));           //5 row 4 col with initial value each cell as "0"
    // int totalRows=arr.size();
    // int totalCols=arr[0].size();


    vector<vector<int>>arr(4);           // 4 rows create
    arr[0]=vector<int>(4);              // 0th row contain 4 cols
    arr[1]=vector<int>(2);              // 1th row contain 2 cols 
    arr[2]=vector<int>(5);              // 2th row contain 5 cols
    arr[3]=vector<int>(3);              // 3th row contain 3 cols
    int totalRowCount=arr.size();
    // int totalColCount=arr[i].size();     //where i = 0,1,2,3

    return 0;
}