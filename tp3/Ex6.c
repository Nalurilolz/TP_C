#include <stdio.h> 

  
int main() 
{ 
    int tab[5] = { 2, 3, 4, 10, 40 }; 
    int n = 5; 
    int x = 4, l =0, r = n-1;
    int mid;
    int result = -1;

    while (l <= r) { 
        // Check if x is present at mid
        mid = l + (r - l) / 2;
        if (tab[mid] == x) 
            result = mid; 
        // If x greater, ignore left half 
        if (tab[mid] < x) 
            l = mid + 1; 
        // If x is smaller, ignore right half 
        else
            r = mid - 1; 
    }
    if (result == -1) printf("Inexistant");
    else printf("index %d", result);  
} 