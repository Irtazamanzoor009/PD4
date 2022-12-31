#include<iostream>
using namespace std;

void header();
void aggregate(string name, float matricmarks, float intermarks, float ecatmarks, float Total_aggregate);
void comparemarks(string namestd1, int ecatmarks1, string namestd2, int ecatmarks2 );


main()
{
	string name, namestd1, namestd2;
	int ecatmarks1, ecatmarks2;
	float matricmarks, intermarks, Total_aggregate, ecatmarks ;

	

	
header();
aggregate(name, matricmarks, intermarks, ecatmarks, Total_aggregate );
aggregate(name, matricmarks, intermarks, ecatmarks, Total_aggregate );
comparemarks(namestd1, ecatmarks1, namestd2, ecatmarks2 );

	

}

void header()
{
cout<<"########################################################## "<<endl;
cout<<"#                                                        # "<<endl;
cout<<"#                 UNIVERSITY OF ENGINEERING              # "<<endl;
cout<<"#                   AND TECHNOLOGY LAHORE                # "<<endl;
cout<<"#                                                        # "<<endl;
cout<<"#                                                        # "<<endl;
cout<<"########################################################## "<<endl;

}

void aggregate(string name, float matricmarks, float intermarks, float ecatmarks, float Total_aggregate )
{
	
	cout<<"Enter your name: ";
	cin>>name;

	cout<<"Enter Matric marks: ";
	cin>>matricmarks;

	cout<<"Enter Inter marks: ";
	cin>>intermarks;

	cout<<"Enter Ecat marks: ";
	cin>>ecatmarks;

	float percentage_inter = (intermarks*100)/550;
	float weightage_inter = percentage_inter * 0.4;
	

	float percentage_ecat = (ecatmarks*100)/400;
	float weightage_ecat = percentage_ecat * 0.5;
	

	float percentagematric = (matricmarks*100)/1100;
	float weightage_matric = percentagematric * 0.1;

	

	Total_aggregate = weightage_matric + weightage_inter + weightage_ecat;
	cout<<name<<" your aggregate is: "<<Total_aggregate<<endl;
	


}
void comparemarks(string namestd1, int ecatmarks1, string namestd2, int ecatmarks2 )
{
	cout<<"Comapre ecat marks by puttig name an ecat marks"<<endl;

	cout<<"Enter name: ";
	cin>>namestd1;
	cout<<"Enter ecat marks of one student: ";
	cin>>ecatmarks1;
	cout<<"Enter name: ";
	cin>>namestd2;
	cout<<"Enter ecat marks of other student: ";
	cin>>ecatmarks2;

	if(ecatmarks1 > ecatmarks2)
	{
		cout<<"1."<<namestd1<<endl;
		cout<<"2."<<namestd2<<endl;
	}
	if(ecatmarks1 < ecatmarks2)
	{
		cout<<"1."<<namestd2<<endl;
		cout<<"2."<<namestd1<<endl;
	}

}


