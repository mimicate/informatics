/*---------------------------------------

                                            
                                            
 .--. .--. .----.  .----. .-------. .----.  
/_  |/_  |\_,-.  |\_.-,  ||   _   '\_.-,  | 
 |  | |  |   .' .'  |_  < `-' /  /   |_  <  
 |  | |  | .'  /_ .-. \  |   .  /  .-. \  | 
 |  | |  ||      |\ `-'  /  /  /   \ `-'  / 
 `--' `--'`------' `---''  `--'     `---''  



* This file is stored in deepatlantic312's GitHub
* and is a solution to task No. 112373

------------------------------------------*/
#include <iostream>

using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
            a[i][j] = i + j;
            cout << a[i][j] << " ";
      }
    }
}
