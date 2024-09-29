#include<iostream>
using namespace std;
void printMenu();
void calculateAggregate(string name, float maticMarks, float Intermarks, float ecatMarks);
void compareMarks(string nameStd1, float ecatmarksStd1, string nameStd2, float ecatmarksStd2);
main()
{
    printMenu();
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    float matricmarks,fscmarks,ecatmarks;
    cout<<"Enter your obtained marks in matric out of 1100: ";
    cin>>matricmarks;
    cout<<"Enter yout obtained marks in intermediate part 1 out of 550: ";
    cin>>fscmarks;
    cout<<"Enter your marks in ecat out of 400: ";
    cin>>ecatmarks;
    calculateAggregate(name, matricmarks, fscmarks, ecatmarks);
    string namestd1,namestd2;
    float marksstd1, marksstd2;
    cout<<"Enter first student's name: ";
    cin>>namestd1;
    cout<<"Enter first student's ecat marks:";
    cin>>marksstd1;
    cout<<"Enter second student's name: ";
    cin>>namestd2;
    cout<<"Enter second student's ecat marks: ";
    cin>>marksstd2;
    compareMarks(namestd1, marksstd1, namestd2, marksstd2);
}
void printMenu()
{
    cout<<"                                                        ##   ## ###   ## ###### ##     ## ####### ######  ######## ###### ###### ##      ##"<<endl;
    cout<<"                                                        ##   ## ## #  ##   ##    #     #  ##      ##   ## ##         ##     ##     #    #"<<endl;
    cout<<"                                                        ##   ## ##  # ##   ##     #   #   ####### ######  ########   ##     ##       ##"<<endl;
    cout<<"                                                        ##   ## ##   ###   ##      # #    ##      ##  ##        ##   ##     ##       ##"<<endl;
    cout<<"                                                        ####### ##    ## ######     #     ####### ##   ## ######## ######   ##       ##"<<endl;  
    cout<<endl; 
    cout<<"                                                      ####### ####### ####### ##     ###### ######## ####### ###### ###### ####### ###   ##"<<endl;
    cout<<"                                                      ##   ## ##   ## ##   ## ##       ##   ##    ## ##   ##   ##     ##   ##   ## ## #  ##"<<endl;
    cout<<"                                                      ####### ####### ####### ##       ##   ##       #######   ##     ##   ##   ## ##  # ##"<<endl;
    cout<<"                                                      ##   ## ##      ##      ##       ##   ##    ## ##   ##   ##     ##   ##   ## ##   ###"<<endl;
    cout<<"                                                      ##   ## ##      ##      ###### ###### ######## ##   ##   ##   ###### ####### ##    ##"<<endl;
    cout<<endl;
    cout<<"                            ##     ## ####### ###   ## ####### ######## ####### ##     ## ####### ###   ## ######   ####### ##      ## ####### ###### ####### ##     ##"<<endl;
    cout<<"                            ## # # ## ##   ## ## #  ## ##   ## ##       ##      ## # # ## ##      ## #  ##   ##     ##        #    #   ##        ##   ##      ## # # ##"<<endl;
    cout<<"                            ##  #  ## ####### ##  # ## ####### ##  #### ####### ##  #  ## ####### ##  # ##   ##     #######     ##     #######   ##   ####### ##  #  ##"<<endl;
    cout<<"                            ##     ## ##   ## ##   ### ##   ## ##  #  # ##      ##     ## ##      ##   ###   ##          ##     ##          ##   ##   ##      ##     ##"<<endl;
    cout<<"                            ##     ## ##   ## ##    ## ##   ## ######## ####### ##     ## ####### ##    ##   ##     #######     ##     #######   ##   ####### ##     ##"<<endl;

} 
void calculateAggregate(string name, float matricmarks, float fscmarks, float ecatmarks)
{
    float aggregate=(matricmarks/1100*30)+(fscmarks/550*30)+(ecatmarks/400*40);   
    cout<<"Your Total Aggregate is: "<<aggregate<<endl;
}
void compareMarks(string namestd1, float marksstd1, string namestd2, float marksstd2 )
{
   if(marksstd1>marksstd2)
    {
      cout<<"The roll number 1 is: "<<namestd1<<endl;
      cout<<"The roll number 2 is: "<<namestd2;
    }
   else
    {
     cout<<"The roll number 1 is: "<<namestd2<<endl;
     cout<<"The roll number 2 is: "<<namestd1;
    }
}   