### <h2><a href="https://leetcode.com/problems/total-characters-in-string-after-transformations-ii/">3337. Total Characters in String After Transformations II</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>You are given a string <code>s</code> consisting of lowercase English letters, an integer <code>t</code> representing the number of transformations to perform, and an array <code>nums</code> of size 26.</p>  

<p>In one transformation, every character in <code>s</code> is replaced as follows:</p>  

<ul>  
  <li>Replace <code>s[i]</code> with the next <code>nums[s[i] - 'a']</code> consecutive characters in the alphabet.</li>  
  <li>The transformation wraps around the alphabet if it exceeds <code>'z'</code>. For example, if <code>s[i] = 'y'</code> and <code>nums[24] = 3</code>, it becomes <code>"zab"</code>.</li>  
</ul>  

<p>Return the length of the resulting string after exactly <code>t</code> transformations.</p>  
<p>Since the result may be very large, return it modulo <code>10⁹ + 7</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre>
<strong>Input:</strong> s = "abcyy", t = 2, nums = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2]  
<strong>Output:</strong> 7  

<strong>Explanation:</strong>  
Transformation 1 (t = 1):  
'a' → 'b'  
'b' → 'c'  
'c' → 'd'  
'y' → 'z'  
'y' → 'z'  
Resulting string: "bcdzz"  

Transformation 2 (t = 2):  
'b' → 'c'  
'c' → 'd'  
'd' → 'e'  
'z' → "ab"  
'z' → "ab"  
Resulting string: "cdeabab"  
Length: 7  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>
<strong>Input:</strong> s = "azbk", t = 1, nums = [2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2]  
<strong>Output:</strong> 8  

<strong>Explanation:</strong>  
'a' → "bc"  
'z' → "ab"  
'b' → "cd"  
'k' → "lm"  
Resulting string: "bcabcdlm"  
Length: 8  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
  <li><code>1 &le; s.length &le; 10⁵</code></li>  
  <li><code>s</code> consists only of lowercase English letters.</li>  
  <li><code>1 &le; t &le; 10⁹</code></li>  
  <li><code>nums.length == 26</code></li>  
  <li><code>1 &le; nums[i] &le; 25</code></li>  
</ul>  
</div>
