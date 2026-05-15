#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3,5};

    for(int i:vec){
        cout<<i<<endl;
    }


    vector<int>vec2;


    cout<<"after push"<<endl;
    vec2.push_back(20);
    vec2.push_back(33);
    for (int i = 0; i < 10; i++)
    {
        vec2.push_back(i);
    }
    

    for(int i: vec2){
        cout<<i<<endl;
    }

    vec2.pop_back();
    cout<<"after pop"<<endl;
    for(int i: vec2){
        cout<<i<<endl;
    }
    
    cout<<vec2.front()<<" "<<vec2.back()<<" "<<vec2.at(3);



    return 0;
}