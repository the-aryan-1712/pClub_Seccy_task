<h1>__________________________  ProblemStatement   ____________________</h1>
<br>
<br>
<br>
Imagine you are a freshman at IIT Kanpur and have decided to participate in its flagship inter-hall event, Takneek. One night, a member from<br>
a rival hall sneaks into your wing and sabotages the power supply by turning off all the fuses. There are N light switches in your wing, <br>
numbered from 1 to N, and you need to turn them back on.
<br><br>
Here's how the switches work:<br>
<br>
&#x2022;  Initially, all switches are in the 'OFF' position.<br>
&#x2022;  When you press a switch numbered 'x', the state (ON/OFF) of all switches that are factors of 'x' will toggle (i.e., if a switch is 'OFF', <br>
it turns 'ON', and vice versa).<br><br>

Your goal is to turn on the maximum number of lights possible. You can choose to press any combination of switches in increasing order. <br><br>
For example: Given N=2:<br>

&#x2022; If you press switch 1, switch 1 will toggle to 'ON'.<br>
&#x2022; If you then press switch 2, switches 1 and 2 will toggle: switch 1 will go back to 'OFF', and switch 2 will turn 'ON'.<br><br>
To achieve the maximum number of lights turned on, you need to determine the optimal sequence of switches to press.
<br><br>
<h3>Input</h3><br>
A single natural number N (1 ≤ N < 100,000), representing the number of switches.<br><br>
<h3>Output</h3><br>
The first line contains the maximum number of lights that can be turned on.<br>
The second line contains the sequence of space-separated switch numbers that you need to press in ascending order to achieve this.<br><br>

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
