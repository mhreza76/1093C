#include<iostream>
using namespace std;

int main()
{
    int n,x=0,y,cx=0,bx=0;
    cin>>n;
    y=n;
    z=0;
    unsigned long long int a[n]={0},b[n/2],t=0;
    for(int i=1;i<=n/2;i++ )
    {
        cin>>b[i];
        if(b[i]==1)
            x=1;
        if(b[i]<=2)
        {
            if(b[i]==1)
            {
                a[i]=0;
                a[n-i+1]=1;
                if(cx>=2)
                    y--;
                //cout<<"19"<<endl;
            }
            else if(b[i]==2)
            {
                if(x==1)
                {
                    a[i]=1;
                    a[n-i+1]=1;
                    if(cx>=2)
                    y--;
                    //cout<<"32"<<endl;
                }
                else
                {
                  a[i]=0;
                    a[n-i+1]=2;
                    if(cx>=2)
                    y--;
                    //cout<<"38"<<endl;
                }
                //cout<<"41"<<endl;
            }
            else
            {
               a[i]=0;
                a[n-i+1]=0;
                if(cx>=2)
                y--;
                //cout<<"47"<<endl;
            }
            //cout<<"49"<<endl;
        }

        else
        {
            if(a[y]>=b[i] && a[z]<=)
            {
                a[i]=t;
                a[n-i+1]=b[i];
                if(cx>=2)
                y--;
               //cout<<"58"<<endl;
            }
            else
            {
              a[i]=b[i]-a[y];
              a[n-i+1]= b[i]-a[i];
              if(cx>=2)
              y--;
              //cout<<"66"<<endl;
            }


        }
        bx++;
        cx++;

    }

    for(int i=1;i<=n;i++ )
    {

        cout<<a[i]<<" ";
    }

    return 0;
}
