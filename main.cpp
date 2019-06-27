#include <iostream>
using namespace std;
void OutputInArr();
int main() {
    OutputInArr();

    return 0;
}

void OutputInArr() {
    const int row =4;
    const int column = 10;
    char arr[row][column];
    for (int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            arr[i][j]=' ',' ';
        }
    }


    cout<<arr[1][1]<<" | "<<arr[1][2]<<" | "<<arr[1][3]<<endl;
    cout<<"- | - | -"<<endl;
    cout<<arr[2][1]<<" | "<<arr[2][2]<<" | "<<arr[2][3]<<endl;
    cout<<"- | - | -"<<endl;
    cout<<arr[3][1]<<" | "<<arr[3][2]<<" | "<<arr[3][3]<<endl;


    int rowIn,columnIn;
    char in;
    cout<<"Enter pozition: "<<endl;
    cin>>rowIn>>columnIn>>in;
    arr[rowIn][columnIn]=in,in;
    cout<<arr[1][1]<<" | "<<arr[1][2]<<" | "<<arr[1][3]<<endl;
    cout<<"- | - | -"<<endl;
    cout<<arr[2][1]<<" | "<<arr[2][2]<<" | "<<arr[2][3]<<endl;
    cout<<"- | - | -"<<endl;
    cout<<arr[3][1]<<" | "<<arr[3][2]<<" | "<<arr[3][3]<<endl;



    cout<<"Enter pozition: "<<endl;
    cin>>rowIn>>columnIn>>in;
    arr[rowIn][columnIn]=in,in;
    cout<<arr[1][1]<<" | "<<arr[1][2]<<" | "<<arr[1][3]<<endl;
    cout<<"- | - | -"<<endl;
    cout<<arr[2][1]<<" | "<<arr[2][2]<<" | "<<arr[2][3]<<endl;
    cout<<"- | - | -"<<endl;
    cout<<arr[3][1]<<" | "<<arr[3][2]<<" | "<<arr[3][3]<<endl;

}