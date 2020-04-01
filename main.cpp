#include <iostream>
#include "vector"
using namespace std;
int main() {
    int n,k;
    cin >> n >> k;

    if(n >= k){

        int points [n];
        int further = 0;
        for (int i = 0; i < n; ++i) {
            int val;
            cin >> val;
            points[i] = val;
        }
        int score = points[k - 1];
        for (int i = 0; i < n; ++i) {
           int s =  points[i];
           if(s < score){

           } else{
                if(s > 0 )
               further++;
           }
        }

        cout << further;

    }



    return 0;
}
