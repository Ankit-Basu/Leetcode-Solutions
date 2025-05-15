### <h2><a href="https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-i/">2900. Longest Unequal Adjacent Groups Subsequence I</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>You are given a string array <code>words</code> and a binary array <code>groups</code> both of length <code>n</code>, where <code>words[i]</code> is associated with <code>groups[i]</code>.</p>  

<p>Your task is to select the longest alternating subsequence from <code>words</code>. A subsequence is alternating if for any two consecutive strings in the sequence, their corresponding values in the <code>groups</code> array differ.</p>  

<p>Formally, you need to find the longest subsequence of indices <code>[i₀, i₁, ..., iₖ₋₁]</code> such that <code>groups[iⱼ] ≠ groups[iⱼ₊₁]</code> for every <code>0 ≤ j &lt; k - 1</code>, and return the corresponding <code>words[iⱼ]</code> elements.</p>  

<p>If there are multiple answers, return any of them.</p>  

<p><strong>Note:</strong> All elements in <code>words</code> are distinct.</p>  

<p><strong>Example 1:</strong></p>  
<pre>
<strong>Input:</strong> words = ["e","a","b"], groups = [0,0,1]  
<strong>Output:</strong> ["e","b"]  

<strong>Explanation:</strong>  
Possible valid subsequences:
- ["e","b"] from indices [0,2]
- ["a","b"] from indices [1,2]  
Length of maximum alternating subsequence is 2.
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>
<strong>Input:</strong> words = ["a","b","c","d"], groups = [1,0,1,1]  
<strong>Output:</strong> ["a","b","c"]  

<strong>Explanation:</strong>  
Possible valid subsequences include:
- ["a","b","c"] from indices [0,1,2]
- ["a","b","d"] from indices [0,1,3]  
Maximum alternating subsequence length is 3.
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
  <li><code>1 ≤ n = words.length = groups.length ≤ 100</code></li>  
  <li><code>1 ≤ words[i].length ≤ 10</code></li>  
  <li><code>groups[i]</code> is either <code>0</code> or <code>1</code></li>  
  <li><code>words</code> contains distinct strings</li>  
  <li><code>words[i]</code> consists only of lowercase English letters</li>  
</ul>  
</div>
