#include <iostream>
#include <string>

// Author --> Adarsh Maurya

using namespace std;

void scoreAnalysis(int m1, int m2, int m3, int m4, int m5, int maxMarks);

int main(){

    string welcomeMsg = "********Welcome to Score Analysis Service********";

    cout<<welcomeMsg<<endl;

    // taking inputs form user as per needs

    int maxStudents,maxSubjects,maxMarksPerSubject ;
    cout<<"Enter total no of students : ";
    cin>>maxStudents;
    cout<<"Max marks per subject  : ";
    cin>>maxMarksPerSubject;
    maxSubjects = 5;

    int totalMarks = maxMarksPerSubject * maxSubjects;

    // A 2-D array consisting the student data
    int marks[maxStudents][maxSubjects];

    // For Displaying the user entered data ; 
    cout<<"Total Students : "<<maxStudents<<endl;
    cout<<"Max marks/subject : "<<maxMarksPerSubject<<endl;
    cout<<"Total Marks : "<<totalMarks<<endl;


    // Looping and storing the student marks in order;
    for( int i = 0; i<maxStudents; i++){

        for (int j=0; j<maxSubjects; j++){
            cout<<"Enter Student "<<i+1<<" marks "<<j+1<<" : "<<endl;
            cin>>marks[i][j];

        }
        
    }

    char recheck;
    cout<<"Do you want to recheck? (y/n)";
    cin>>recheck;

    // Looping and accessing the student marks in order;
    if(recheck == 'y'){
        for( int i = 0; i<maxStudents; i++){

            for (int j=0; j<maxSubjects; j++){
                cout<<"Student "<<i+1<<" marks "<<j+1<<" : "<<marks[i][j]<<endl;
                // cin>>marks[i][j]; 


            }
        
        }

    }
    

    int stu;
    cout<<"Student score you want to see : ";
    cin>>stu;
    stu -= 1;
    
    // Indexing the marsk form 2-D Array;
    int m1, m2, m3, m4, m5;
    m1 = marks[stu][0];
    m2 = marks[stu][1];
    m3 = marks[stu][2];
    m4 = marks[stu][3];
    m5 = marks[stu][4];


    scoreAnalysis(m1, m2, m3,m4, m5,totalMarks );

    cout<<"Done! "<<endl;
    return 0;

}

void scoreAnalysis(int m1, int m2, int m3, int m4, int m5, int total)
{
    float percent;
    percent =  ((m1+m2+m3+m4+m5)*100.0)/total;
    
    // cout<<percent<<"%"<<endl;
    
    if(percent < 40.0 || m1 < 33 || m2 < 33|| m3 < 33|| m4 < 33|| m5 < 33){
        cout<<"RESULT : FAIL"<<endl;
        
        cout<<"Percentage : "<<percent<<"%"<<endl;
    }
    else{
        cout<<"RESULT : PASS"<<endl;

        cout<<"Percentage : "<<percent<<"%"<<endl;
    }



}

// tbd_;
/*
1. exception handling
2. check marks should not exceed 100 || or prescribed by user
3. On result anaylsis supplying each subj marks > 33 for only 100 m.m.

*/
