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
void manar(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ,freopen("output.txt", "w", stdout);
#endif
}


int main() {
    manar();
  
    int n,m;
    cin >> n >> m;
    set<int> st;
    vector<string> String;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        String.push_back(s);
     
    }
    for(int i = 0; i < n; i++){
        string s = String[i];
        int Gpos = 0;
        bool Gcame = false;
        for(int j = 0; j < m; j++){
            if(s[j] == 'G'){
                Gcame = true;
                Gpos = j;
            }
            if(s[j] == 'S' && Gcame == false){
                cout << -1;
                return 0;
            }
            else if(s[j] == 'S'){
                st.insert(abs(j-Gpos));
                break;
            }
        }
    }
    cout << st.size();

    return 0;
}

