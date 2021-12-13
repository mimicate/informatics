/*---------------------------------------


                                           
                                           
 .--. .--. .----.  .----.  .----.  .----.  
/_  |/_  |\_,-.  |\_.-,  |/ .-.  \\_.-,  | 
 |  | |  |   .' .'  |_  < \ '-'  /  |_  <  
 |  | |  | .'  /_ .-. \  |/ /`.  \.-. \  | 
 |  | |  ||      |\ `-'  /\ '-'  /\ `-'  / 
 `--' `--'`------' `---''  `---''  `---''  



* This file is stored in deepatlantic312's GitHub
* and is a solution to task No. 112383

------------------------------------------*/

#include <iostream>

using namespace std;
int main() {
   int n;
   cin >> n;
   int a[n][n];
   for(int i = 0; i < n; i++){
   for(int j = 0; j < n; j++){
     cin >> a[i][j];
   }
   }
   for(int i = n-1; i >= 0; i--){
   for(int j = 0; j < n; j++){
     cout << a[j][i] << " ";
   }
     cout << endl;
   }
}