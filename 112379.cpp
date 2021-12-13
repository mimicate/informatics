/*---------------------------------------


                                             
                                             
 .--. .--. .----.  .----. .-------. .----.   
/_  |/_  |\_,-.  |\_.-,  ||   _   '/ ,-.  \  
 |  | |  |   .' .'  |_  < `-' /  / \ '-'   . 
 |  | |  | .'  /_ .-. \  |   .  /   `- /  .' 
 |  | |  ||      |\ `-'  /  /  /     .'  /   
 `--' `--'`------' `---''  `--'      `--'  



* This file is stored in deepatlantic312's GitHub
* and is a solution to task No. 112379

------------------------------------------*/

#include <iostream>

using namespace std;
int main() {
   int n;
   cin >> n;
   int a[n][n];
   int sum = 0;
   for(int i = 0; i < n; i++){
   for(int j = 0; j < n; j++){
       cin >> a[i][j];
       sum += a[i][j];
   }
   }
   int magic = n * ((n*n + 1) / 2);
   sum = sum / n;
   if(sum % n != 0){
       sum++;
   }
   if(magic == sum){
       cout << "YES" << endl;
   }
   else{
       cout << "NO" << endl;
   }
}