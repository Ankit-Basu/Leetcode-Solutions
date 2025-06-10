### <h2><a href="https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-i/">3442. Maximum Difference Between Even and Odd Frequency I</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>You are given a string <code>s</code> consisting of lowercase English letters.</p>

<p>Your task is to find the maximum difference <code>diff = a1 - a2</code> between the frequency of characters <code>a1</code> and <code>a2</code> in the string such that:</p>

<ul>
  <li><code>a1</code> has an odd frequency in the string.</li>
  <li><code>a2</code> has an even frequency in the string.</li>
</ul>

<p>Return this maximum difference.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> s = "aaaaabbc"
<strong>Output:</strong> 3
<strong>Explanation:</strong> 
The character 'a' has an odd frequency of 5, and 'b' has an even frequency of 2.  
The maximum difference is 5 - 2 = 3.
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> s = "abcabcab"
<strong>Output:</strong> 1
<strong>Explanation:</strong> 
The character 'a' has an odd frequency of 3, and 'c' has an even frequency of 2.  
The maximum difference is 3 - 2 = 1.
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>3 <= s.length <= 100</code></li>
  <li><code>s</code> consists only of lowercase English letters.</li>
  <li><code>s</code> contains at least one character with an odd frequency and one with an even frequency.</li>
</ul>
</div>
