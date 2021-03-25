/*
Sr.No	Signal & Description
1	
SIGABRT

Abnormal termination of the program, such as a call to abort.

2	
SIGFPE

An erroneous arithmetic operation, such as a divide by zero or an operation resulting in overflow.

3	
SIGILL

Detection of an illegal instruction.

4	
SIGINT

Receipt of an interactive attention signal.

5	
SIGSEGV

An invalid access to storage.

6	
SIGTERM

A termination request sent to the program.
*/

#include <iostream>
#include <csignal>

using namespace std;

void signalHandler(int signum){
    cout << "Interrupt signal (" << signum << ") received" << endl;
    exit(signum);
}

int main(){
    int i = 0;
    signal(SIGINT, signalHandler);

    while (++i)
    {
        cout << "Going to sleep……";
        if (i == 3)
        {
            raise(SIGINT);
        }
        // sleep(1);
    }   

    return 0;
}