#include<iostream>
#include<vector>
using namespace std;
int main(){
    // // Creation Of Vector
    vector<int> marks;
    //vector<int> miles(10);
    //vector<int> distance(15,0);

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);

    // vector<int> x;
    // x.push_back(100);
    // x.push_back(200);
    // x.push_back(300);
    // x.push_back(400);

    // marks.swap(x);

    //cout << marks.at(0) << endl;

    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    // cout << marks.size() << endl;

    // marks.erase(marks.begin());

    // cout << marks.size() << endl;


    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;


    //marks.reserve(5);
    
    // cout << marks.size() << endl;
    // cout << *(marks.begin()) << endl;
    //cout << marks.capacity() << endl;

    // marks.pop_back();
    //cout << marks.size() << endl;
    // cout << marks.capacity() << endl;

    // if (marks.empty()==true){
    //     cout << "Vector is empty" << endl;
    // }
    // else{
    //     cout << "Vector is not empty" << endl;
    // }

    // cout << marks.front() << endl;
    // cout << marks.back() << endl;

    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    //marks[0]=100;

    // cout << marks[0] << endl;
    //cout << marks.at(0) << endl;

    //marks.insert(marks.begin(),5);

    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[4] << endl;
    // marks.clear();
    // cout << marks.size() << endl;

    //cout << marks.max_size();

    // TRAVERSAL - FOR EACH
    // for( int i: marks){
    //     cout << i << endl ;
    // }

    // TRAVERSAL - using iterator
    vector<int>::iterator it=marks.begin();

    // while(it != marks.end()){
    //     cout << *it << endl;
    //     it++;
    // }

    // 2 D VECTOR 
    // vector<vector<int>> arr ( row_count , vector<int> (column_count))

    // vector<vector<int>> arr (4, vector<int> (5,0));

    // int row_count=arr.size();
    // int col_count=arr[0].size();

    // cout << row_count << endl;
    // cout << col_count << endl;

    //cout << arr[0][1];

    // JAGGED VECTOR 

    vector <vector<int>> brr(4);
    brr[0]= vector<int>(4);
    brr[1]=vector<int>(2);
    brr[2]=vector<int>(3);
    brr[3]=vector<int>(3);

    int total_row=brr.size();

    // totalCol= brr[i].size(); - loop


    return 0;
}