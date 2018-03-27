#include <iostream>
#include <string>

using namespace std;

int main()
{
    // FCI – Programming 1 – 2018 - Assignment 2
// Program Name: morse code
// Last Modification Date: xx/xx/xxxx
// Author1 and ID and Group:eman ayman 20170067
// Author2 and ID and Group: xxxxx xxxxx
// Author3 and ID and Group: xxxxx xxxxx
// Teaching Assistant: hala abd el kader


 cout<< "please choose one for incoding or two for decode"<<endl;
 int p;
 cin>>p;
 if (p==1){

    string code [26]={  ".-",    "-...",     "-.-.",     "-..",      ".",
                        "..-.",  "--.",      "....",     "..",       ".---",
                        "-.-",   ".-..",     "--",       "-.",       "---",
                        ".--.",  "--.-",     ".-.",      "...",      "-",
                        "..-",    "...-",   ".--",      "-..-",     "-.--",     "--.."};
    cout <<"enter the text:"<<endl;
    string text ;
    cin.ignore();
    getline(cin,text);
    for (int i=0;i<text.size();i++) {

             if(text[i]>='A'&&text[i]<='Z')
             {
                text[i]=text[i]-'A'+'a';
             }

        if (text[i]==' ') {
            cout << "  ";
        }
        else {
                int idx=text[i]-'a';
                cout <<code[idx] << ' ';
        }
    }}
    else if (p==2) {
            string code [26]={  ".-",    "-...",     "-.-.",     "-..",      ".",
                        "..-.",  "--.",      "....",     "..",       ".---",
                        "-.-",   ".-..",     "--",       "-.",       "---",
                        ".--.",  "--.-",     ".-.",      "...",      "-",
                        "..-",    "...-",   ".--",      "-..-",     "-.--",     "--.."};

    string alpha [26]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    string morse = "", word = "";
    cout<<"enter the morse code"<<endl;
    cin.ignore();
    getline( cin , morse );
    int counter = 0 , x = 0;

    while ( counter < morse.length() ){
        while ( (int)morse[counter] >= 33 && (int)morse[counter] <= 127 ){
            word    += morse[counter];
            counter += 1;
            if ( counter == morse.length() ){ break; }
        }

        for (int i=0;i<26;i++){
            if ( code[i] == word ){ cout<<alpha[i];}
        }

        if ( morse[counter] == ' ' && morse[counter+1] == ' ' && morse[counter+2] == ' ' ){
            cout<<" ";
            counter=counter+2;
        }
        else { counter++; }
        word ="";
        }




    {
    if (morse[counter]==' '&&morse[counter+1]==' '&&morse[counter+2]==' '){
        cout<<" ";
        counter=counter+2;
    }
    else {counter++;}
    word ="";
}}
else {
    cout <<"your choose not correct";
}


   return 0;
}
