
# Problem Statement
Given in separate md file in --> task1 --> as "ProblemStatement.md" --> <a href="https://github.com/the-aryan-1712/pClub_Seccy_task/blob/7bde88d1f69cf86dd7d4aa3f1c4f71259c19263d/task%201/ProblemStatement.md">link</a> 

# Approach  

## Iterating in Reverse and Check for state (ON/OFF) of multiples.
<br>
Reading 'N' as input we need to find maximum number of bulbs that can be turned on?<br>
Answer is simply 'N' itself Because, for any switch 'x', deciding factor of its state (ON/OFF) are its multiple, i.e 2x, 3x...... kx and so on until (kx <= n), because they can toggle the switch 'x'. And depending on what effect they have on 'x' we can change its state (ON/OFF).<br>
For example: Lets suppose bulb corresponding to 'x' switch is getting switched 'OFF; due to its multiple then we can make state of bulb as 'ON' by turning itself 'ON' and if effect of multiples is to make it 'ON' then we'll keep its state as 'OFF'. Thus we can achieve to lit up all the bulbs with unique sequence of (ON/OFF) state of switches.  That's why we will start from largest switch number ( which is N ) because it doesn't has any multiple in range of [1,N], obviously ignoring N itself.<br>
<br>
So our approach is to find multiples of switch 'x' and based on their effect on 'x' we can decide state of 'x' (ON/OFF). Now to find effect of multiples we need to store state of each multiple of 'x', whether it is 'ON' or 'OFF'. We are gonna use unordered map for tackling this because time complexity of accessing element is O(1) and it fulfills our requirement as well.<br>
Now as we start from N<sup>th</sup> switch it does'nt has any multiple in in range of [1,N], so we will switch it on and insert element {N,1} in map, which is showing that N<sup>th</sup> switch in kept ON.<br>
Similarly we keep decreasing N and traverse upto switch 1. For any switch 'x', we will find its multiple in map and make a variable 'count' to know how many multiples are switched on.<br> If the number of multiples switched 'ON' is even, then we'll keep switch 'x' in 'ON' state, and if odd,then 'OFF' state.





