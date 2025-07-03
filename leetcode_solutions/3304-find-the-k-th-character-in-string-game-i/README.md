### <h2><a href="https://leetcode.com/problems/find-the-k-th-character-in-string-game-i/">3304. Find the K-th Character in String Game I</a></h2>
<h3>Easy</h3>
<hr>

<p>Alice and Bob are playing a game. Initially, Alice has a string <code>word = "a"</code>.</p>

<p>You are given a positive integer <code>k</code>.</p>

<p>Now Bob will ask Alice to perform the following operation forever:</p>

<ul>
  <li>Generate a new string by changing each character in <code>word</code> to its next character in the English alphabet, and append it to the original word.</li>
</ul>

<p>For example, performing the operation on <code>"c"</code> generates <code>"cd"</code> and performing the operation on <code>"zb"</code> generates <code>"zbac"</code>.</p>

<p>Return the value of the <code>k</code><sup>th</sup> character in <code>word</code>, after enough operations have been done for <code>word</code> to have at least <code>k</code> characters.</p>

<p>Note that the character <code>'z'</code> is changed to <code>'a'</code> in the operation.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> k = 5
<strong>Output:</strong> "b"
<strong>Explanation:</strong>
Initially, word = "a". We need to do the operation three times:
- Operation 1: "a" → next letters "b" → word becomes "ab"
- Operation 2: "ab" → next letters "bc" → word becomes "abbc"
- Operation 3: "abbc" → next letters "bccd" → word becomes "abbcbccd"
The 5th character is "b".
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> k = 10
<strong>Output:</strong> "c"
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= k <= 500</code></li>
</ul>
