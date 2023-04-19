#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    int mas[5][5]={};
    for(int i = 0; i<5;i++){
        for(int j = 0; j<5;j++){
        
            mas[i][j] = 0;
            cout<<mas[i][j]<<" ";
            
        }
        cout<<endl;
    }
    cout<<"random koordinate tika ielikts 1, uzmini kura!\n\n";
    int x = rand() % 5;
    int y = rand() % 5;
    mas[x][y] = 1;
    

    int row,col;
    Again:
    cout<<"rinda: ";
    cin>>row;
     cout<<"kolonna: ";
    cin>>col;
    if(row == x + 1 and col == y + 1){
     cout<<"Tu uzminēji!\n";   
    }else{
        
        cout<<"\033c"<<"mini vēlreiz!: \n\n";
        goto Again;
    }
    for(int i = 0; i<5;i++){
        for(int j = 0; j<5;j++){
            cout<<mas[i][j]<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}
