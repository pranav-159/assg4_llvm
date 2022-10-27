int foo(){
    for(int i=0;i<5;i++){
        if(i==0)
            continue;
        else if(i==1)
            break;
        else if(i==2)
            return 3;
    }
    return 4;
}