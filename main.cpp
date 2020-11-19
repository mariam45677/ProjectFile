#include <iostream>

using namespace std;

int main()
{
    FILE *MariamEssa;
    char d[] ="mariam";
    char c;
    MariamEssa = fopen(d,"w");
    do{

  cin.get(c);
  putc(c,MariamEssa);
    }
    while(c!='x');
    fclose(MariamEssa);
    return 0;
}
