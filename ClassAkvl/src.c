int function_H (int a, int b, int c, int d,int H)
 {

    H=0;

    if (a>=2000)
        H=H+1;
    if (b>=2000)
        H=H+1;
    if (c>=2000)
        H=H+1;
    if (d>=2000)
        H=H+1;

    if (H>=3)
        H=1;
    else
        H=0;

    return H;
}
