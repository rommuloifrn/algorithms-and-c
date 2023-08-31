    
    
int fC(int n){
    int i,j,x=1,y;
    for ( i=0 ; i<n ; i++ ){
        y = 2;
        for ( j=1 ; j<=n ; j++ ){
            y+=j;
        }
        x*=y;
    }
    return x;
}

int fE(int n){
    int i,j,x=1,y=0;                                    // O(1)
    // i recebe n: se maior que zero, divide por dois
    for ( i=n ; i>0 ; i=i/2 ){
        y+=x;

        for ( j=0 ; j<n/2 ; j++ ){
            if ( n%j==0 )  
                y++;
        }

    }
    return y;
}