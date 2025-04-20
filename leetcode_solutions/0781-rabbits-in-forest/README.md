### <h2><a href="https://leetcode.com/problems/rabbits-in-forest/">781. Rabbits in Forest</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>There is a forest with an unknown number of rabbits. We asked <code>n</code> rabbits "How many rabbits have the same color as you?" and collected the answers in an integer array <code>answers</code> where <code>answers[i]</code> is the answer of the <code>i<sup>th</sup></code> rabbit.</p>

<p>Given the array <code>answers</code>, return the minimum number of rabbits that could be in the forest.</p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> answers = [1,1,2]
<strong>Output:</strong> 5
<strong>Explanation:</strong>
- Two rabbits answered "1" — they could be the same color (i.e. 2 rabbits of one group).
- One rabbit answered "2" — means 2 more rabbits of the same color exist, forming a group of 3.
- Minimum total rabbits = 2 (from "1" answers) + 3 (from "2" answer) = 5.
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong> answers = [10,10,10]
<strong>Output:</strong> 11
<strong>Explanation:</strong>
- Each rabbit says there are 10 others of the same color (group size = 11).
- But only 3 rabbits gave this answer, so we need one full group of 11 to satisfy them all.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 <= answers.length <= 1000</code></li>
  <li><code>0 <= answers[i] < 1000</code></li>
</ul>
</div>
