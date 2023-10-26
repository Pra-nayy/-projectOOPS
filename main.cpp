#include <iostream> 
  
/* fstream header file for ifstream, ofstream,   fstream classes */ 
#include <fstream> 
  using namespace std;   
// Driver Code int main() 
{ 
    // Creation of ofstream class object     ofstream fout; 
      string line;   
    // by default ios::out mode, automatically deletes 
    // the content of file. To append the content, open in ios:app 
    // fout.open("sample.txt", ios::app)     fout.open("sample.txt");   
    // Execute a loop If file successfully opened     while (fout) {   
        // Read a Line from standard input         getline(cin, line);   
        // Press -1 to exit         if (line == "-1")             break;   
        // Write line in file         fout << line << endl; 
    } 
  
    // Close the File     fout.close();   
    // Creation of ifstream class object to read the file     ifstream fin;   
    // by default open mode = ios::in mode     fin.open("sample.txt");   
    // Execute a loop until EOF (End of File)     while (getline(fin, line)) { 
        
        // Print line (read from file) in Console         cout << line << endl; 
    } 
  
    // Close the file     fin.close(); 
  
    return 0; 
} 
Below is the implementation by using fstream class.  
 
• 	C++ 
/* File Handling with C++ using fstream class object */ 
/* To write the Content in File */ 
/* Then to read the content of file*/ 
#include <iostream> 
  
/* fstream header file for ifstream, ofstream,    fstream classes */ 
#include <fstream> 
  
using namespace std;   
// Driver Code int main() 
{ 
    // Creation of fstream class object     fstream fio; 
  
    string line; 
  
    // by default openmode = ios::in|ios::out mode 
    // Automatically overwrites the content of file, To append 
    // the content, open in ios:app 
    // fio.open("sample.txt", ios::in|ios::out|ios::app)     // ios::trunc mode delete all content before open     fio.open("sample.txt", ios::trunc | ios::out | ios::in);   
    // Execute a loop If file successfully Opened     while (fio) {   
        // Read a Line from standard input         getline(cin, line);   
        // Press -1 to exit         if (line == "-1")             break;   
        // Write line in file         fio << line << endl; 
    } 
  
    // Execute a loop until EOF (End of File)     // point read pointer at beginning of file     fio.seekg(0, ios::beg); 
      while (fio) {   
        // Read a Line from File         getline(fio, line);   
        // Print line in Console         cout << line << endl; 
    } 
  
    // Close the file     fio.close(); 
  
    return 0; 
} 
• 	C++ 
Q: write a single file handling program in c++ to reading and writing data on a file.   
#include<iostream> 
#include<fstream> 
    using namespace std; main() { 
      int rno,fee;       char name[50]; 
    
      cout<<"Enter the Roll Number:";       cin>>rno;         
      cout<<"\nEnter the Name:";       cin>>name;         
      cout<<"\nEnter the Fee:";       cin>>fee; 
          ofstream fout("d:/student.doc"); 
          fout<<rno<<"\t"<<name<<"\t"<<fee;   //write data to the file student 
          fout.close(); 
          ifstream fin("d:/student.doc"); 
          fin>>rno>>name>>fee;   //read data from the file student 
          fin.close(); 
          cout<<endl<<rno<<"\t"<<name<<"\t"<<fee; 
    
    return 0;    
} 
• 	C++ 
// Q: WA C++ file handling program to read data from the file called student.doc   
#include<iostream> 
#include<fstream> 
  using namespace std; 
  main() 
{ 
      int rno,fee;       char name[50]; 
          ifstream fin("d:/student.doc"); 
          fin>>rno>>name>>fee;   //read data from the file student 
          fin.close(); 
          cout<<endl<<rno<<"\t"<<name<<"\t"<<fee; 
         return 0;    
} 
