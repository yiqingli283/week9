#include<bits/stdc++.h> 
using namespace std;
int main(){
    priority_queue<int, vector<int>, greater<int> > q;
    for( int i= 0; i< 10; ++i ) 
    {
		int temp;
		cin>>temp; 
		q.push(temp);
	}
    while( !q.empty() ){
        cout << q.top() << endl;
        q.pop();
    }     
    getchar();
    return 0;
}