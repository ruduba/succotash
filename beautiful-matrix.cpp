#include<bits/stdc++.h>
using namespace std;

int dist(pair<int, int>& a, pair<int, int>& b){
    
    int res = (abs(a.first - b.first) + abs(a.second - b.second));
    
    return res;
}


int main() {

	vector<vector<int>> mat;
	pair<int, int> onePos;
	pair<int, int> midPos = {2, 2};
	for(int i = 0; i < 5; i++){
	    vector<int> temp;
	    for(int j = 0; j < 5; j++){
	        int x;
	        cin>>x;
	        temp.push_back(x);
	        
	        if(x == 1) {
	            onePos =  {i, j};
	        }
	        mat.push_back(temp);
	    }
	}
	
	int moves = dist(onePos, midPos);
	
	cout << moves << " ";
	
	return 0;
}