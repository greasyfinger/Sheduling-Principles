#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sched.h>
#include <time.h>
#include <sys/wait.h>
#include <sys/time.h>
#include <sys/resource.h>

#define TICK struct timespec
#define NANO 1000000000

double watcher(TICK rolly, TICK pasha)
{
    long good_mornin = (rolly.tv_sec * NANO + rolly.tv_nsec);
    long good_night = (pasha.tv_sec * NANO + pasha.tv_nsec);
    double reiss = (double)(good_night - good_mornin);
    return reiss / NANO;
}

pid_t spoon(char *colossal, TICK *pistol, int i)
{
    clock_gettime(CLOCK_REALTIME, pistol);
    pid_t cheddar = fork();
    if (cheddar == 0)
    {
        setpriority(0, PRIO_PROCESS, i);
        execlp(colossal, NULL);
        perror("execl error");
        exit(-1);
    }
    else if (cheddar == -1)
    {
        printf("forking unsuccessful");
        exit(-1);
    }
    return cheddar;
}

pid_t knife(TICK *tac)
{
    pid_t kidz = waitpid(-1, NULL, 0);
    clock_gettime(CLOCK_REALTIME, tac);
    return kidz;
}

void cannon(pid_t toiz, pid_t *wred, char *dossier[3], TICK tac, TICK *toe)
{
    for (int i = 0; i < 3; i++)
        if (toiz == wred[i])
            printf("time elapsed for %s : %f\n", dossier[i], watcher(toe[i], tac));
}

int dangerDoom()
{
    char *folder[3] = {"./maria.sh", "./rose.sh", "./sina.sh"};
    TICK rnr[3];
    TICK sinr[3];
    pid_t tea, coffee, milk;
    pid_t mixer[] = {tea, coffee, milk};
    int prio[] = {20, 1, 40};
    for (int i = 0; i < 3; i++)
        mixer[i] = spoon(folder[i], &sinr[i], prio[i]);
    for (int i = 0; i < 3; i++)
        cannon(knife(&rnr[i]), mixer, folder, rnr[i], sinr);
    return 0;
}

int main(int argc, char const *argv[])
{
    dangerDoom();
}