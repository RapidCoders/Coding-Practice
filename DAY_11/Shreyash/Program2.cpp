// Q.2 Program to count the total number of vowels and consonants in a string.
// (vowels = a, e, i, o, u)
// (consonants = b, c, d, f, g, h, j, k, l, m, n, p, q, r, s, t, v, w, x, y, z)

// Input: This is a really simple sentence
// Output: Number of vowels: 10
//         Number of consonants: 17


#include<iostream>
#include<algorithm>
using namespace std;

void counter(string str)
{
  int vowelcounter = 0;
  int consonants = 0;
  for(char i: str){
    if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u')
    {
      vowelcounter++;
    }
    else if(i=='b'||i=='c'||i=='d'||i=='f'||i=='g'||i=='h'||i=='j'||i=='k'||i=='l'||i=='m'||i=='n'||i=='p'||i=='q'||i=='r'||i=='s'||i=='t'||i=='v'||i=='w'||i=='x'||i=='y'||i=='z')
    {
      consonants++;

    }
    else
    {
      continue;
    }
  }
  cout<<"Number of vowels: "<<vowelcounter<<endl<<"Number of vowels: "<<consonants;

}

int main() 
{
  string str;
  getline(cin,str);
  transform(str.begin(), str.end(), str.begin(), ::tolower);
  counter(str);
  return 0;
}
