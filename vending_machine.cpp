#include <iostream>
using namespace std;
int main(){
    enum item{Cola=1,Chips,Candy};
    cout<<"Enter 1 for Cola . \nPrize --> 2$\nEnter 2 for Chips .\nPrize --> 1.5$\nEnter 3 for Candy .\nPrize --> 0.5$\nEnter 0 for exit"<<endl;
    cout<<endl;
    cout<<endl;
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    float price = 0.00;
    if (choice != 0)
    {
        while (choice !=0)
        {
            item selected_item = (item)choice;
            switch (selected_item)
            {
                case Cola:
                    cout << "You selected Cola." << endl;
                    price = 2.00 + price ;
                    break;
                case Chips:
                    cout << "You selected Chips." << endl;
                    price = 1.50 + price ;
                    break;
                case Candy:
                    cout << "You selected Candy." << endl;
                    price = 0.50 + price ;
                    break;
                default:
                    cout<<"Invalid Input"<<endl;
                    break;
            }
            cout<<"Enter 1 for Cola . \nPrize --> 2$\nEnter 2 for Chips .\nPrize --> 1.5$\nEnter 3 for Candy .\nPrize --> 0.5$\nEnter 0 for exit"<<endl;
            cout<<endl;
            cout<<endl;
            cout << "Enter your choice: ";
            cin >> choice;
        }
    }   
    if (price>0){
        cout<<"Your total price is : "<<price<<endl;
        cout<<"Please pay First . "<<endl;
        float money_inserted; 
        float total_paid = 0.0;
        while (total_paid != price){
            cout<<"enter your money : ";
            cin>>money_inserted;
            total_paid = total_paid + money_inserted;
            if (total_paid<price){
                cout<<"Please give total money"<<endl;
                cout<<"We need "<<(price-total_paid)<<" $ more ."<<endl;
            }
            else if (total_paid>price){
                cout<<"You Give me too much . We return this as change "<<endl;
                cout<<"We give "<<(total_paid-price)<<" $ as change ."<<endl;
                break;
            }
            else if (total_paid==price){
                cout<<"Thanking You For Buying . "<<endl;
            }
        }
    }
    cout<<"Thanking You For Buying . "<<endl;
    cout<<"Thank You For Visiting . "<<endl;
    return 0;
}
