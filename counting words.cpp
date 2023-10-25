#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    cout<<"\t\t\t\t\t Welcome!!!It helps you to count the number of words in your file."<<endl;
   char filename[30], ch, str[1000];
   int total=0, i=0, total_word=0;
   ifstream fp;
   cout<<"Enter the Name of File: ";
   cin>>filename;
   fp.open(filename, ifstream::in);
   if(!fp)
   {
      cout<<endl<<"File doesn't exist or Access denied!";
      return 0;
   }
   while(fp>>noskipws>>ch)
   {
      str[total] = ch;
      total++;
   }
   fp.close();
   str[total]='\0';
   while(str[i]!='\0')
   {
      if(str[i]=='\n')
      {
         if(str[i+1]!='\0' && str[i+1]!=' ')
            total_word++;
         i++;
      }
      else if(str[i]!=' ')
         i++;
      else
      {
         if(str[i+1]!='\0' && str[i+1]!=' ')
            total_word++;
         i++;
      }
   }
   cout<<endl<<"Total Words = "<<total_word;
   cout<<endl;
   return 0;
}
