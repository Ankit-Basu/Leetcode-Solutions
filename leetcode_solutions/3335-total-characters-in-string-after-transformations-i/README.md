### <h2><a href="https://leetcode.com/problems/total-characters-in-string-after-transformations-i/">3335. Total Characters in String After Transformations I</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given a string <code>s</code> and an integer <code>t</code>, representing the number of transformations to perform. In one transformation, every character in <code>s</code> is replaced according to the following rules:</p>  

<ul>  
  <li>If the character is <code>'z'</code>, replace it with the string <code>"ab"</code>.</li>  
  <li>Otherwise, replace it with the next character in the alphabet. For example, <code>'a'</code> becomes <code>'b'</code>, <code>'b'</code> becomes <code>'c'</code>, and so on.</li>  
</ul>  

<p>Return the length of the resulting string after exactly <code>t</code> transformations.</p>  
<p>Since the answer may be very large, return it modulo <code>10⁹ + 7</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre>
<strong>Input:</strong> s = "abcyy", t = 2  
<strong>Output:</strong> 7  
<strong>Explanation:</strong>  
First Transformation (t = 1):  
'a' → 'b'  
'b' → 'c'  
'c' → 'd'  
'y' → 'z'  
'y' → 'z'  
Result after 1st transformation: "bcdzz"  
Second Transformation (t = 2):  
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
<strong>Input:</strong> s = "azbk", t = 1  
<strong>Output:</strong> 5  
<strong>Explanation:</strong>  
'a' → 'b'  
'z' → "ab"  
'b' → 'c'  
'k' → 'l'  
Resulting string: "babcl"  
Length: 5  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
  <li><code>1 &le; s.length &le; 10⁵</code></li>  
  <li><code>s</code> consists only of lowercase English letters.</li>  
  <li><code>1 &le; t &le; 10⁵</code></li>  
</ul>  
</div>
