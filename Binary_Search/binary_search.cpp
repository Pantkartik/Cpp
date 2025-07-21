/*
    The logic is that the array should be in a monotonous fashion either in increasing or in decreasing manner 
    // We follow following steps 


    1. first find mid    mid= (start+end)/2    
    2. compare the mid with the key         
                    //  if the key is equal to the mid return index; 
                    //  if key not equal to the mid than follow next step 
    3. check whether the key greater or smaller than the mid 
                    // if key smaller than start=mid-1    and we choose the left array part 
                    // if the key is larger start=mid+1   and we choose the right array part 
    4. find the mid 
    5. compare the mid 

    .... n times till key == mid   return mid[index];

*/


