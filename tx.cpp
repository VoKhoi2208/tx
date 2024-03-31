#include <bits/stdc++.h>
using namespace std;
string nameuser="Guest";
long long sodu;
long long nap;
bool ktmoney(int n){
    if(sodu>0){
        return true;
    }
    else{
        return false;
    }
}
void welcome(){
    cout<<"===============================";
    cout<<endl<<"    WELCOME TO MINIGAME"<<endl;
    cout<<"Hi "<<"'"<<nameuser<<"' "<<"welcome"<<endl;
    cout<<"Your balance: "<<sodu<<endl;
}
void homepage(){
    cout<<"=============================";
    cout<<endl<<"ENTER YOUR CHOOSE";
    cout<<endl<<"1).Setup profile";
    cout<<endl<<"2).Check your balance";
    cout<<endl<<"3).Deposit money";
    cout<<endl<<"4).Start game";
    cout<<endl<<"5).Exit";
    cout<<endl<<"6).Credit";
    cout<<endl<<"WARNING!!! PLEASE READ THE CONTENT IN THE CREDIT";
    cout<<endl<<"==============================="<<endl;
}
void setupprofile(){
    cout<<endl<<"==============================="<<endl;
    cout<<"SET UP PROFILE ZONE"<<endl;
    cout<<"Hi welcome to Setup profile page"<<endl;
    cout<<"Let's tell us your name";
    cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    cout<<" ";
    getline(cin,nameuser);
    cout<<endl<<"I will remember,your name is "<<nameuser<<endl;
    cout<<"Thank you so much"<<endl<<endl;
}
void checkmoney(){
    cout<<endl<<"The current amount is: "<<sodu<<"$";
    cout<<endl<<endl;
    cout<<endl<<"==============================="<<endl;
}
void addmoney(){
    cout<<endl<<"==============================="<<endl;
    cout<<"     BANK"<<endl;
    cout<<"Enter amount you want add to your account "<<endl;
    cin>>nap;
    cout<<"Successful manipulation"<<endl;
    cout<<"Received successfully "<<nap<<"$ into "<<nameuser<<" accout";
    sodu+=nap;
    cout<<"Total current balance "<<sodu<<"$";
    cout<<endl<<endl;
}
void credit(){
        cout<<endl;
        cout<<"==================================";
        cout<<endl<<"          **CREDIT PAGE**";
        cout<<endl<<"    ***PLEASE READ IT CAREFULLY***";
        cout<<endl<<"_____";
        cout<<endl<<"1).This project is just for fun.#J4F";
        cout<<endl<<"2).The project has NO incentive to gamble";
        cout<<endl<<"3).Project written by K at NQD High School FTG"<<endl;
        cout<<"=================================="<<endl<<endl<<endl;
}
void pl(){
    cout<<endl;
        cout<<"=================================="<<endl;
        cout<<"Checking your balance"<<endl;
        if(ktmoney(sodu)==0){
            cout<<"The balance is not enough";
            cout<<endl<<"Redirect to Home";
            cout<<endl<<"=================================="<<endl<<endl;
            return homepage();
        }else{

            while(sodu!=0){
                    int round1=0;
                if(sodu>0){
                        round1++;
                    cout<<"Round: "<<round1<<endl;
                    cout<<"Balance: "<<sodu<<endl;
                    cout<<"Enter value you want to bet: ";
                    int bet=0;
                    int c1=0,c2=0,c3=0;
                    cin>>bet;
                    int s=0;
                    int roll=0,roll2=0,roll3=0;
                    c1=rand()%1000+1;
                    c2=rand()%1000+1;
                    c3=rand()%1000+1;

                    s=c1+c2+c3;
                    cout<<"Roll 1 "<<c1<<endl;
                    cout<<"Roll 2 "<<c2<<endl;
                    cout<<"Roll 3 "<<c3<<endl;
                    cout<<"Sum all round: "<<s;
                    if(s%2==0){
                        cout<<endl<<"YOU WIN";
                        sodu=sodu+(bet*2);
                    }
                    else{
                        sodu-=bet;
                        if(sodu<0){
                            cout<<endl<<"Your amount to low,Return Home";
                            return homepage();
                        }
                    }
                }
            }

        }
}
int main(){
    welcome();
    homepage();
    int luachon=0;
    cout<<"Enter your choose: ";
    cin>>luachon;
    while(luachon>6){
        cout<<"__________"<<endl;
        cout<<"Wrong syntax!"<<endl;
        cout<<"Your choice is "<<luachon<<endl;
        cout<<"You will be redirected to Home";
        cout<<endl<<"Your choices range from 1 to 6 only"<<endl<<endl;
        cout<<endl<<"You have been redirected to Home,choose again"<<endl<<endl;
        return main();
    }

    while(luachon<1){
        cout<<"__________"<<endl;
        cout<<"Wrong syntax!"<<endl;
        cout<<"Your choice is "<<luachon<<endl;
        cout<<"You will be redirected to Home";
        cout<<endl<<"Your choices range from 1 to 6 only"<<endl<<endl;
        cout<<endl<<"You have been redirected to Home,choose again"<<endl<<endl;
        return main();
    }
    if(luachon==1){
        setupprofile();
        return main();
    }
    if(luachon==2){
        checkmoney();
        return main();
    }
    if(luachon==3){
        addmoney();
        return main();
    }
    if(luachon==5){
        cout<<"Thank you,see you later"<<"'"<<nameuser<<"'";
        cout<<endl<<endl<<endl<<endl;
        return 0;
    }
    if(luachon==6){
        credit();
        main();

    }

    if(luachon==4){
        pl();
    }

}
