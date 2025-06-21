### <h2><a href="https://leetcode.com/problems/minimum-deletions-to-make-string-k-special/">3085. Minimum Deletions to Make String K-Special</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given a string <code>word</code> and an integer <code>k</code>.</p>

<p>We consider <code>word</code> to be <b>k-special</b> if <code>|freq(word[i]) - freq(word[j])| <= k</code> for all indices <code>i</code> and <code>j</code> in the string.</p>

<p>Here, <code>freq(x)</code> denotes the frequency of the character <code>x</code> in <code>word</code>, and <code>|y|</code> denotes the absolute value of <code>y</code>.</p>

<p>Return the <strong>minimum number of characters</strong> you need to delete to make <code>word</code> <code>k-special</code>.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> word = "aabcaba", k = 0  
<strong>Output:</strong> 3  
<strong>Explanation:</strong>  
We can delete 2 'a's and 1 'c', resulting in "baba" where freq('a') == freq('b') == 2. Now, the absolute difference between any pair of character frequencies is 0.
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> word = "dabdcbdcdcd", k = 2  
<strong>Output:</strong> 2  
<strong>Explanation:</strong>  
We can delete 1 'a' and 1 'd', resulting in "bdcbdcdcd". The frequencies are: 'b'=2, 'c'=3, 'd'=4 → all differences ≤ 2.
</pre>

<h4>Example 3:</h4>
<pre>
<strong>Input:</strong> word = "aaabaaa", k = 2  
<strong>Output:</strong> 1  
<strong>Explanation:</strong>  
We delete 1 'b' → "aaaaaa". Now all characters (just 'a') have the same frequency. So, k-special with k=2 is satisfied.
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= word.length <= 10⁵</code></li>
  <li><code>0 <= k <= 10⁵</code></li>
  <li><code>word</code> consists only of lowercase English letters.</li>
</ul>
</div>
