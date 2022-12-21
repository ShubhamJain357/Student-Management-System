#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class Node
{
    public:
        int roll_no;
        string name;
        float marks,percentage;
        Node *next;
};
class Linked_list
{
    public:
        Node *head=NULL;
        void Insert(){
            int r;
            string n;
            float m;
            cout<<"\n Enter Roll No. : ";
            cin>>r;
            getchar();
            cout<<"\n Enter Name : ";
            getline(cin,n);
            cout<<"\n Enter Total Marks(out of 500) : ";
            cin>>m;
            Node *new_node=new Node;
            new_node->roll_no=r;
            new_node->name=n;
            new_node->marks=m;
            new_node->percentage=m/500*100;
            if(head==NULL){
                head=new_node;
                head->next=NULL;
            }
            else{
                new_node -> next=NULL;
                Node *ptr=head;
                while(ptr->next != NULL){
                    ptr=ptr->next;
                }
                ptr->next = new_node;
            }
            cout<<"\n\n New Node Inserted Successfully ..."<<endl; 
        }
        void Search(){
            if(head==NULL){
                cout<<"List is empty ..";
            }
            else{
                int r;
                cout<<"\n\n Enter Roll_no to search : ";
                cin>>r;
                int found=0;
                Node *ptr=head;
                while(ptr!=NULL){
                    if(r==ptr->roll_no){
                        cout<<"\n\n Roll_No : "<<ptr->roll_no;
                        cout<<"\n\n Name : "<<ptr->name;
                        cout<<"\n\n Marks : "<<ptr->marks;
                        cout<<"\n\n Percentage : "<<ptr->percentage;
                        found++;
                    }
                    ptr=ptr->next;
                }
                if (found==0){
                    cout<<"\n\n Roll No "<<r<<" Not Found ...";
                }
            }
        }
        void Count(){
            if(head==NULL)
            {
                cout<<"\n\n Linked List is Empty ...";
            }
            else
            {
                int c=0;
                Node *ptr=head;
                while(ptr!=NULL){
                    ptr=ptr->next;
                    c++;
                }
                cout<<"\n\n Total number of nodes : "<<c;
            }
        }
        void Update(){
            if(head==NULL){
                cout<<"\n\n List is empty .."<<endl;
            }
            else{
                int r;
                cout<<"\nEnter Roll_no for Updation : ";
                cin>>r;
                int found=0;
                Node *ptr=head;
                while(ptr!=NULL){
                    if(r==ptr->roll_no){
                        int r;
                        string n;
                        float m;
                        cout<<"\n Enter Roll No. : ";
                        cin>>r;
                        cout<<"\n Enter Name : ";
                        cin>>n;
                        cout<<"\n Enter Total Marks(out of 500) : ";
                        cin>>m;
                        ptr->roll_no=r;
                        ptr->name=n;
                        ptr->marks=m;
                        ptr->percentage=m/500*100;
                        found++;
                        cout<<"\n\n Record Updated Succesfully ...";
                    }
                    ptr=ptr->next;
                }
                if (found==0){
                    cout<<"\n\n Roll No "<<r<<" Not Found ...";
                }
            }
        }
        void Delete(){
            if(head==NULL){
                cout<<"\n\n List is empty ..";
            }
            else
            {
                int r;
                cout<<"\n\n Enter Roll_no for Deletion : ";
                cin>>r;
                int found=0;
                if(r==head->roll_no){
                    Node *ptr=head;
                    head=head->next;
                    cout<<"\n\n Node Deleted Successfully ...";
                    delete ptr;
                    found++;
                }
                else{
                    Node *pre=head;
                    Node *ptr=head->next;
                    while(ptr!=NULL){
                        if(r==ptr->roll_no){
                            pre->next=ptr->next;
                            delete ptr;
                            cout<<"\n\n Node Deleted Successfully ...";
                            found++;
                            break;
                        }
                        pre=ptr;
                        ptr=ptr->next;
                    }
                }
                if (found==0){
                    cout<<"\n\n Roll No "<<r<<" Not Found ...";
                }
            }
        }
        void Show(){
            if(head==NULL){
                cout<<"\n\n List is empty ..";
            }
            else{
                Node *ptr=head;
                while(ptr!=NULL){
                    cout<<"\n\n Roll_No : "<<ptr->roll_no;
                    cout<<"\n\n Name : "<<ptr->name;
                    cout<<"\n\n Marks : "<<ptr->marks;
                    cout<<"\n\n Percentage : "<<ptr->percentage;
                    ptr=ptr->next;
                }
            }
        }

};

int main(){
    Linked_list obj;
    int choice;
    p:
        system("cls");
    cout<<"============================================";
    cout<<"\n       STUDENT MANAGEMENT SYSTEM \n";
    cout<<"============================================";
    cout<<"\n\n 1. Insert Record";
    cout<<"\n\n 2. Search Record";
    cout<<"\n\n 3. Count Nodes";
    cout<<"\n\n 4. Update Record";
    cout<<"\n\n 5. Delete Record";
    cout<<"\n\n 6. Show all Records";
    cout<<"\n\n 7. Exit";
    cout<<"\n\n Enter your Choice  : ";
    cin>>choice;
    switch (choice){
        case 1:
            system("cls");
            obj.Insert();
            break;
        case 2:
            system("cls");
            obj.Search();
            break;
        case 3:
            system("cls");
            obj.Count();
            break;
        case 4:
            system("cls");
            obj.Update();
            break;
        case 5:
            system("cls");
            obj.Delete();
            break;
        case 6:
            system("cls");
            obj.Show();
            break;
        case 7:
            exit(0);
        default:
            cout<<"\n\n Invalid Choice ... Please try again";   
    }
    getch();
    goto p;
}