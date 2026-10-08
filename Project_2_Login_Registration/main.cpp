#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
int  password_(string password){
    int hasnumber = 0;
    int hasalphabet =0;
    int hasspecial = 0;
    int capital=0;
    int count =0;
    for (int i= 0; i<password.length(); i++){
        if((isdigit(password[i]))){
            hasnumber =1;
        }
        else if(isalpha(password[i])){
            hasalphabet=1;
                         if(isupper(password[i])){
                capital=1;
        }
            
        }

        else {
            hasspecial=1;
            count++;
        }
    }
    if(hasnumber==1&&hasalphabet==1&& capital && hasspecial==1&&count==1&& (password.length()>=8)&& (password.length()<15)){
        return 0;
    }
        
    else{
        return 1;
    }
}
using namespace std;
int login(string username, string password ){
    string l_username, l_password;
    int flag=0;
    ifstream file("student.txt");
    if(!file){
        return -1;
    }
        else{
    while(file>>l_username>>l_password){
        if((l_username==username)&&l_password==password){
            flag=1;
        }
    }
    if(flag==1){
        file.close();
        return 0;
    }
    else{
        file.close();
        return 1;
    }}
    return 0;
}
int registration(string username, string password ){
    string r_username, r_password;
    ifstream file("student.txt");
    if(!file){
        
        ofstream file("student.txt", ios::app);
            file<<username<<" "<<password<<endl;
            file.close();
            return 0;
    }
        else{
    int flag = 0;
    while(file>>r_username>>r_password){
        if(username==r_username){
            flag=1;
        }
    }
    if(flag ==1){
        
        file.close();
        return 1;
    }
    else{
        ofstream rfile("student.txt", ios::app);
        rfile<<username<<" "<<password<<endl;
        
        rfile.close();
        file.close();
        return 0;
    }}
}
int main (){
        while(true){
    int choose;
    
    string username, password;
    cout<<"enter : \n";
    cout<<"1: for registration "<<endl;
    cout<<"2: for login"<<endl;
    cout<<"3: for exit"<<endl;    
    //doubt 1
    while(!(cin>>choose)){
        cout<<"incorrect! write again "<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
    }
                cin.ignore();
                cout<<"***note***\npassword should contain 🙃\n:8–14 characters + at least one lowercase alphabet + at least one capital + at least one number + exactly one special character"<<endl;
    int r ;
    int l;
    int pass;
    switch(choose){
        case 1: cout<<"enter username: "<<endl;
        cin>>username;
        cout<<"enter password: "<<endl;
        cin>>password;
                pass = password_(password );
                if(pass ==1){
                        cout<<"password not passed the criteria"<<endl;
                }
                else {
        
                r = registration(username, password );
        
         if(r==1){
            cout<<"username already exists "<<endl;
            
        }
        else{
            cout<<"registration done"<<endl;
            
        }}
        break;
        case 2: cout<<"enter username: "<<endl;
        cin>>username;
        cout<<"enter password: "<<endl;
        cin>>password;
                pass =password_(password);
                if(pass ==1){
                        cout<<"password not passed the criteria..."<<endl;
                }
                else if(pass ==0){
                l = login(username, password );
        if(l==0){
            cout<<"login successfully "<<endl;
            
        }
        else if(l==(-1)){
            cout<<"file not found "<<endl;
            
        }
       else if(l==1){
            cout<<"not registered, user not found "<<endl;
        
        }
        else{
            cout<<"interupt occur"<<endl;
        }}
        break;
            case 3: cout<<"thanks for using "<<endl;
                    return 0;
            
            
        default: cout<<"invalid option "<<endl;
    
    
    }

}
return 0;
}
