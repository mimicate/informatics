/*---------------------------------------


                                             
                                             
 .--. .--. .----.  .----. .-------. .----.   
/_  |/_  |\_,-.  |\_.-,  ||   _   '/  ..  \  
 |  | |  |   .' .'  |_  < `-' /  /|  /  \  . 
 |  | |  | .'  /_ .-. \  |   .  / '  \  /  ' 
 |  | |  ||      |\ `-'  /  /  /   \  `'  /  
 `--' `--'`------' `---''  `--'     `---''   



* This file is stored in deepatlantic312's GitHub
* and is a solution to task No. 112370

------------------------------------------*/

#include <iostream>

using namespace std;
int main() {
   int n, m;
   cin >> n;
   m = n;
   int a[n][m];
   for(int i = 0; i < n; i++){
   for(int j = 0; j < m; j++){
     cin >> a[i][j];
     }
     }
   int k = 0;
   bool pass = true;
   for(int i = 0; i < n; i++){
   for(int j = 0; j < m; j++){
     if(a[i][j] != a[j][i]){
       pass = false;
     }
     k++;
   }
   }
   cout << endl;
   if(pass == true){
     cout << "YES" << endl;
   }
   else{
     cout << "NO" << endl;
   }
}