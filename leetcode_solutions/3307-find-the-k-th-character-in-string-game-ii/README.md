### <h2><a href="https://leetcode.com/problems/find-the-k-th-character-in-string-game-ii/">3307. Find the K-th Character in String Game II</a></h2>
<h3>Hard</h3>
<hr>

<p>Alice and Bob are playing a game. Initially, Alice has a string <code>word = "a"</code>.</p>

<p>You are given a positive integer <code>k</code>. You are also given an integer array <code>operations</code>, where <code>operations[i]</code> represents the type of the i<sup>th</sup> operation.</p>

<p>Now Bob will ask Alice to perform all operations in sequence:</p>
<ul>
  <li>If <code>operations[i] == 0</code>, append a copy of <code>word</code> to itself. (i.e., <code>word = word + word</code>)</li>
  <li>If <code>operations[i] == 1</code>, generate a new string by changing each character in <code>word</code> to its next character in the English alphabet and append it to the original word. <br>
      For example:
      <ul>
        <li>"c" → "cd"</li>
        <li>"zb" → "zbac"</li>
      </ul>
  </li>
</ul>

<p>Return the value of the <code>k</code><sup>th</sup> character in <code>word</code> after performing all the operations.</p>

<p><strong>Note:</strong> The character <code>'z'</code> wraps around to <code>'a'</code>.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> k = 5, operations = [0,0,0]
<strong>Output:</strong> "a"

<strong>Explanation:</strong>
Initially: word = "a"
- op 1: duplicate → "aa"
- op 2: duplicate → "aaaa"
- op 3: duplicate → "aaaaaaaa"
The 5th character is "a".
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> k = 10, operations = [0,1,0,1]
<strong>Output:</strong> "b"

<strong>Explanation:</strong>
Initially: word = "a"
- op 1: duplicate → "aa"
- op 2: add next chars of "aa" → "aabb"
- op 3: duplicate → "aabbaabb"
- op 4: add next chars of "aabbaabb" → "aabbaabbbbccbbcc"
The 10th character is "b".
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= k <= 10<sup>14</sup></code></li>
  <li><code>1 <= operations.length <= 100</code></li>
  <li><code>operations[i]</code> is either <code>0</code> or <code>1</code></li>
  <li>The input is guaranteed to produce a string of length at least <code>k</code></li>
</ul>
