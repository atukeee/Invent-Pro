#include<iostream>
using namespace std;

main()
	{	
        string studName, cCode1, cCode2;
        int cUnit1, cUnit2, cGrade1, cGrade2, totUnits, totGrade1,totGrade2,totGrades;
        float gwa=0;

        cout<<"------------------------------------";
        
        cout<<"\nEnter the Student Name: ";
        cin>>studName; //the user will input his/her name
        cout<<"Enter the course code 1: ";
        cin>>cCode1; //the user will input the code for his first subject
        cout<<"Enter the course grade 1: ";
        cin>>cGrade1;//the user will input the grade for that first subject
        cout<<"Enter the course unit 1: ";
        cin>>cUnit1; //the user will input the number of the unit for that first subject
        
   
        cout<<"Enter the course code 2: ";
        cin>>cCode2; //the user will input the code for his second subject
        cout<<"Enter the course grade 2: ";
        cin>>cGrade2;//the user will input the grade for that second subject
        cout<<"Enter the course unit 2: ";
        cin>>cUnit2;//the user will input the number of the unit for that second subject
        
		//Computation for total Units, it is combine by the input of 1st unit and 2nd unit
        totUnits= cUnit1 + cUnit2;
        //Computation for the total of first grade, the grades are multiplied to the no. of course unit
        totGrade1 = cGrade1*cUnit1;
        //Computation for the total of second grade, the grades are multiplied to the no. of course unit
        totGrade2 = cGrade2*cUnit2;
        
        //Printing data in a tabular form
        cout<<("--------------------------------------------------");
        cout<<("\n\nCOURSE  Units Grade\n\n");
        cout<<("--------------------------------------------------");
		cout<<cCode1 <<"       " <<cUnit1 <<"     "<< cGrade1 <<"\n";
		cout<<cCode2 <<"       " <<cUnit2 <<"     "<< cGrade2 <<"\n";		

        //This is the sum of the total in the first and second grade
		totGrades = totGrade1 + totGrade2;
		//The total of the Grades will divided into the total of Units
        gwa = totGrades/totUnits;
        
        //It will display here the GWA of the student
        cout<<"\n General Weighted Average(GWA): "<<gwa;

        return 0;
}
