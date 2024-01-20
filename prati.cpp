#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n;
    cout<<"Enter the value of rows and coloumn:";
    cin>>n>>m;
    
    int out[n][m];
    int two[n][m];
    int sum[n][m];
    cout<<"take inpute from user;"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++){
        cin>>out[i][j];
        //cout<<"  ";
        
        }
        cout<<endl;
    }

    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++){
        cin>>two[i][j];
        //cout<<"  ";
        
        }
        cout<<endl;
    }
    //calculate
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum[i][j]=out[i][j]+two[i][j];
        }
    }
    
   for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<sum[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
