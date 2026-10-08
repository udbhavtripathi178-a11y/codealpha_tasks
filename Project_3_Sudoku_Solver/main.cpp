#include <iostream>
using namespace std;
bool issafe(int arr[9][9], int num, int row, int col){
    //for row check
    for(int i=0;i<9;i++){
        if(arr[row][i]==num){
            return false;
        }
    }
    //for column check 
    for(int j=0; j<9; j++){
        if(arr[j][col]==num){
            return false;
        }
    }
    //for box check 
    int startrow = (row/3)*3;
    int startcol = (col/3)*3;
    for(int i=startrow; i<(startrow+3); i++){
        for (int j=startcol; j<(startcol+3);j++){
            if(arr[i][j]==num){
                return false;
            }
        }
    }
    return true;
}
bool sudoku(int arr[9][9]){
    int row=-1,col=-1;
    bool found = false;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){ 
            if(arr[i][j]==0){
                row=i;
                col=j;
                found = true;
            }
            if(found ==true){
                break;
            }
        }
        if(found==true){
            break;
        }
    }
    if(found ==false){
        return true;
    }
                for(int n=1; n<=9;n++){
                if(issafe(arr,n,row,col)){
                        arr[row][col]=n;
                        bool res= sudoku(arr);
     
                        if(res==false){
                            arr[row][col]=0;
                        
                        }
                    else{
                        return true;
                    }
                    
                
                    }
                }
return false;
}
    
int main() {
    int arr[9][9];
    cout<<"enter the values "<<endl;
    for(int i = 0; i<9; i++){
        for(int j=0; j<9; j++){
            while(!(cin>>arr[i][j])&&(0<=arr[i][j]<10)){
                cout<<"! incorrect, enter number again"<<endl;
                cin.clear();
                cin.ignore(1000,'\n');
            }
        }
        cout<<endl;
    }
    cout<<"the sudoku  will be "<<endl;
    bool solution= sudoku(arr);
    if(!solution){
        cout<<"either sudoku is complete or any mistake ";
        return -1;
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}