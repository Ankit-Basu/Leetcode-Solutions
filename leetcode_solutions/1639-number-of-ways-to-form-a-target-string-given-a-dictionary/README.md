### <h2><a href="https://leetcode.com/problems/number-of-ways-to-form-a-target-string-given-a-dictionary/">1639. Number of Ways to Form a Target String Given a Dictionary</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>You are given a list of strings of the same length <code>words</code> and a string <code>target</code>.</p>  

<p>Your task is to form <code>target</code> using the given <code>words</code> under the following rules:</p>  
<ul>  
<li><code>target</code> should be formed from left to right.</li>  
<li>To form the <code>i<sup>th</sup></code> character (0-indexed) of <code>target</code>, you can choose the <code>k<sup>th</sup></code> character of the <code>j<sup>th</sup></code> string in <code>words</code> if <code>target[i] = words[j][k]</code>.</li>  
<li>Once you use the <code>k<sup>th</sup></code> character of the <code>j<sup>th</sup></code> string of <code>words</code>, you can no longer use the <code>x<sup>th</sup></code> character of any string in <code>words</code> where <code>x <= k</code>. In other words, all characters to the left of or at index <code>k</code> become unusable for every string.</li>  
<li>Repeat the process until you form the string <code>target</code>.</li>  
</ul>  

<p>Notice that you can use multiple characters from the same string in <code>words</code> provided the conditions above are met.</p>  

<p>Return the number of ways to form <code>target</code> from <code>words</code>. Since the answer may be too large, return it modulo <code>10<sup>9</sup> + 7</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre><strong>Input:</strong> words = ["acca","bbbb","caca"], target = "aba"  
<strong>Output:</strong> 6  
<strong>Explanation:</strong> There are 6 ways to form target.  
"aba" -> index 0 ("acca"), index 1 ("bbbb"), index 3 ("caca")  
"aba" -> index 0 ("acca"), index 2 ("bbbb"), index 3 ("caca")  
"aba" -> index 0 ("acca"), index 1 ("bbbb"), index 3 ("acca")  
"aba" -> index 0 ("acca"), index 2 ("bbbb"), index 3 ("acca")  
"aba" -> index 1 ("caca"), index 2 ("bbbb"), index 3 ("acca")  
"aba" -> index 1 ("caca"), index 2 ("bbbb"), index 3 ("caca")  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre><strong>Input:</strong> words = ["abba","baab"], target = "bab"  
<strong>Output:</strong> 4  
<strong>Explanation:</strong> There are 4 ways to form target.  
"bab" -> index 0 ("baab"), index 1 ("baab"), index 2 ("abba")  
"bab" -> index 0 ("baab"), index 1 ("baab"), index 3 ("baab")  
"bab" -> index 0 ("baab"), index 2 ("baab"), index 3 ("baab")  
"bab" -> index 1 ("abba"), index 2 ("baab"), index 3 ("baab")  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= words.length <= 1000</code></li>  
<li><code>1 <= words[i].length <= 1000</code></li>  
<li>All strings in <code>words</code> have the same length.</li>  
<li><code>1 <= target.length <= 1000</code></li>  
<li><code>words[i]</code> and <code>target</code> contain only lowercase English letters.</li>  
</ul>  
</div>  
