### <h2><a href="https://leetcode.com/problems/find-the-original-typed-string-i/">3330. Find the Original Typed String I</a></h2>
<h3>Easy</h3>
<hr>

<p>Alice is attempting to type a specific string on her computer. However, she tends to be clumsy and may press a key for too long, resulting in a character being typed multiple times.</p>

<p>Although Alice tried to focus on her typing, she is aware that she may still have done this at most once.</p>

<p>You are given a string <code>word</code>, which represents the final output displayed on Alice's screen.</p>

<p>Return the total number of possible original strings that Alice might have intended to type.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> word = "abbcccc"
<strong>Output:</strong> 5
<strong>Explanation:</strong> The possible strings are: 
"abbcccc", "abbccc", "abbcc", "abbc", and "abcccc".
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> word = "abcd"
<strong>Output:</strong> 1
<strong>Explanation:</strong> The only possible string is "abcd".
</pre>

<h4>Example 3:</h4>
<pre>
<strong>Input:</strong> word = "aaaa"
<strong>Output:</strong> 4
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= word.length <= 100</code></li>
  <li><code>word</code> consists only of lowercase English letters.</li>
</ul>
