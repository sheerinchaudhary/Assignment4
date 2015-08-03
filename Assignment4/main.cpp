//My name is Sheerin Chaudhary and this is my program for assignment 4 Summer 2015
//This program will compute a person's three credit scores
// it will introduce a function called validset to test whether invalid or valid
//and will classify function if so, and will have a function countrange
#include <iostream>
using namespace std;
void classify(int,int,int);
bool validset(int, int, int);
void findpattern(int,int,int);
void countranges( int, int, int);
int main()
{
    int a,b,c;
    int valid=0,invalid=0,totalgroup=0;
    char answer;
    
    do {
        cout<<"Enter the person's three credit scores"<<endl;
        cin>>a>>b>>c;
        
        if (validset(a,b,c)) {
            valid++;
            cout<<"this group is valid"<<endl;
            classify(a,b,c);
        }
        else {
            cout<<"this group is invalid"<<endl;
            invalid++;
        }
        
        
        cout<<"Type y to continue and n to stop: "<<endl;
        cin>>answer;
        
        totalgroup++;
        
        cout<<endl<<endl;
        
    }  while(answer=='y');
    
    cout<<"There are "<<totalgroup<<" groups in this program"<<endl;
    
    cout<<"There are "<<valid<<" valid groups"<<endl;
    
    cout<<"There are "<<invalid<<" invalid groups"<<endl;
    
    return 0;
    
}
//Function findpattern:
//Input:
//  parameter r,s,t which represent the three credit scores
//Process:
//  determine the pattern of the parameters in six different pattern cases
//Output:
//  The function will print out which case is true for the three parameters
void findpattern( int r, int s , int t)
{
    if(r==s && s==t) {
        cout<<"All three credit scores were the same"<<endl;
    }
    
    if(s>r && s<t) {
        cout<<"All the credit scores are going steadily upward"<<endl;
    }
    
    if(r>s && s>t) {
        cout<<"The credit scores are going steadily downward"<<endl;
    }
    
    if(s>r && s>t) {
        cout<<"The credit scores first went up, then went down"<<endl;
    }
    
    if(r>s && t>s) {
        cout<<"The credit scores first went down, then went up"<<endl;
    }
    
    if((r==s || s==t) && (r>t || t>r) ) {
        cout<<"There are two consecutive credit scores that are the same and the other value is smaller or larger than the both"<<endl;
    }
    
    return;
    
}
//Function countranges:
//Input:
//  Three parameters of q,r,s which represent the three credit scores
//Process:
//  Determines which four different ranges the parameters falls into
//Output:
//  Prints out the total number of the three parameters falls into each four range
void countranges (int q, int r, int s)
{
    int belowavg=0;
    int avg=0;
    int aboveavg=0;
    int excellent=0;
    
    if(q>=300 && q<=499)
        belowavg++;
    
    if(r>=300 && r<=499)
        belowavg++;
    
    if(s>=300 && s<=499)
        belowavg++;
    cout<<belowavg<<" is below average"<<endl;
    
    if(q==500)
        avg++;
    
    if(r==500)
        avg++;
    
    if(s==500)
        avg++;
    cout<<avg<<" average"<<endl;
    
    if(q>=501 && q<=700)
        aboveavg++;
    
    if(r>=501 && r<=700)
        aboveavg++;
    
    if(s>=501 && s<=700)
        aboveavg++;
    cout<<aboveavg<<" is above average"<<endl;
    
    if(q>=701 && q<=850)
        excellent++;
    
    if(r>=701 && r<=850)
        excellent++;
    
    if(s>=701 && s<=850)
        excellent++;
    cout<<excellent<<" is excellent"<<endl;
    
    return;
}
// Function validset
//Input:
//  Three parameters of x,y,z which are the three credit scores
//Process:
//  Wll use boolean variable  to find whether the parameters are in the 300 to 850 range
//  and set it to true if they do or else false
//Output:
//  Returns to main program if ranges from 300-850 as true and if not returns as false
bool validset(int x, int y, int z)
{
    
    if(x<300 || x>850)
        cout<<x<<" is invalid"<<endl;
    
    if(y<300 || y>850)
        cout<<y<<" is invalid"<<endl;
    
    if(z<300 || z>850)
        cout<<z<<" is invalid"<<endl;
    
    if(x>=300 && x<=850 && y>=300 && y<=850 && z>=300 && z<=850)
        return true;
    
    else
        return false;
    
}
//Function classify
//Input:
//  the parameter k,j, and g
//Process:
//  calls a function to determine the pattern of the parameter values
//  calls a function to determine the four different ranges the parameter values falls into
//Output:
//  Sends the pattern and the different ranges of the parameters values if the group is valid
// And if invalid, will print out which parameters are invalid

void classify(int k, int j, int g)
{
    
    findpattern(k,j,g);
    countranges(k,j,g);
    
    return;
}
