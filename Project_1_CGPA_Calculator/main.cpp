#include <iostream>
#include <iomanip>
using namespace std;
struct student{
    string course_name ;
    int cred_hrs;
    int  grade;
    
};
/*int grading(int grade){
    return grade;
}*/
void printing (student &name);
float calculation (int &course, int &grad){
    student x;
    float ans=0;
    int grade = 0;
    grad=0;
    for(int i =1; i<=course;i++){
        
        cout<<"enter "<<i<<" course details"<<endl;
        printing(x);
        ans += ((x.cred_hrs)*(x.grade));
        grade += x.cred_hrs;
        
    
         cout<<endl;
    
    
    }
    grad = grade;
    float sol = ans/grade;
    
    return sol;
}

void printing (student &name){
    for(int i =0; i<10; i++){
        cout<<"*";
    }
    cout<<endl;
    cout<<"enter course name : "<<endl;
    while(!(cin>>name.course_name)){
        cout<<"invalid input!, enter again"<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
        
        }
    cin.ignore();
    cout<<"enter credit hrs : "<<endl;
    while((!(cin>>name.cred_hrs))||(name.cred_hrs<=0)){
        cout<<"invalid input !, enter again"<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
    }
    cin.ignore();
cout << "Enter grade number: " << endl;

while (true) {

    if (!(cin >> name.grade)) {
        cout << "Invalid input! Enter a number: ";

        cin.clear();
        cin.ignore(1000, '\n');
        continue;
    }

    if (name.grade == 10 ||
        name.grade == 9  ||
        name.grade == 8  ||
        name.grade == 7  ||
        name.grade == 6  ||
        name.grade == 5  ||
        name.grade == 0) {

        break;
    }

    cout << "Invalid grade! Try again: ";
}
    for(int i =0;i<10; i++){
        cout<<"*";
    }
    
    cout<<endl;
}

int main() {
    int course;
    int semester;
    int grad=0;
    int sum=0;
    float gpa_pro = 0;
    cout<<"*******NOTE*******"<<endl;
    cout<<"enter the grade number according to below"<<endl;
    cout<<" A+ : 10\n A : 9\n B+ : 8\n B : 7\n C : 6\n D : 5\n F : 0 "<<endl;
    cout<<"enter how many sem cgpa you want to calculate : "<<endl;
    while(!(cin>>semester)||(semester<=0)){
        cout<<"invalid input!, enter again"<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
        
        }
    cout<<endl;
    cin.ignore();
for(int i =0; i<semester; i++){
    cout<<"for sem "<<i+1<<endl;
    cout<<"#################"<<endl;
    cout<<"enter the number of courses : "<<endl;
    while(!(cin>>course)||(course<=0)){
        cout<<"invalid input!, enter again"<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
        
        }
    cin.ignore();
    float store= calculation(course,grad);
    cout<<"the gpa for sem " <<i+1<<" will be " <<store<<endl;
    cout<<endl;
    gpa_pro+= store*grad;
    
    
     sum+=grad;
    
}
    
    float abhi = gpa_pro/sum;
    cout << fixed << setprecision(2);
    if (semester!=1){
        cout<<"the cgpa will be : "<<abhi;
    }
    return 0;
}