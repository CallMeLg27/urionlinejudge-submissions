#include <iostream>
#include <set>
#include <sstream>
using namespace std;

int main()
{
    set<string> myset;
    set<string>::iterator it;
    string t;
    int N;
    cin>>N;
    getline(cin,t);
    for (int i=0;i<N;i++){
        myset.clear();
        getline(cin,t);
        istringstream iss(t);
        string word= "haaa";
        while(iss >> word) {
            it = myset.begin();
            myset.insert(it, word);
        }
        for (it=myset.begin(); it!=myset.end();){
            cout << *it ;
            it++;
            if (it!=myset.end()) cout << ' ';
        }
        cout<<"\n";
    }
}