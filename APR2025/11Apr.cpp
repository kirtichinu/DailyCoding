#include<iostream>
using namespace std;

class product{
    int prodId;
    string name;
    float price;

    public: 
    //accept data
    void accept()
    {
        cout<<"enter prod id: "<<endl;
        cin>>prodId;
        cout<<"Enter name: "<< endl;
        cin>>name;
        cout<<"enter price: ";
        cin>>price;
    }

    //to display data:

    void display()
    {
        cout<<"ID : "<<prodId<<", name : "<<name<<", price: "<<price<<endl;
    }
    friend void sortPrice(product [], int);
};
    //friend fnc to sort arr of prod using passing obj;

    void sortPrice(product p[],int n)
    {
        //simple bubble sort;
        for(int i=0; i< n-1; i++)
        {
            for(int j =0;j< n-1-i; j++)
            {
                if(p[j].price > p[j+1].price)
                {
                    product temp = p[j];
                    p[j]= p[ j+1];
                     p[j+1] = temp;
                }
            }
        }
        cout<<"products sorted by arr!!"<<endl;
    }
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;

    product obj[100];
    for(int i=0;i<n; i++)
    {
    obj[i].accept();
    }
    for(int i=0;i<n; i++)
    {
    obj[i].display();
    }
    sortPrice(obj,n);
    return 0;
}