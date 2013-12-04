//
//  main.c
//  move
//
//  Created by Paulina Rubio Tarriba on 12/4/13.
//  Copyright (c) 2013 Paulina Rubio Tarriba. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    char buffer;
    int sourcef, targetf, n;
    
    while((n=read(sourcef,&buffer,1))!=0){
        write(targetf,&buffer,1);
    }
    close(sourcef);
    close(targetf);
    remove(argv[1]);
    return 0;
}

