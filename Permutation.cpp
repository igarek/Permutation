#include <cstdlib>
#include <iostream>

using namespace std;
class Permutation
{
    protected:
        long n;
        char PermutationString[100];//bukvu ili kod elementa
        char indices[100];//i[K]
        char sortedPermutation[100];//masiv 012
        char sortedPermutationUse[100];// 1-vilne 0-vulu4ene
        long PermutationCode;
    public:
        Permutation();
        Permutation ( long newPermutationCode);
        Permutation (char*newPermutationString);
        Permutation ( char*indices, long newN);
        ~Permutation();
        void codeToIndices();
       // void indicesToCode():
        void stringToIndices();
        long getPermutationCode();
        void setPermutationCode(long newCode);
        char * getPermutationString (char*newPermutationString);
        char * getIndices();
        void setIndices (char* newIndices);
};

        Permutation::Permutation (long newPermutationCode)
{
        PermutationCode=newPermutationCode;      
}

        Permutation::Permutation (char*newPermutationString)
{
         int len=strlen(newPermutationString);
         newPermutationString=new char [len+1];
         strncpy(PermutationString,newPermutationString,len);
         PermutationString[len+1]=0;        
}


long Permutation::getPermutationCode()
{
     return PermutationCode();
     }
     void Permutation::setPermutationCode(long newPermutationCode)
     {
     PermutationCode=newPermutationCode;
     }
char*Permutation::getPermutationString();
{
char*copyPermutationString;
int len=strlen(PermutationString);
copyPermutationString=new char[len+1];
strncpy(copyPermutationString,PermutationString,len);
copyPermutationString[len]=0;
return copyPermutationString;
}
void Permutation::setPermutationStrig(char* newPermutationStrig)
{
if(PermutationString) delete[]PermutationString;
int len=strlen(newPermutationString);
PermutationString=new char[len+1];
strncpy(PermutationString,newPermutationString,len);
PermutationString[len]=0;    
}
char * getIndices();
{
char*copyIndices;
int len=strlen(Indices);
copyIndices=new char[len+1];
strncpy(copyIndices,Indices,len);
copyIndices[len]=0;
return copyIndices;
}
void setIndices (char* newIndices);
{
if(Indices) delete[]Indices;
int len=strlen(newIndices);
Indices=new char[len+1];
strncpy(Indices,newIndices,len);
Indices[len]=0;    
}
 system("PAUSE");
  return EXIT_SUCCESS;
}
