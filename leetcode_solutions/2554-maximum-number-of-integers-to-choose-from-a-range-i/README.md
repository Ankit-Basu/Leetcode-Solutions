<h2><a href="https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i/">2554. Maximum Number of Integers to Choose From a Range I</a></h2>  
<h3>Medium</h3>  
<hr>  
<p>You are given an integer array <code>banned</code> and two integers <code>n</code> and <code>maxSum</code>. You are choosing some number of integers following the rules:</p>  

<ul>  
    <li>The chosen integers have to be in the range <code>[1, n]</code>.</li>  
    <li>Each integer can be chosen at most once.</li>  
    <li>The chosen integers should not be in the array <code>banned</code>.</li>  
    <li>The sum of the chosen integers should not exceed <code>maxSum</code>.</li>  
</ul>  

<p>Return the maximum number of integers you can choose following the rules.</p>  

<p><strong>Example 1:</strong></p>  
<pre><strong>Input:</strong> banned = [1,6,5], n = 5, maxSum = 6  
<strong>Output:</strong> 2  
<strong>Explanation:</strong> You can choose the integers 2 and 4.  
2 and 4 are from the range [1, 5], both did not appear in banned, and their sum is 6, which did not exceed maxSum.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre><strong>Input:</strong> banned = [1,2,3,4,5,6,7], n = 8, maxSum = 1  
<strong>Output:</strong> 0  
<strong>Explanation:</strong> You cannot choose any integer while following the rules.  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre><strong>Input:</strong> banned = [11], n = 7, maxSum = 50  
<strong>Output:</strong> 7  
<strong>Explanation:</strong> You can choose the integers 1, 2, 3, 4, 5, 6, and 7.  
They are from the range [1, 7], all did not appear in banned, and their sum is 28, which did not exceed maxSum.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
    <li><code>1 <= banned.length <= 10<sup>4</sup></code></li>  
    <li><code>1 <= banned[i], n <= 10<sup>4</sup></code></li>  
    <li><code>1 <= maxSum <= 10<sup>9</sup></code></li>  
</ul>  