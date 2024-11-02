
int kertoma(int n)
{
    if (n<0){
        return -1;
    }
    else{
        int tulos=1;
        for(int row=1; row<=n; row ++){
            tulos=row*tulos;
        }
        return tulos;
    }
}
