/*---------------------------------------


                                           
                                           
 .--. .--. .----.  .----.   ,--. .-------. 
/_  |/_  |\_,-.  |\_.-,  | /  .' |   _   ' 
 |  | |  |   .' .'  |_  < .  / -.`-' /  /  
 |  | |  | .'  /_ .-. \  |'  .-. \  .  /   
 |  | |  ||      |\ `-'  /\  `-' / /  /    
 `--' `--'`------' `---''  `----' `--'     



* This file is stored in deepatlantic312's GitHub
* and is a solution to task No. 112367

------------------------------------------*/

#include <iostream>

using namespace std;
int main() {
  int n, m = 0;
  cin >> n >> m;
  int a[n][m];
  for(int i = 0; i < n; i++){
   for(int j = 0; j < m; j++){
    cin >> a[i][j];
   }
  }
  int minSum = 99999999;
  int minI = 0;
  for(int i = 0; i < n; i++){
   int cSum = 0;
   for(int j = 0; j < m; j++){
    cSum += a[i][j];
   }
   if(cSum < minSum){
     minSum = cSum;
     minI = i;
   }
  }
   for(int j = 0; j < m; j++){
    cout << a[minI][j] << " ";
   }
}