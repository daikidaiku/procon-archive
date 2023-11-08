#include<bits/stdc++.h>
using namespace std;

long npow(int B, int N){    
    long i, ans = 1;
    for(i=0; i<N; i++){
        ans *= B; 
    }
    return ans;
}

int main(){

    long N =0;
    cin >> N;
    
    int xlimit =0, ylimit =0;
    // x,yの最大値を求める
    for (int i=0; i< 100; i++){
        if(npow(2,i) > N){
            xlimit = i-1;
            break;
        }
    }

    for (int i=0; i< 100; i++){
        if(npow(3,i) > N){
            ylimit = i-1;
            break;
        }
    }

    //２次元配列の宣言　xlimit+1 * ylimit+1
    vector<vector<long>> data(ylimit+1, vector<long>(xlimit+1));
    //２次元配列に入力
    for (int i = 0; i < ylimit+1; i++) {
        for (int j = 0; j < xlimit+1; j++) {
            if(npow(3,i) * npow(2,j) == N){
                cout << "Yes" << endl;
                return 0;
                // data.at(i).at(j) = npow(3,i) * npow(2,j);
            // }
            // else{
            //     data.at(i).at(j) = 0;
            }
        }
    }

    cout << "No" << endl;
    // //入力したNと同じdataの要素があればフラグCを1としYesと出力
    // int C =0;
    // for (int i = 0; i < ylimit+1; i++) {
    //     for (int j = 0; j < xlimit+1; j++) {
    //         if(N == data.at(i).at(j)){
    //             C = 1;
    //             break;
    //         }
    //     }
    //     //既にNと一致するものがあったらループを抜ける  
    //     if(C !=0){
    //         break;
    //     }
    // }

    // if(C == 1){
    //     cout << "Yes" << endl;
    // }
    // else{
    //     cout << "No" << endl;
    // }


    // for(int i = 0;i < xlimit+1; i++){
    //     for(int j = 0; j < ylimit+1; j++){
    //         cout << data.at(i).at(j) << " ";
    //         if(j==ylimit) cout << endl;
    //     }
    // }
}