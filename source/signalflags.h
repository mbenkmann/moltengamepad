#ifndef SIGNALFLAGS_H
#define SIGNALFLAGS_H

//global flags, set by an interrupt signal.\

//stop the current action
extern volatile bool STOP_WORKING;

//shut down everything
extern volatile bool QUIT_APPLICATION;


#endif
