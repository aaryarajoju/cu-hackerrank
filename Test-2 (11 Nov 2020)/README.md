## 1. Open The Door

The one direction is always partying in some room or the other. To gain entry into the room, one needs to know the fibonacci sequence. The first ten terms of the fibonacci sequence are: <br>
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, .... and so on. (Each term is the sum of previous two terms)<br>
You have to tell the <i>n</i>'th term of the sequence.<br>
<br>
<b>Input:</b><br>
A single integer <i>n</i>.<br>
<br>
<b>Output:</b><br>
The <i>n</i>'th term of the fibonacci sequence. Print a <i>\n</i> at the end of the answer.<br>
<br>
<b>Constraints:</b><br>
1 <=> <i>n</i> <= 15<br>
<br>
<br>
Sample Input:<br>
```
5
```
<br>
<br>
Sample Output:<br>
```
3
```
<br>
<br>
<br>
<a href = "https://github.com/aaryarajoju/cu-hackerrank/blob/main/Test-2%20(11%20Nov%202020)/Test/Q1.%20Open%20the%20Door/OpenTheDoor.c">Solution in C</a>


## 2. Check The Year

Given a number <i>N</i>, the task is to check if <i>N</i> is a leap year.

<br>
<br>
Sample Input:<br>
```
2000
```
<br>
<br>
Sample Output:<br>
```
yes
```
<br>
<br>
Sample Input:<br>
```
1997
```
<br>
<br>
Sample Output:<br>
```
no
```
<br>
<br>
<br>
<a href = "https://github.com/aaryarajoju/cu-hackerrank/blob/main/Test-2%20(11%20Nov%202020)/Test/Q2.%20Check%20the%20Year/CheckTheYear.c">Solution in C</a>


## 3. Seating Technique

Munna and Kaleen are quite fond of travelling. They mostly travel by railways. They were travelling in a train one day and they got interested in the seating arrangement of their compartment. The compartment looked something like-<br>

<br>
So they got interested to know the seat number facing them and the seat type facing them. The seats are denoted as follows:
<ul>
<li>Window Seat : <b>WS</b></li>
<li>Middle Seat : <b>MS</b></li>
<li>Aisle Seat : <b>AS</b></li>
</ul>
<br>
You will be given a seat number, find the seat number facing you and the seat type, i.e. <b>WS</b>, <b>MS</b> or <b>AS</b>.<br>
<br>
<b>Input:</b><br>
The first line of input will consist of a single integer <b>T</b> denoting number of test-cases. Each test-case consists of a single integer <b>N</b> denoting the seat-number.<br>
<br>
<b>Output:</b><br>
For each test case, print the facing seat-number and the seat type, separated by a single space in a new line.<br>
<br>
<b>Constraints:</b><br>
<ul>
<li>1 <= <b>T</b> <= 10^5</li>
<li>1 <= <b>N</b> <= 108</li>
</ul>
<br>
<br>
Sample Input:<br>
```
2
18
40
```
<br>
<br>
Sample Output:<br>
```
19 WS
45 AS
```
<br>
<p>Explanation: 2 denotes the number of test cases. 18 is the first seat number and 19 is in front of it and is a Window Seat (WS). Similarly, 40 is the second input and the seat opposite to it is 45 and is an Aisle Seat (AS).</p>
<br>
<br>
<br>
<a href = "https://github.com/aaryarajoju/cu-hackerrank/blob/main/Test-2%20(11%20Nov%202020)/Test/Q3.%20Seating%20Technique/SeatingTechnique.c">Solution in C</a>