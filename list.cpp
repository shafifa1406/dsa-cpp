#include<iostream>
#include<list>
using namespace std;
int main(){
    // CREATION 

    list <int> myList;
    // insertion
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);
    //myList.push_back(10);

    //myList.remove(10);

    //myList.push_front(100);
    //myList.pop_back();
    // myList.pop_front();

    //cout << myList.size() << endl;
    // cout << myList.front() << endl;
    // cout << myList.back() << endl;

    // myList.clear();
    // cout << myList.size() << endl;

    // if(myList.empty()==true){
    //     cout << "List is empty." << endl;
    // }

    // myList.insert(myList.begin(),100);
    // myList.erase(myList.begin());


    // TRAVERSAL 
    // list<int>::iterator it2 = myList.begin();
    // while(it2 != myList.end()){
    //     cout << *it2  << endl;
    //     it2++;
    // }

    list<int> second;
    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    second.push_back(400);

    myList.swap(second);

    cout << myList.front();


    return 0;
}