/*---------------------------------------

                                            
                                            
 .--. .--. .----.  .----. .-------. .---.  
/_  |/_  |\_,-.  |\_.-,  ||   _   '/ .  |  
 |  | |  |   .' .'  |_  < `-' /  // /|  |  
 |  | |  | .'  /_ .-. \  |   .  // '-'  || 
 |  | |  ||      |\ `-'  /  /  / `---|  |' 
 `--' `--'`------' `---''  `--'      `--' 



* This file is stored in deepatlantic312's GitHub
* and is a solution to task No. 112374

------------------------------------------*/
#include <iostream>

using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
       if(j == i){
          a[i][j] = 0;
       }
       if(j < i){
          a[i][j] = i - j;
              
       }
      if(j > i){
          a[i][j] = j - i;
      }
      cout << a[i][j] << " ";
       }
      cout << endl;
      }
}