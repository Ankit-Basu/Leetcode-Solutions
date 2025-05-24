### <h2><a href="https://leetcode.com/problems/find-words-containing-character/">2942. Find Words Containing Character</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>You are given a <strong>0-indexed</strong> array of strings <code>words</code> and a character <code>x</code>.</p>  

<p>Return an array of indices representing the words that contain the character <code>x</code>.</p>  

<p>Note that the returned array may be in <strong>any order</strong>.</p>  

<p><strong>Example 1:</strong></p>  
<pre>
<strong>Input:</strong> words = ["leet","code"], x = "e"  
<strong>Output:</strong> [0,1]  
<strong>Explanation:</strong> "e" occurs in both "leet" and "code", so we return [0, 1].
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>
<strong>Input:</strong> words = ["abc","bcd","aaaa","cbc"], x = "a"  
<strong>Output:</strong> [0,2]  
<strong>Explanation:</strong> "a" occurs in "abc" and "aaaa", so we return [0, 2].
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>
<strong>Input:</strong> words = ["abc","bcd","aaaa","cbc"], x = "z"  
<strong>Output:</strong> []  
<strong>Explanation:</strong> "z" is not found in any word, so we return an empty array.
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
  <li><code>1 <= words.length <= 50</code></li>  
  <li><code>1 <= words[i].length <= 50</code></li>  
  <li><code>x</code> is a lowercase English letter.</li>  
  <li><code>words[i]</code> consists only of lowercase English letters.</li>  
</ul>  
</div>
