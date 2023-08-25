#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;


class Library{
    public:
    int id;
    char name[100];
    char authorName[100];
    char studentName[100];
    int price;
};
int main(){
    Library lib[20];
    int input=0;
    int count=0;
    
    while(input!=5){
      start:
      cout<<"**********************************************************************************************************************************"<<endl;
      cout<<"Enter 1 to input details like id, name, author, student, price, pages"<<endl;
      cout<<"Enter 2 to display details"<<endl;
      cout<<"Enter 3 to quit"<<endl;
      
      cin>>input;
      switch(input)
      {
        case 1: 
        cout<<"***Remember to enter '$' sign to end the names ****"<<endl<<endl;
            cout<<"Enter Book Id"<<endl;
            cin>>lib[count].id;
            cout<<"Enter Book Name"<<endl;
            cin.getline(lib[count].name,100,'$');
            cout<<"Enter Book's Author Name"<<endl;
            cin.getline(lib[count].authorName,100,'$');
            cout<<"Enter Student's Name"<<endl;
            cin.getline(lib[count].studentName,100,'$');
            cout<<"Enter Price of the book"<<endl;
            cin>>lib[count].price;
            count++;
            break;
        case 2:
            if(count==0){
                cout<<"No entries Found"<<endl;
                break;
            }
            else{
                for(int i=0;i<count;i++){
                    cout<<"Book Id: "<<lib[i].id<<endl;
                    cout<<"Book Name: "<<lib[i].name<<endl;
                    cout<<"Book's Author's: "<<lib[i].authorName<<endl;
                    cout<<"Student's Name: "<<lib[i].studentName<<endl;
                    cout<<"Book Price: "<<lib[i].price<<endl;
                }
                break;
            }
        case 3:
            exit(0);
            break;
        default:
            cout<<"You Have Entered The Wrong Value, Please Try Again"<<endl;
            goto start;
    }
       
    }

}