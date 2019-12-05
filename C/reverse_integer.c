# include <math.h>
# define INT_MAX 2147483647
# define INT_MIN -INT_MAX

int reverse(int x){
    int negative;
    if(x < 0){negative = x;} else{negative = 0;}
        if(x > INT_MAX || x < INT_MIN){return 0;} else{x = abs(x);}
        int reversed = 0;
        
        if(x > pow(2, 31) - 1){return 0;}
        
        while(x != 0) {
            if(reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && x % 10 > (INT_MAX % 10))){return 0;}
            
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
    
    if(reversed > pow(2,31) -1){return 0;}
    
    if(negative == 0){return reversed;} else{return -reversed;}
}
