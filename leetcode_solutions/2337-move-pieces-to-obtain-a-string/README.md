<h2><a href="https://leetcode.com/problems/move-pieces-to-obtain-a-string/">2337. Move Pieces to Obtain a String</a></h2>
<h3>Medium</h3>
<hr>
<div>
<p>You are given two strings <code>start</code> and <code>target</code>, both of length <code>n</code>. Each string consists only of the characters <code>'L'</code>, <code>'R'</code>, and <code>'_'</code> where:</p>

<ul>
    <li>The characters <code>'L'</code> and <code>'R'</code> represent pieces, where a piece <code>'L'</code> can move to the left only if there is a blank space directly to its left, and a piece <code>'R'</code> can move to the right only if there is a blank space directly to its right.</li>
    <li>The character <code>'_'</code> represents a blank space that can be occupied by any of the <code>'L'</code> or <code>'R'</code> pieces.</li>
</ul>

<p>Return <code>true</code> if it is possible to obtain the string <code>target</code> by moving the pieces of the string <code>start</code> any number of times. Otherwise, return <code>false</code>.</p>

<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> start = "_L__R__R_", target = "L______RR"
<strong>Output:</strong> true
<strong>Explanation:</strong> 
We can obtain the string <code>target</code> from <code>start</code> by doing the following moves:
- Move the first piece one step to the left, <code>start</code> becomes equal to <code>"L___R__R_"</code>.
- Move the last piece one step to the right, <code>start</code> becomes equal to <code>"L___R___R"</code>.
- Move the second piece three steps to the right, <code>start</code> becomes equal to <code>"L______RR"</code>.
Since it is possible to get the string <code>target</code> from <code>start</code>, we return <code>true</code>.
</pre>

<p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> start = "R_L_", target = "__LR"
<strong>Output:</strong> false
<strong>Explanation:</strong> 
The <code>'R'</code> piece in the string <code>start</code> can move one step to the right to obtain <code>"_RL_"</code>.
After that, no pieces can move anymore, so it is impossible to obtain the string <code>target</code> from <code>start</code>.
</pre>

<p><strong>Example 3:</strong></p>
<pre><strong>Input:</strong> start = "_R", target = "R_"
<strong>Output:</strong> false
<strong>Explanation:</strong> 
The piece in the string <code>start</code> can move only to the right, so it is impossible to obtain the string <code>target</code> from <code>start</code>.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
    <li><code>n == start.length == target.length</code></li>
    <li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
    <li><code>start</code> and <code>target</code> consist of the characters <code>'L'</code>, <code>'R'</code>, and <code>'_'</code>.</li>
</ul>
</div>
