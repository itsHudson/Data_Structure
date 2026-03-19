# 6.	Write a program that determines 5 student’s grades. The program will read three types of scores (quiz, mid-term, and final scores) and determine the grade based on the following rules. You should use the 2D Arrays to store the students’ records and you should display them as below table. Finally determine who is the highest scoring student and who is the lowest scoring student, and total students able to score for grade A or grade B result from the 2D arrays.
- if the average score =90% =>grade=A
- if the average score >= 70% and <90% => grade=B
- if the average score>=50% and <70% =>grade=C
- if the average score<50% =>grade=F

- The given score has not yet been converted to a percentage. Thus, you need to develop functions to convert those scores:
  - ChangeQuizScoreToPercentage() – return all students quiz percentage = 20 Marks
  - ChangeMidTermScoreToPercentage() – return all students mid term percentage = 50Marks
  - ChangeFinalScoreToPercentage() – return all students final percentage = 40 marks
  - Check_Grade() – return grade 

```text
Student Name   TP        Quiz(20)    Mid(50)       Final(30)     Total(100)    Grade   
---------------------------------------------------------------------------------------
Tan Chi Yong   TP001234  14.00       44.00         13.50         ?             ?       
Lim Jie Jing   TP001235  17.60       33.00         21.00         ?             ?              
Jason Leong    TP001236  9.00        27.50         19.80         ?             ?              
Monday Johnny  TP001237  4.40        33.00         10.20         ?             ?              
Holiday James  TP001238  11.00       44.00         28.20         ?             ?              



Student Name   TP        Quiz(20)    Mid(50)       Final(30)     Total(100)    Grade   
---------------------------------------------------------------------------------------
Tan Chi Yong   TP001234  14.00       44.00         13.50         71.50         B       
Lim Jie Jing   TP001235  17.60       33.00         21.00         71.60         B       
Jason Leong    TP001236  9.00        27.50         19.80         56.30         C       
Monday Johnny  TP001237  4.40        33.00         10.20         47.60         F       
Holiday James  TP001238  11.00       44.00         28.20         83.20         B       

Highest scoring student: Holiday James (TP001238), Total = 83.20, Grade = B
Lowest scoring student:  Monday Johnny (TP001237), Total = 47.60, Grade = F
Number of students with grade A: 0
Number of students with grade B: 3
