/*---------------------------------------


                                           
                                           
 .--. .--. .----.  .----.   ,--.   .----.  
/_  |/_  |\_,-.  |\_.-,  | /  .'  / .-.  \ 
 |  | |  |   .' .'  |_  < .  / -. \ '-'  / 
 |  | |  | .'  /_ .-. \  |'  .-. \/ /`.  \ 
 |  | |  ||      |\ `-'  /\  `-' /\ '-'  / 
 `--' `--'`------' `---''  `----'  `---''  



* This file is stored in deepatlantic312's GitHub
* and is a solution to task No. 112368

------------------------------------------*/

#include <iostream>

using namespace  std;

int main()
{
    int n, m, maxElement, tmp;
    cin >> n >> m;
    int A[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> tmp;
            A[i][j] = tmp;
            if(i == 0 && j == 0){
                maxElement = A[i][j];
            }
            if(maxElement < A[i][j]){
                maxElement = A[i][j];
            }
        }
    }
    for(int j = 0; j < m; j++) {
        for(int i = 0; i < n; i++) {
            if(A[i][j] == maxElement) {
                for(int k = 0; k < n; k++) {
                    cout << A[k][j] << " ";
                }
                cout << endl;
                break;
            }
        }
    }
}