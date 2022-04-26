//Write a program in C++ that reads text from the keyboard and stores it in a file named “File1.txt”.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//void copyselc(ifstream& fp, ofstream& fp1):This function reads the contents of the file “File1.txt” and copies those lines from the file that begin with the character „#‟ to the file named “File2.txt”.
void copyselc(ifstream& fp, ofstream& fp1)
{
    string line;
    while(getline(fp,line))
    {
        if(line[0]=='#')
        {
            fp1<<line<<endl;
        }
    }
}

//void checksize(ifstream& fp1,ifstream& fp2):This function reads two files “File1.txt” and “File2.txt” and counts the number of characters in both the files. If the count of characters in both the files is same, then the function should print the message “Both Files are of the same size” else it should display “Size of the files is not same”. 
void checksize(ifstream& fp1,ifstream& fp2)
{
    int c1=0,c2=0;
    string line;
    while(getline(fp1,line))
    {
        c1+=line.size();
    }
    while(getline(fp2,line))
    {
        c2+=line.size();
    }
    if(c1==c2)
    {
        cout<<"Both Files are of the same size"<<endl;
    }
    else
    {
        cout<<"Size of the files is not same"<<endl;
    }
}

//void dispNumNames(ifstream& fp):Assuming that the file “File2.txt” may also contain numbers (1 to 5), this function will read the contents from the file and display the number names for any numbers encountered.
void dispNumNames(ifstream& fp)
{
    string line;
    while(getline(fp,line))
    {
        for(int i=0;i<line.size();i++)
        {
            if(line[i]>='1'&&line[i]<='5')
            {
                switch(line[i])
                {
                    case '1':
                        cout<<"One"<<endl;
                        break;
                    case '2':
                        cout<<"Two"<<endl;
                        break;
                    case '3':
                        cout<<"Three"<<endl;
                        break;
                    case '4':
                        cout<<"Four"<<endl;
                        break;
                    case '5':
                        cout<<"Five"<<endl;
                        break;
                }
            }
        }
    }
}

int main()
{
    ifstream fp("File1.txt");
    ofstream fp1("File2.txt");
    ifstream fp2("File2.txt");
    copyselc(fp,fp1);
    checksize(fp2,fp);
    dispNumNames(fp2);
    return 0;
}