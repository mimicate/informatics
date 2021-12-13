/*---------------------------------------
                      
                                            
                                            
 .--. .--. .----.  .----. .-------..-----.  
/_  |/_  |\_,-.  |\_.-,  ||   _   '|   __|  
 |  | |  |   .' .'  |_  < `-' /  / `--.  '. 
 |  | |  | .'  /_ .-. \  |   .  /  .-  |  | 
 |  | |  ||      |\ `-'  /  /  /   | `-'  / 
 `--' `--'`------' `---''  `--'     `---'' 



* This file is stored in deepatlantic312's GitHub
* and is a solution to task No. 112375

------------------------------------------*/

#include <iostream>

using namespace std;
int main() {
   int n, m;
   cin >> n >> m;
   int a[n][m];
   int k = 1;
   for(int i = 0; i < n; i++){
   for(int j = 0; j < m; j++){
     a[i][j] = k;
     k++;
   }
   }
   for(int i = 0; i < n; i++){
   if(i % 2 == 0){
   for(int j = 0; j < m; j++){
     cout << a[i][j] << " ";
   }
     }
     else{
       for(int j = m-1; j >= 0; j--){
      cout << a[i][j] << " ";
   }
     }

     cout << endl;
   }
}