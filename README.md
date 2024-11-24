# cmsc510-finalproject
Final project for CMSC510

### Problem Description & Possible Application
The Edit Distance Problem is a problem where we have to find the way to measure the minimum numbers of steps required to transform the first string into the second string. The steps can be one of three operations: inserting, deleting, or replacing a character. A real-world application of this problem is a part of the autocorrect feature in phones or computers. When a user types a word that may be misspelled, and the computer recognizes this error, it will attempt to compare the word to the dictionary and match it with a valid word based on the minimum edit distance.

### Approach & Challenges
I used a dynamic programming approach to solve this problem. I utilized a 2D table where each spot would represent the minimum number of steps needed to transform a prefix of the first into the second word. In my opinion, the most challenging part of the problem was figuring how the operations insert, delete, and replace actually would be represented in the table. In the end, by constructing the table step by step and implementing the base cases that I forgot about, it got a lot easier to see how the solution evolves into the final answer.

### Referenced Sources
While solving this problem, I used some materials to assist me in completion. I reread the chapter on Dynamic Programming from Algorithms by Jeff Erikson as well as the solution to the Longest Common Subsequence Problem to strengthen my foundational concepts to implement the solution. Moreover, I consulted the YouTube video about Edit Distance in Python by NeetCode (https://youtu.be/XYi2-LPrwm4?si=6JMmnvo9n-GxOy1Z) to visualize the structure of the solution better. However, I made sure that my code is different and based on my own understanding.
