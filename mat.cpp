/*                وَمَا تَوْفِيقِي إِلَّا بِاللَّهِ ۚ عَلَيْهِ تَوَكَّلْتُ وَإِلَيْهِ أُنِيبُ                        */

#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>
#include<functional>
#include <algorithm>
//#define ceil(a, b) ((a / b) + (a % b ? 1 : 0))
#define ull unsigned long long
#define MOD 1000000007
#define PI 3.14159265
#include <bits/stdc++.h>
#include <iomanip>
#include <set>
#include <map>
//cout << fixed << setprecision(9);
#define f first
#define ll long long
#define pb            push_back
#define pf            push_front
#define pob           pop_back
#define pof           pop_front
#define sz(n) (int) n.size()
#define Pair pair < int, int >
#define all(x) (x).begin(), (x).end()
using namespace std;
const int MAXN = 2e5+10;
int a[MAXN];
void run(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ,freopen("output.txt", "w", stdout);
#endif
}


int main() {
    run();
   
    int n,m;   cin>>n>>m;
    char a[1000][1000];
    for(int i = 0 ; i < n  ;i++){
        for(int j = 0 ; j < m ; j ++){
            cin>>a[i][j];
        }
    }

    for(int i = 0 ; i < n ;i++){
        bool gg= false;
        for(int j  = 0 ; j <  m;j++){
            if(a[i][j] == 'S' && gg == false) return cout<< -1,0;
            else if(a[i][j]=='G') gg= true;
        } }
   set<int >s;
  int c,d;
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ;j++){
            if(a[i][j]== 'S')
                c=j;
            else if(a[i][j]=='G') d=j;
        }
        s.insert(c-d);
    }
cout<<s.size();
    return 0;
}

