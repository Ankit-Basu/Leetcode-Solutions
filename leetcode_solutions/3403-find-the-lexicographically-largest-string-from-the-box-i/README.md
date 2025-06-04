### <h2><a href="https://leetcode.com/problems/find-the-lexicographically-largest-string-from-the-box-i/">3403. Find the Lexicographically Largest String From the Box I</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given a string <code>word</code> and an integer <code>numFriends</code>.</p>

<p>Alice is organizing a game for her <code>numFriends</code> friends. The game consists of multiple rounds, and in each round:</p>
<ul>
  <li><code>word</code> is split into <code>numFriends</code> non-empty substrings, such that no previous round has had the exact same split.</li>
  <li>All the resulting split strings are put into a box.</li>
</ul>

<p>After all valid rounds have been played, return the <strong>lexicographically largest</strong> string that was placed in the box.</p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> word = "dbca", numFriends = 2
<strong>Output:</strong> "dbc"
<strong>Explanation:</strong> 
All valid ways to split the word into 2 non-empty parts:
- "d", "bca"
- "db", "ca"
- "dbc", "a"

The box contains: "d", "bca", "db", "ca", "dbc", "a"

The lexicographically largest string is "dbc".
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong> word = "gggg", numFriends = 4
<strong>Output:</strong> "g"
<strong>Explanation:</strong> 
Only one valid way to split: "g", "g", "g", "g"

The box contains: "g", "g", "g", "g"

The lexicographically largest string is "g".
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 <= word.length <= 5000</code></li>
  <li><code>word</code> consists only of lowercase English letters</li>
  <li><code>1 <= numFriends <= word.length</code></li>
</ul>
</div>
