
#include <iostream>
using namespace std;

int main ()

{
    
    char PackageOwned;
    int CostOfPackageOwned = 0;
    int JamsIncluded =0;
    int TotalOfJamsPurchased =0;
    int CostOfAdditionalJamsPurchased =0;
    int totalCost=0;
    
    
    cout << " Enter Package you own \n";
    cin >> PackageOwned;
    
    cout << "Total Jams Purchased this month \n";
    cin >> TotalOfJamsPurchased;
    
    if ( PackageOwned == 'a' || PackageOwned == 'A')
        
    {
        CostOfPackageOwned = 8;
        JamsIncluded = 2;
        CostOfAdditionalJamsPurchased = 5;
        
    }
    
    else if (PackageOwned == 'b' || PackageOwned == 'B' )
        
    {
        
        CostOfPackageOwned = 12;
        JamsIncluded = 4;
        CostOfAdditionalJamsPurchased = 4;
        
        
    }
    
    
    else if ( PackageOwned == 'c' || PackageOwned == 'C'  )
        
    {
        
        CostOfPackageOwned = 15;
        JamsIncluded = 6;
        CostOfAdditionalJamsPurchased = 3;
        
        
        
    }
    
    if (TotalOfJamsPurchased <= JamsIncluded)
        
        
    {
        totalCost = CostOfPackageOwned;
        
    }
    
    else
        
    {
        totalCost = CostOfPackageOwned + ( TotalOfJamsPurchased - JamsIncluded)* CostOfAdditionalJamsPurchased;
}
    
    cout << " total " << totalCost << endl;
    
    
        return 0;
    
    
}
