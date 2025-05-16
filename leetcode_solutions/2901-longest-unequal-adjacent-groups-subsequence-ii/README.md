### <h2><a href="https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-ii/">2901. Longest Unequal Adjacent Groups Subsequence II</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given a string array <code>words</code> and an integer array <code>groups</code>, both of length <code>n</code>.</p>  

<p>The <strong>Hamming distance</strong> between two strings of equal length is the number of positions at which the corresponding characters are different.</p>  

<p>Your task is to select the longest possible subsequence of indices <code>[i₀, i₁, ..., iₖ₋₁]</code> such that:</p>  
<ul>  
  <li>For every <code>0 ≤ j &lt; k - 1</code>, <code>groups[iⱼ] ≠ groups[iⱼ₊₁]</code></li>  
  <li><code>words[iⱼ]</code> and <code>words[iⱼ₊₁]</code> have the same length</li>  
  <li>The Hamming distance between <code>words[iⱼ]</code> and <code>words[iⱼ₊₁]</code> is exactly 1</li>  
</ul>  

<p>Return the words in order from one of the longest such subsequences. If multiple answers exist, return any of them.</p>  

<p><strong>Note:</strong> The strings in <code>words</code> may have different lengths.</p>  

<p><strong>Example 1:</strong></p>  
<pre>
<strong>Input:</strong> words = ["bab","dab","cab"], groups = [1,2,2]  
<strong>Output:</strong> ["bab","cab"]  

<strong>Explanation:</strong>  
Possible valid subsequences:
- [0,2] → ["bab","cab"]: groups differ and Hamming distance = 1  
- [0,1] → ["bab","dab"]: groups differ and Hamming distance = 1  
Maximum subsequence length is 2.
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>
<strong>Input:</strong> words = ["a","b","c","d"], groups = [1,2,3,4]  
<strong>Output:</strong> ["a","b","c","d"]  

<strong>Explanation:</strong>  
All strings are length 1 and Hamming distance between adjacent ones is 1.  
Groups are all different.  
So, the whole list is a valid subsequence.
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
  <li><code>1 ≤ n = words.length = groups.length ≤ 1000</code></li>  
  <li><code>1 ≤ words[i].length ≤ 10</code></li>  
  <li><code>1 ≤ groups[i] ≤ n</code></li>  
  <li><code>words</code> contains distinct strings</li>  
  <li><code>words[i]</code> consists of lowercase English letters</li>  
</ul>  
</div>
