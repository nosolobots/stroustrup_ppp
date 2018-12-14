#include "std_lib_facilities.h"

main()
{
    constexpr char fin = '|';

    int a, b;
    
    while(true) {
        if(cin>>a>>b) {
            cout<<a<<" "<<b<<endl;                
        }
        else{
            cin.clear();

            char c;
            cin>>c;
            if(c=='|')
                break;
        }
    }
}

