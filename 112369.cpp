/*---------------------------------------


                                                                            
 .--. .--. .----.  .----.   ,--.  .----.   
/_  |/_  |\_,-.  |\_.-,  | /  .' / ,-.  \  
 |  | |  |   .' .'  |_  < .  / -.\ '-'   . 
 |  | |  | .'  /_ .-. \  |'  .-. \`- /  .' 
 |  | |  ||      |\ `-'  /\  `-' / .'  /   
 `--' `--'`------' `---''  `----'  `--'      



* This file is stored in deepatlantic312's GitHub
* and is a solution to task No. 112369

------------------------------------------*/

#include <iostream>

using namespace std;
int main() {
  int n = 0;
  cin >> n;
  int a[n][n];
  for(int i = 0; i < n; i++){
   for(int j = 0; j < n; j++){
    cin >> a[i][j];
   }
  }
  for(int i = 0; i < n; i++){
   for(int j = i+1; j < n; j++){
    a[i][j] = 0;
   }
  }
  for(int i = 0; i < n; i++){
   for(int j = 0; j < n; j++){
    cout << a[i][j] << " ";
   }
   cout << endl;
  }
}