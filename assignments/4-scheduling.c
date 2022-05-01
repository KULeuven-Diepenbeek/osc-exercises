#include <stdio.h>
#include <stdlib.h> /* for exit() */
#include <unistd.h> /* for sleep() */

// typedefs
typedef struct ST_PCB {
  int arrival_time;
  char name[9];
  int duration;
  struct ST_PCB * next;
} T_PCB;


// forward declarations
T_PCB * read_tasks(void);
void show_tasks_lin(T_PCB * head);
void show_tasks_circ(T_PCB * head);
T_PCB * sort_tasks_on_arrival(T_PCB * head);


// main function
int main(void) {
  int time_quantum;
  
  // serial list of newly arrived tasks
  // used to enforce last-come, first-served
  T_PCB * new_queue = NULL;
  // circular list of active tasks
  // used to implement Round-Robin
  T_PCB * ready_queue = NULL;
  // extra state needed to switch tasks 
  // from new_queue to ready_queue when they're started
  T_PCB * ready_queue_prev = NULL;
  
  FILE *fh_outputfile;

  // show an emtpy list
  show_tasks_lin(new_queue);

  // read new tasks into the new_queue
  new_queue = read_tasks();

  // show the tasks
  show_tasks_lin(new_queue);

  // sort the tasks on arrival time
  new_queue = sort_tasks_on_arrival(new_queue);

  // show the tasks
  show_tasks_lin(new_queue);

  // open the OUTPUT file and validate the return value
  // TODO
  
  // the new_queue now contains tasks in their arrival order. 
  // This is a linear linked list used to implement the last-come, first-served logic.
  // When a task from the new_queue is scheduled, it is afterwards moved to the ready_queue.
  // This ready_queue is a circular linked list, used to implement the fair round-robin logic.

/* MODIFY BELOW HERE --------------------------------------------------------*/

/* MODIFY ABOVE HERE --------------------------------------------------------*/

  return 0;
}


/**
 * @brief      Sort tasks in the new queue on arrival time
 *
 * @param      head  The head of the list to be sorted
 *
 * @return     The head of the sorted list
 */

T_PCB * sort_tasks_on_arrival(T_PCB * head) {
  // look for inspiration in lab exercises like "The Ancient Library" !!
  return head;
}


/**
 * @brief      Shows the tasks in a non-circular list
 *
 * @param      head  The head of the non-circular list
 */
void show_tasks_lin(T_PCB * head) {
  T_PCB * ptr;
  int ID = 0;

  if(head == NULL ){
    printf("Linear list is empty\n");
  } else {
    ptr = head;
    printf("Printing linear list\n");
    printf("  ID |    TASK  |  duration | arrival time\n");
    printf("  ---+----------+-----------+-----------\n");

    while(ptr != NULL) {
      printf("  %2d | %s | %8d  | %5d\n", ID, ptr->name, ptr->duration, ptr->arrival_time);
      ptr = ptr->next;
      ID++;
    }
    printf("\n");
  }
}

/**
 * @brief      Shows the tasks in a circular list
 *
 * @param      head  An entry into the circular list
 */
void show_tasks_circ(T_PCB * head) {
  T_PCB * ptr;
  int ID = 0;

  if(head == NULL ){
    printf("Cirulcar list is empty\n");
  } else {

    ptr = head->next;
    while(ptr->next != head){
      ptr = ptr->next;
    }

    printf("Printing circular list\n");
    printf("  ID |    TASK  |  duration | arrival time\n");
    printf("  ---+----------+-----------+-----------\n");

    while(head != ptr) {
      printf("  %2d | %s | %8d  | %5d\n", ID, head->name, head->duration,\
       head->arrival_time);
      head = head->next;
      ID++;
    }
    printf("  %2d | %s | %8d  | %5d\n", ID, head->name, head->duration, head->arrival_time);
    printf("\n");
  }
}


/**
 * @brief      Reads tasks from file
 *
 * @return     Pointer to the linked list of PCB's
 */
T_PCB * read_tasks(void) {

  // open the INPUT "tasks.txt" file and validate the return value

  // the first line determines the number of jobs in the file

  // read all the jobs and create a PCB for each
  // All PCB's end up in a -linear- linked list

  // return the head to the newly created linear linked list
}
        
