#include<bits/stdc++.h> 
using namespace std;
int SIDE = 10;
vector<vector<int>> score = {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                     {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                     {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                     {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                     {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                     {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                     {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                     {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                     {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                     {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
                    };
int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int sum = 0;
        for(int i = 0; i<SIDE; i++){
            for(int j = 0; j<SIDE; j++){
                char tmp;
                cin>>tmp;
                if(tmp == 'X'){
                    sum += score[i][j];
                }
            }
        }
        cout<<sum<<"\n";
    }
    
}