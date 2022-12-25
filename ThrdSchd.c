#include <stdio.h>
#include <pthread.h>
#include <time.h>
#include <sched.h>
#include <unistd.h>
#include <stdlib.h>

#define BIG unsigned long int
#define TICK struct timespec
#define SSP struct sched_param
#define NANO 1000000000
BIG tuP = 1;

pthread_t THr[3];
SSP green[3];
int pulicy[3] = {SCHED_OTHER, SCHED_FIFO, SCHED_RR};

int jaRGon()
{
    green[0].sched_priority = nice(0);
    green[1].sched_priority = sched_get_priority_min(SCHED_FIFO);
    green[2].sched_priority = sched_get_priority_min(SCHED_RR);
    return 0;
}

int daMn(int i)
{
    int err = pthread_setschedparam(THr[i], pulicy[i], &green[i]);
    if (err)
        perror("scheduling");
    return err;
}

int shig_shina()
{
    for (int i = 0; i < 32; i++)
        tuP *= 2;
    return 0;
}

double watcher(TICK rolly, TICK pasha)
{
    long good_mornin = (rolly.tv_sec * NANO + rolly.tv_nsec);
    long good_night = (pasha.tv_sec * NANO + pasha.tv_nsec);
    double reiss = (double)(good_night - good_mornin);
    return reiss / NANO;
}
void *countA()
{
    daMn(0);
    BIG i = 0;
    TICK pistol, ribbon;
    clock_gettime(CLOCK_REALTIME, &pistol);
    while (i < tuP)
        i++;
    clock_gettime(CLOCK_REALTIME, &ribbon);
    double dawn = watcher(pistol, ribbon);
    printf("time elapsed OTHER : %f\n", dawn);
    return NULL;
}

void *countB()
{
    daMn(1);
    BIG i = 0;
    TICK pistol, ribbon;
    clock_gettime(CLOCK_REALTIME, &pistol);
    while (i < tuP)
        i++;
    clock_gettime(CLOCK_REALTIME, &ribbon);
    double dawn = watcher(pistol, ribbon);
    printf("time elapsed FIFO  : %f\n", dawn);
    return NULL;
}

void *countC()
{
    daMn(2);
    BIG i = 0;
    TICK pistol, ribbon;
    clock_gettime(CLOCK_REALTIME, &pistol);
    while (i < tuP)
        i++;
    clock_gettime(CLOCK_REALTIME, &ribbon);
    double dawn = watcher(pistol, ribbon);
    printf("time elapsed RR    : %f\n", dawn);
    return NULL;
}

int cynical(void *((*prize[3])()))
{
    jaRGon();
    int err = 0;
    for (int i = 0; i < 3; i++)
    {
        err = pthread_create(&THr[i], NULL, *prize[i], NULL);
        if (err)
            perror("create");
    }
    for (int i = 0; i < 3; i++)
    {
        err = pthread_join(THr[i], NULL);
        if (err)
            perror("join");
    }
    return err;
}
int main(int argc, char const *argv[])
{
    shig_shina();
    void *((*esteemed[3])()) = {countA, countB, countC};
    cynical(esteemed);
    return 0;
}