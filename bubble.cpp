#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system(
) or input loop */
/*branch name
*
*
*
*/
//prototype

int getindexnu();

void getarraynu(int b[], int &indexnu);

void bubblesort(int b[], int indexnu);
//--------------------------
//micro
//---------------------
//global variable
//-------------------
int main(int argc, char** argv)
{

    //Declar variable for get number of index array
    int n;

    n = getindexnu();

    //Seperatpr
    cout<<endl<<endl<<"------------------------------"<<endl<<endl;

    //Declar Array
    int a[n];

    //Get number of array
    getarraynu(a,n);

        //Seperatpr
    cout<<endl<<endl<<"------------------------------"<<endl<<endl;

    //sort bubble and show array
    bubblesort(a,n);

getch();
}
//function variable
//--------------------------
//functions

//Function for get number of index array
int getindexnu()
{
    int indexnu;

    cout<<"Enter number of index array = ";
    cin>>indexnu;

    return indexnu;

}

//Function for get array number 
void getarraynu(int b[], int &indexnu)
{

for(int i=0; i<indexnu; ++i)
{
    cout<<"["<<i<<"] = ";
    cin>>b[i];
    cout<<endl;
}

}

//Function for sert with bubble sort and show array

void bubblesort(int b[], int indexnu)
{

    for(int j=0; j<indexnu; ++j)
    {

    for (int i=0; i<indexnu; ++i)
    {

        int temp=0;
        if(b[i] > b[i+1])
        {

            temp = b[i + 1];
            b[i + 1] = b[i];
            b[i] = temp;

        }
    }
    }

    for(int k=0; k<indexnu; ++k)
    {
        cout<<"["<<k<<"] = "<<b[k]<<endl;
    }
}