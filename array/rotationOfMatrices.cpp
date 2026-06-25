# include<iostream>
using namespace std;

//90 = transpose + reverse row
// 180 = reverse row + reverse column
// 270 = transpose + reverse col
 void rotate270Degree(int arr[3][3]){
 for (int i=0;i<3;i++){
        for (int j=i;j<3;j++){
            swap(arr[i][j],(arr[j][i]));
        }
     }
 for (int j = 0; j < 3; j++) {
    int top = 0, bottom = 2;

    while (top < bottom) {
        swap(arr[top][j], arr[bottom][j]);
        top++;
        bottom--;
    }
 }

 }

 void rotate180Degree(int arr[3][3]){

    for (int i=0;i<3;i++){
        reverse(arr[i],arr[i]+3);
    }

    for (int j = 0; j < 3; j++) {
    int top = 0, bottom = 2;

    while (top < bottom) {
        swap(arr[top][j], arr[bottom][j]);
        top++;
        bottom--;
    }
}

 }
  void rotate90Degree(int arr[3][3]){

     for (int i=0;i<3;i++){
        for (int j=i;j<3;j++){
            swap(arr[i][j],(arr[j][i]));
        }
     }
         for (int i=0;i<3;i++){
            reverse(arr[i],arr[i]+3);
         }
  }

 int main(){
    int arr[3][3]={
                   {1,2,3},
                   {4,5,6},
                   {7,8,9}
                   };
rotate270Degree(arr);
       
   for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }


 }