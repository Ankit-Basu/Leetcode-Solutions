### <h2><a href="https://leetcode.com/problems/count-ways-to-build-good-strings/">2466. Count Ways To Build Good Strings</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>Given the integers <code>zero</code>, <code>one</code>, <code>low</code>, and <code>high</code>, we can construct a string by starting with an empty string, and then at each step perform either of the following:</p>  
<ul>  
<li>Append the character <code>'0'</code> <code>zero</code> times.</li>  
<li>Append the character <code>'1'</code> <code>one</code> times.</li>  
</ul>  

<p>This can be performed any number of times.</p>  

<p>A good string is a string constructed by the above process having a length between <code>low</code> and <code>high</code> (inclusive).</p>  

<p>Return the number of different good strings that can be constructed satisfying these properties. Since the answer can be large, return it modulo <code>10<sup>9</sup> + 7</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre><strong>Input:</strong> low = 3, high = 3, zero = 1, one = 1  
<strong>Output:</strong> 8  
<strong>Explanation:</strong>  
One possible valid good string is "011".  
It can be constructed as follows: "" -> "0" -> "01" -> "011".  
All binary strings from "000" to "111" are good strings in this example.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre><strong>Input:</strong> low = 2, high = 3, zero = 1, one = 2  
<strong>Output:</strong> 5  
<strong>Explanation:</strong> The good strings are "00", "11", "000", "110", and "011".  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= low <= high <= 10<sup>5</sup></code></li>  
<li><code>1 <= zero, one <= low</code></li>  
</ul>  
</div>  
