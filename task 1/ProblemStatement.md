<h1>__________________________  ProblemStatement   ____________________</h1>
<br>
<br>
<br>
Suppose you are a Newbie at IIT Kanpur, and decided to participate in its flagship Inter-Hall event, Tak-neek. One night, one of your opponent hall members sneaked into your Wing and sabotaged the power supply. He dropped down all the fuse of your Wing. There are N bulb switches, numbered from 1 to N. You need to press switches<strong> in increasing order </strong>(You can skip any switch if you want) and each time you press any switch, the On/Off state of all of its factor-numbered switches gets reversed.<br><br> Given N=5, and initially, all switches are Off, if you press switch no. 4, then 1 and 2 will automatically get opened. Now you are assigned to light up the maximum number of the bulbs possible, in your Wing.</h3>
<br><br>Determine the maximum number of bulbs that can be lit up and what sequence of switch numbers you are going to press to achieve that.
<br>
<br>
<h1> Input </h1>
The first and only line of code consists of a natural number N (0 < N < 10<sup>5</sup>) – Number of bulbs.

<h1>Output</h1>
The first line of output contains the maximum number of bulbs that can be lit up. And second line has the sequence of space-separated switch numbers in ascending order.

<h1>Example 1</h1>
Input:<br>
6

Output:<br>
6<br>
1 2 4 5 6

<h1>Example 2</h1>
Input:<br>
10

Output:<br>
10<br>
1 3 6 7 8 9 10
