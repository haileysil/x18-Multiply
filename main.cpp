#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
        vector < vector <int> > multTable;

        cout<<"X | ";
        for (int i=1 ; i < 13 ; i++)
        {
                cout<<i<<" | ";
        }
        cout<<endl;

        multTable.resize(13);

        for (int l = 1; l < 13; l++)
        {
                multTable[l].resize(13);
                cout<<l<<" | ";

                for (int h = 1; h <13; h++)
                {
                        multTable[l][h] = l*h;
                        cout<<multTable[l][h]<<" | ";
                }
                cout<<" "<<endl;
        }


        return 0;
}
