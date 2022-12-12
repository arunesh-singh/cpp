#include "bits/stdc++.h"
using namespace std;

void disp(vector<int> x, vector<int> y, vector<int> res){
    cout << "x\ty\tres"<<endl;
    for (int i = 0; i < 4; i++)
        cout << x[i] << "\t" << y[i] << "\t" << res[i]<<endl;
}

void conjuction(vector<int> x, vector<int> y)
{
    vector<int> res;
    for (int i = 0; i < 4; i++)
    {
        res.push_back(x[i] * y[i]);
    }

    disp(x,y,res);
}

void disjunction(vector<int> x, vector<int> y)
{
    vector<int> res;
    for (int i = 0; i < 4; i++)
    {
        res.push_back(x[i] || y[i]);
    }
    disp(x,y,res);
}

void negation(vector<int> x, vector<int> y)

{
    vector<int> res;
    for (int i = 0; i < 4; i++)
    {
        res.push_back(!x[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        res.push_back(!y[i]);
    }
    
    disp(x,y,res);
}

void nAND(vector<int> x, vector<int> y)
{
    vector<int> res;
    for (int i = 0; i < 4; i++)
    {
        res.push_back(!(x[i] * y[i]));
    }
    disp(x,y,res);
}

void nOR(vector<int> x, vector<int> y)
{
    vector<int> res;
    for (int i = 0; i < 4; i++)
    {
        res.push_back(!(x[i] || y[i]));
    }

    disp(x,y,res);
}

void xOR(vector<int> x, vector<int> y)
{
    // odd 1's counter , this valid for 2 input xOR gate
    vector<int> res;
    for (int i = 0; i < 4; i++)
    {
        if (x[i] == y[i])
            res.push_back(0);
        else
            res.push_back(1);
    }
    disp(x,y,res);
}

void xNOR(vector<int> x, vector<int> y)
{
    vector<int> res;
    for (int i = 0; i < 4; i++)
    {
        if (x[i] == y[i])
            res.push_back(1);
        else
            res.push_back(0);
    }
    disp(x,y,res);
}

void biConditional(vector<int> x, vector<int> y)
{
    vector<int> res;
    for (int i = 0; i < 4; i++)
    {
        res.push_back((!x[i] + y[i]) * (!y[i] + x[i]));
    }

    disp(x,y,res);
}

void conditnl(vector<int> x, vector<int> y)
{
    vector<int> res;
    for (int i = 0; i < 4; i++)
    {
        res.push_back(!x[i] || y[i]);
    }
    
    disp(x,y,res);
}

void menu(vector<int> x, vector<int> y)
{
    cout << "--------------------------------------------------------------" << endl;
    cout << "Please select an operation from the list below:" << endl;
    cout << "1.Conjuction - AND" << endl;
    cout << "2.Disjunction - OR " << endl;
    cout << "3.Negation " << endl;
    cout << "4.NAND " << endl;
    cout << "5.NOR" << endl;
    cout << "6.Exclusive OR " << endl;
    cout << "7.Exclusive NOR" << endl;
    cout << "8.Conditional " << endl;
    cout << "9.Bi - Conditional " << endl;
    cout << "0.Exit" << endl;
    cout << "-------------------------------------------------------------------" << endl;

    int ch;
    cout<<"Enter your choice : ";
    cin>>ch;

    switch (ch)
    {
    case 1:
        conjuction(x,y);
        break;
    
    case 2:
        disjunction(x,y);
        break;
    
    case 3:
        negation(x,y);
        break;

    case 4:
        nAND(x,y);
        break;
    
    case 5:
        nOR(x,y);
        break;
    
    case 6:
        xOR(x,y);
        break;
    
    case 7:
        xNOR(x,y);
        break;
    
    case 8:
        conditnl(x,y);
        break;
    
    case 9:
        biConditional(x,y);
        break;
    
    case 0:
        return;
    
    default:
        cout<<"Invalid Input\n";
        break;
    }

    return menu(x,y);
}

int main(){

    vector<int> x(4);
    vector<int> y(4);

    cout << "\nEnter values of x:";
    for (auto &i : x)
    {
        cin >> i;
    }
    cout << "Enter values of y:";
    for (auto &i : y)
    {
        cin >> i;
    }

    menu(x,y);
}