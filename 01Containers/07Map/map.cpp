#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){

    // Creation
     unordered_map<string,string>table;
    
    //  Insert
     table["in"]="India";                         //insert by one type
     table.insert(make_pair("en","England"));     //insert by another type

     pair<string,string>p;                        //insert by another type
     p.first="br";
     p.second="brazil";
     table.insert(p);

    // cout<<table.size()<<endl;

    // table.clear();
   
    // if(table.empty()==true){
    //     cout<<"Map is Empty"<<endl;
    // }
    // else{
    //     cout<<"Map is not Empty"<<endl;
    // }


    // cout<<table["in"]<<endl;
    // cout<<table.at("in")<<endl;


    // unordered_map<string,string>::iterator it=table.begin();
    // while(it!=table.end()){
    //     pair<string,string>p=*it;
    //     cout<<p.first<<" "<<p.second<<endl;
    //     it++;
    // }


    // cout<<table.size()<<endl;
    // table.erase(table.begin(),table.end());
    // cout<<table.size()<<endl;



    // if(table.find("in")!=table.end()){
    //     cout<<"Key Found";
    // }
    // else{
    //     cout<<"key not found";
    // }


    if(table.count("in")==0){
        cout<<"key not found";
    }
    if(table.count("in")==1){
        cout<<"Key is found";
    }

    
    return 0;
}