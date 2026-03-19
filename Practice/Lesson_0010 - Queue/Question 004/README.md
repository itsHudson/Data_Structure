# Queue Management System 
 - Write a program to simulate a queue management system (QMS) in a health center clinic.
 - The QMS should have the following function:
   - register() – to register and input the patient into the queue.
   - call() – to call the first patient in the current queue for treatment.
   - displayQueue() – to display all remaining patients in the queue.

```text
Patient registered: Ali
Patient registered: Siti
Patient registered: John

Remaining patients in queue:
Ali
Siti
John

Calling patient: Ali

Remaining patients in queue:
Siti
John
```

# Explanation
 - The Queue Management System (QMS) simulates patient registration and treatment orders in a clinic.
 - A queue data structure is used because it follows the First-In-First-Out (FIFO) principle.
 - The register() function inserts a patient into the queue, the call() function removes and displays the first patient for treatment, and the displayQueue() function shows all remaining patients waiting in the queue.
