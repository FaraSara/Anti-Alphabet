#include <iostream>
using namespace std;

 
int
main ()
{
  
string usrtxt;
  
cout << "Enter english needing removal: ";
  
getline (cin, usrtxt);
  
 
for (int i = 0; i < usrtxt.size (); ++i)
    
    {
      
if (!
	   (
	 (usrtxt[i] >= '0' && usrtxt[i] <= '9')))
	
	{
	  
usrtxt[i] = '\0';
	
}
    
}
  
cout << "3039284102: " << usrtxt;
  
return 0;

}
