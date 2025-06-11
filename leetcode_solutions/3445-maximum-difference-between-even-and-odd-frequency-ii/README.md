### <h2><a href="https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-ii/">3445. Maximum Difference Between Even and Odd Frequency II</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>You are given a string <code>s</code> and an integer <code>k</code>. Your task is to find the maximum difference between the frequency of two characters, <code>freq[a] - freq[b]</code>, in a substring <code>subs</code> of <code>s</code>, such that:</p>

<ul>
  <li><code>subs</code> has a size of at least <code>k</code>.</li>
  <li>Character <code>a</code> has an <strong>odd</strong> frequency in <code>subs</code>.</li>
  <li>Character <code>b</code> has an <strong>even</strong> frequency in <code>subs</code>.</li>
</ul>

<p>Return the maximum difference.  
Note that <code>subs</code> can contain more than 2 distinct characters.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> s = "12233", k = 4  
<strong>Output:</strong> -1  
<strong>Explanation:</strong>  
For the substring "12233", the frequency of '1' is 1 and the frequency of '3' is 2.  
The difference is 1 - 2 = -1.
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> s = "1122211", k = 3  
<strong>Output:</strong> 1  
<strong>Explanation:</strong>  
For the substring "11222", the frequency of '2' is 3 and the frequency of '1' is 2.  
The difference is 3 - 2 = 1.
</pre>

<h4>Example 3:</h4>
<pre>
<strong>Input:</strong> s = "110", k = 3  
<strong>Output:</strong> -1
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>3 <= s.length <= 3 * 10⁴</code></li>
  <li><code>s</code> consists only of digits '0' to '4'.</li>
  <li>The input is generated such that at least one substring has a character with an even frequency and a character with an odd frequency.</li>
  <li><code>1 <= k <= s.length</code></li>
</ul>
</div>
