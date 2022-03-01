lli trailing_zero(lli n)
{

    if(n<0){
        return -1;
    }
         lli count=0;
        for( lli i=5; n/i>=1; i=i*5){
          count=count+n/i;
        }
    return count;
}
