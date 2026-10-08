#include<iostream>
#include<list>
using namespace std;

int main(){

    //Creation 
    // list<int>myList;

    // // Insertion
    // myList.push_back(10);
    // myList.push_back(20);
    // myList.push_back(30);
    // myList.push_back(40);

    // myList.push_front(100);

    // myList.pop_back();

    // myList.pop_front();

    // cout<<myList.size()<<endl;
    // myList.clear();
    // cout<<myList.size()<<endl;

    // if(myList.empty()==true){
    //     cout<<"List is Empty "<<endl;
    // }
    // else{
    //     cout<<"List is not Empty"<<endl;
    // }


    // cout<<myList.front()<<endl;
    // cout<<myList.back()<<endl;

    // myList.remove(10);

    // list<int>::iterator it=myList.begin();              // // Traverse the list
    // while(it!=myList.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }


    list<int>first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);

    list<int>second;
    second.push_back(100);
    second.push_back(200);
    second.push_back(300);

    // Traverse
    list<int>::iterator it=first.begin();
    while(it!=first.end()){
       cout<<*it<<" ";
       it++;
    }
    first.swap(second);
    // Traverse
    list<int>::iterator it2=first.begin();
    while(it2!=first.end()){
        cout<<*it2<<" ";
        it2++;
    }


    return 0;
}