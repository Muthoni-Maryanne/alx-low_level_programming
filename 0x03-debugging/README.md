# **0x03. C - Debugging**

The concepts discussed in this include: what is debugging?, the process, techniques e.g tracing, interactive, activity, postmortem, remote, wolf fence algorithm etc., anti-debugging, and rubber duck debugging.

## Resources 

1). [Debugging](https://en.wikipedia.org/wiki/Debugging)

2). [Rubber duck debugging](https://www.thoughtfulcode.com/rubber-duck-debugging-psychology/)

## Tasks

**Task 0:** [positive_or_negative.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x03-debugging/positive_or_negative.c)  is a function that tests whether a number is negative or positive.

![0](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/7e517aea-e809-481b-9bcf-545a045bf7d8)

Based on the main.c file above, create a file named 0-main.c. This file must test that the function [positive_or_negative.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x03-debugging/positive_or_negative.c) gives the correct output when given a case of 0. You are not coding the solution/function, you’re just testing it! 
You only need to upload 0-main.c and main.h for this task. We will provide our own positive_or_negative() function but one can create a custom one. How main.h should look and compilation with gcc:

![0 part 2](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/3782f408-98c4-4638-ab97-4a635b97c782)



**Task 1:**  [1-main.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x03-debugging/1-main.c)- Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.

![1](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/3642a281-3b28-4882-b0b3-4f8c9a027025)

![1 part 2](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/3bfdd538-c26b-45be-9356-a972cddd128a)

**Task 2:** [2-largest_number.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x03-debugging/2-largest_number.c). 

This program below prints the largest of three integers.

Main function:

![2](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/938d9c49-a2c7-418e-9f10-75557649e067)

int largest_number(int a, int b, int c);

![2 part 2](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/8ad31b1f-a8a3-4d95-af4a-549338175795)

The output however is not correct:

![2 part 3](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/86785884-1711-4848-bbd6-3e5686eec26f)

Fix the code in 2-largest_number.c so that it correctly prints out the largest of three numbers, no matter the case. For this task [2-main.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x03-debugging/2-main.c) used as the main function to test the code in [2-largest_number.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x03-debugging/2-largest_number.c).



**Task 2:** 

This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration. It has 3 functions: the main, int convert_day(int month, int day); and void print_remaining_days(int month, int day, int year);.

[3-main_a.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x03-debugging/3-main_a.c)- The default main function takes a date and prints how many days are left in the year, taking leap year into account. It tests the date April 1st 1997.

![3](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/d79cb3d4-ccf0-4584-848a-8431f3ed58c9)

[3-convert_day.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x03-debugging/3-convert_day.c)- Function that converts day of the month to day of the year, without accounting for leap year.

![3 part 2](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/f2af39e9-7b5d-4af3-948d-71eae0e06005)

[3-print_remaining_days.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x03-debugging/3-print_remaining_days.c)- Function that takes a date and prints how many days are left in the year, taking leap years into account.

![3 part 4](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/163d95df-9b73-4753-8f20-0902ef7472fc)

![3 part 6](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/8733db20-dacc-4620-92ee-95e2272785c9)


Output looks good for 04/01/1997 that is being tested in [3-main_a.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x03-debugging/3-main_a.c). Let’s make a new main file to try a case that is a leap year: 02/29/2000. The new main file is [3-main_b.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x03-debugging/3-main_b.c). Output for the year 2000 is wrong. Fix the print_remaining_days() function so that the output works correctly for all dates and all leap years.

![3 part 5](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/af196eda-c476-4359-be62-e492789be178)

Solution: [3-print_remaining_days.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x03-debugging/3-print_remaining_days.c)




