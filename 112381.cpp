/*---------------------------------------

                                        
                                        
 .--. .--. .----.  .----.  .----.  .--. 
/_  |/_  |\_,-.  |\_.-,  |/ .-.  \/_  | 
 |  | |  |   .' .'  |_  < \ '-'  / |  | 
 |  | |  | .'  /_ .-. \  |/ /`.  \ |  | 
 |  | |  ||      |\ `-'  /\ '-'  / |  | 
 `--' `--'`------' `---''  `---''  `--' 



* This file is stored in deepatlantic312's GitHub
* and is a solution to task No. 112381

------------------------------------------*/

#include <iostream>

using namespace std;
int main() {
  int n, m = 0;
  cin >> n >> m;
  int a[n][m];
  for(int i = 0; i < n; i++){
   for(int j = m-1; j => 0; j--){
    cin >> a[i][j];
   }
  }
  for(int i = 0; i < n; i++){
   for(int j = 0; j < m; j++){
    cout << a[i][j] << " ";
   }
   cout << endl;
  }
}