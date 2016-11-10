#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>

using namespace std;

void sortData(auto& data);
void bubbleSort(auto& data);

int main()
{
	vector<string> data;
	string input;

	ifstream infile; 
        infile.open("top1Mweb");

        if(!infile)
	{
	    cout<<"Error reading from file bin/data/input"<<endl;

	     return -1;
	}

	while(infile>>input)//read an unknown number of inputs
        {
        	data.push_back(input);
        }

	//sortData(data);
	bubbleSort(data);




return 0;
}

void sortData(auto& data)
{
	sort(data.begin(), data.end() );
}

/*void selectionSort(auto& data)
{
	int i, j, minIndex,tmp;

	for(i = 0; i < data.size() - 1; i++)
	{
		minIndex = i;
	}

	for(j = i + 1; j < data.size(); j++)
*/

void bubbleSort(auto& data)
{ 
	for (int k = 1; k < data.size(); k++)
 
	for (int i = 0; i < data.size() -1 - k; i++)
 
	if (data[i] > data[i +1])
	{ 
		//pre-defined swap function 
		swap(data[i], data[i + 1]);  
	} //end if 
}
