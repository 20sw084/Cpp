#include<iostream>

#include<fstream>

#include<bits/stdc++.h>

#include<conio.h>

using namespace std;

class BufferBlock			//Class Buffer Block As Described

{

    protected:

    int BlockID;

    public:

    BufferBlock() {}

	virtual void getData(int pos, int sz,int buffer,int Buf )

	{

		ifstream Jin;

		Jin.open("mydatafile.txt");

		int BlockSize=4096;//Block Size: 4096

		int bufferpool[]={1,0,2,3,4,4,1,0,2,3,6,4,1,0,2};

		Jin.seekg(pos,ios::beg);

		if(Jin.is_open())

		{

			cout<<"My Data for Block "<<bufferpool[buffer]<<" is \"";

			for(int j=pos;j<pos+sz;j++)

			{

				

				char ch;

				

				Jin.get(ch);

				cout<<ch;

									}	

								cout<<"\" \nMy buffer block order from most recently used to LRU is:\n ";	

		}	

		cout<<"\t\t\t ";

		for (int j=buffer;j<=Buf;j++){

			cout<<bufferpool[j]<<" ,";

		}

		

	}

	virtual void setID(int id) 

	{

		BlockID=id;

	}

	virtual int getID() const

	{

		cout<<BlockID;

	}

};

class BufferBlockADT:public BufferBlock

{

    public:

	void getData(int pos, int sz,int buffer,int Buf )

	{

		ifstream Jin;

		Jin.open("mydatafile.txt");

		int BlockSize=4096;

		int bufferpool[]={1,0,2,3,4,4,1,0,2,3,6,4,1,0,2};

		Jin.seekg(pos,ios::beg);

		if(Jin.is_open())

		{

			cout<<"\nMy Data for Block "<<bufferpool[buffer]<<" is \"";

			for(int j=pos;j<pos+sz;j++)

			{

				

				char ch;

				

				Jin.get(ch);

				cout<<ch;

									}	

								cout<<"\" \nMy buffer block order from most recently used to LRU is:\n ";	

		}	

		cout<<"\t\t\t ";

		for (int j=buffer;j<=Buf;j++){//size of buffer pool is 5 Blocks

			cout<<bufferpool[j]<<" ,";

		}

		

	}

	void setID(int id) 

	{

		BlockID=id;

	}

	int getID() const

	{

		cout<<BlockID;

	}

};

// Function to find Buffers using indexes

int LRUBufferPool(int Buffer[], int n, int capacity)

{

	// To represent set of current Buffer. We use

	// an unordered_set so that we quickly check

	// if a Buffer is present in set or not

	//unordered_set<int> s;



	// To store least recently used indexes

	// of Buffer.

	//unordered_map<int, int> indexes;



	// Start from initial Buffer

	int Buffer_faults = 0;

	for (int i=0; i<n; i++)

	{

		// Check if the set can hold more Buffers

		if ( capacity!=0)

		{

			// Insert it into set if not present

			// already which represents Buffers

			if (Buffer[i]==Buffer[-1])

			{

				(Buffer[i]=Buffer[-3]);



				// increment Buffer

				Buffer_faults++;

			}



			// Store the recently used index of

			// each Buffer

			Buffer[i] = i;

		}



		// If the set is full then need to perform lru

		// i.e. remove the least recently used Buffer

		// and insert the current Buffer

		else

		{

			// Check if current Buffer is not already

			// present in the set

			if (Buffer[i] == 0)

			{

				// Find the least recently used pages

				// that is present in the set

				int lru = INT_MAX, val;

				for (int it=0; it!=9; it++)

				{

					if (lru!=0)

					{

						lru = Buffer[3];

						

					}

				}



				// Increment page faults

			}



			// Update the current page index

			Buffer[i] = i;

		}

	}



	return 0;

}



int main()

{

    BufferBlockADT BBADT1;

    BBADT1.getData(5030,10,0,4);

    BBADT1.setID(5030);

  	cout<<"\n\n\n";

    

    BufferBlockADT BBADT2;

  BBADT2.getData(16500,10,5,9);

    BBADT2.setID(16500);

   cout<<"\n\n\n";

    

    BufferBlockADT BBADT3;

   BBADT3.getData(24640,10,10,14);

   BBADT3.setID(24640);

	cout<<"\n\n\n";

	getch();

}
