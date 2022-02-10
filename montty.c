#include <stdio.h>
#include <hardware.h>
#include <terminals.h>
#include <threads.h>	/* COMP 421 threads package definitions */

extern void 
ReceiveInterrupt(int term) {
    Declare_Monitor_Entry_Procedure();
}

extern void 
TransmitInterrupt(int term) {
    Declare_Monitor_Entry_Procedure();
}


extern int
WriteTerminal(int term, char *buf, int buflen) {
    Declare_Monitor_Entry_Procedure();
    return 0;
}

extern int
ReadTerminal(int term, char *buf, int buflen) {
    Declare_Monitor_Entry_Procedure();
    return 0;
}

extern int
InitTerminal(int term) {
    Declare_Monitor_Entry_Procedure();
    if (InitHardware(term) == -1) {
        return -1;
    }
    return 0;
}

extern int
TerminalDriverStatistics(struct termstat *stats) {
    Declare_Monitor_Entry_Procedure();
    return 0;
}

extern int
InitTerminalDriver() {
    Declare_Monitor_Entry_Procedure();
    return 0;
}