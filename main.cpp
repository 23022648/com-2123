#include <iostream>

using namespace std;

int main()
{
    double merchandiseCost;
    double storeRent;
    double employeesSalary;
    double ectricityCost;

    cout<<"Enter the merchandiseCost"<<endl;
    cin>>merchandiseCost;
    cout<<"Enter the storeRent"<<endl;
    cin>>storeRent;
    cout<<"Enter the employeesSalary"<<endl;
    cin>>employeesSalary;
    cout<<"Enter the electrictyCost"<<endl;
    cin>>ectricityCost;

    double totalexpenses = merchandiseCost+storeRent+employeesSalary+ectricityCost;
    cout<<"the total cost is : "<< totalexpenses<<endl;
    double desiredNetPofit = merchandiseCost*0.1;
    cout<<"the profit deired is :  "<<desiredNetPofit<<endl;
    double newNetProfit = desiredNetPofit/0.85;
    cout<<"the new profit :  "<<newNetProfit<<endl;
    double markUp = (newNetProfit+totalexpenses)/merchandiseCost;
    cout<<"The markup is : "<<markUp<<endl;


    return 0;
}
