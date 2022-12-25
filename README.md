
# Sheduling Principles

Sheduling Threads and Process and timing them in C. Project for Operating Systems
course, aimed to better understanding sheduling of threads and processes in
linux systems.

## Thread Sheduling

ThrdSchd.c creates 3 threads all of which run the same fuction of counting from 1 to 2^32. Linux 
schduling implements a [CFS](https://docs.kernel.org/scheduler/sched-design-CFS.html) which gives SCHED_OTHER
the process which are default a priority value from 100-140 and if specifcally set SCHED_FIFO and SCHED_RR
are given a higher priority.

Implemented on a 2 core artix virtual machine, FIFO and RR take about the same time while
OTHER whihc is started after FIFO and RR end takes about double their time.

## Process Scheduling

prcsSchd.c creates 3 process by calling fork in a while loop and calling execl to run bash scripts
in each of the processes, the bash scripts can be changed to do anything but as per the assignement requirements were
to compile the artix kernel.

set_priority is used to set the priority of the processes, lower value gives higher priority, hence higher priority task finish first.
Tasks can't run parallely as there is only one kernel hence resource contraints.


## Deployment

call make to create the executables

To run this prcsSchd,
change the bash file or add other C files to the execl called in the function to run
a processes of your choice.

ThrdSchd can run without any changes, however function can be changed to
further study the thread scheduling.




## Appendix

histogrammer.py is a basic python plot program that you may use to plot
the graph for time vs priority for the threads of even the processes for visual 
representation of data.
