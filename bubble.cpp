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