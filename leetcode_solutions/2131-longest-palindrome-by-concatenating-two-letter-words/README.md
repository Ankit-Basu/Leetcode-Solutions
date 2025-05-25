### <h2><a href="https://leetcode.com/problems/longest-palindrome-by-concatenating-two-letter-words/">2131. Longest Palindrome by Concatenating Two Letter Words</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given an array of strings <code>words</code>. Each string in <code>words</code> consists of two lowercase English letters.</p>  

<p>Your task is to create the longest possible palindrome by selecting and concatenating some elements from <code>words</code> in any order. Each word can be selected <strong>at most once</strong>.</p>  

<p>Return the <strong>length</strong> of the longest palindrome that can be created. If no palindrome can be formed, return <code>0</code>.</p>  

<p>A palindrome is a string that reads the same forward and backward.</p>  

<p><strong>Example 1:</strong></p>  
<pre>
<strong>Input:</strong> words = ["lc","cl","gg"]  
<strong>Output:</strong> 6  
<strong>Explanation:</strong> One of the longest palindromes is "lc" + "gg" + "cl" = "lcggcl", which has length 6.
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>
<strong>Input:</strong> words = ["ab","ty","yt","lc","cl","ab"]  
<strong>Output:</strong> 8  
<strong>Explanation:</strong> One of the longest palindromes is "ty" + "lc" + "cl" + "yt" = "tylcclyt", which has length 8.
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>
<strong>Input:</strong> words = ["cc","ll","xx"]  
<strong>Output:</strong> 2  
<strong>Explanation:</strong> "cc" is a palindrome of length 2. "ll" and "xx" are also valid and have the same length.
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
  <li><code>1 <= words.length <= 10<sup>5</sup></code></li>  
  <li><code>words[i].length == 2</code></li>  
  <li><code>words[i]</code> consists only of lowercase English letters.</li>  
</ul>  
</div>
