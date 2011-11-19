#include<iostream>

#include<string.h>
using namespace std;
#define N(e) "e"#e

int main()
{
int i=1,j=2,k=3;
    int m = i++ || j++ && k++;
cout<<i<<" "<<j<<" "<<k<<" "<<m;
}

