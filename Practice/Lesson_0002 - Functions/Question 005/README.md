# Develop an interactive program that will keep track of the weather forecast in a month. On any given day, the weather forecast may be hot, rainy, or cloudy. Your program should input the weather forecast for each day in the month and should display the number of hot, rainy, and cloudy days in a month. You should use a loop and a conditional structure to develop this program. Array is not allowed to be used in this question. 
- ConvertLetterString() - convert the letter in the month string 
- FindDaysInMonth() - compare the month and find the correct days 
- weatherReport() - : determine how many rainy day, sunny day and cloudy day in that month 
- displayReport() - display the result in a graph

```text
Enter your month (example: August 2019): February 2019

Enter weather data:
Day 1 : Enter H (Hot), R (Rainy), C (Cloudy): c
Day 2 : Enter H (Hot), R (Rainy), C (Cloudy): h
Day 3 : Enter H (Hot), R (Rainy), C (Cloudy): r
Day 4 : Enter H (Hot), R (Rainy), C (Cloudy): r
Day 5 : Enter H (Hot), R (Rainy), C (Cloudy): r
Day 6 : Enter H (Hot), R (Rainy), C (Cloudy): r
Day 7 : Enter H (Hot), R (Rainy), C (Cloudy): r
Day 8 : Enter H (Hot), R (Rainy), C (Cloudy): r
Day 9 : Enter H (Hot), R (Rainy), C (Cloudy): r
Day 10 : Enter H (Hot), R (Rainy), C (Cloudy): r
Day 11 : Enter H (Hot), R (Rainy), C (Cloudy): r
Day 12 : Enter H (Hot), R (Rainy), C (Cloudy): r
Day 13 : Enter H (Hot), R (Rainy), C (Cloudy): c
Day 14 : Enter H (Hot), R (Rainy), C (Cloudy): c
Day 15 : Enter H (Hot), R (Rainy), C (Cloudy): c
Day 16 : Enter H (Hot), R (Rainy), C (Cloudy): c
Day 17 : Enter H (Hot), R (Rainy), C (Cloudy): c
Day 18 : Enter H (Hot), R (Rainy), C (Cloudy): c
Day 19 : Enter H (Hot), R (Rainy), C (Cloudy): c
Day 20 : Enter H (Hot), R (Rainy), C (Cloudy): c
Day 21 : Enter H (Hot), R (Rainy), C (Cloudy): h
Day 22 : Enter H (Hot), R (Rainy), C (Cloudy): h
Day 23 : Enter H (Hot), R (Rainy), C (Cloudy): h
Day 24 : Enter H (Hot), R (Rainy), C (Cloudy): h
Day 25 : Enter H (Hot), R (Rainy), C (Cloudy): h
Day 26 : Enter H (Hot), R (Rainy), C (Cloudy): h
Day 27 : Enter H (Hot), R (Rainy), C (Cloudy): h
Day 28 : Enter H (Hot), R (Rainy), C (Cloudy): h

----------------------------------------
Weather report for February 2019
----------------------------------------
Number of hot days this month   : 9
Number of rainy days this month : 10
Number of cloudy days this month: 9

The analysis star design as below:
----------------------------------------
1  - 10  | **********
11 - 20  | **********
21 - 30  | ********

Do another? (Y/N): 
