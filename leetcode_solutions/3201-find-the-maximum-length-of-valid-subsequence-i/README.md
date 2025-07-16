### <h2><a href="https://leetcode.com/problems/valid-word/">3136. Valid Word</a></h2>

<h3>Easy</h3>
<hr>

<p>A word is considered <strong>valid</strong> if:</p>
<ul>
  <li>It contains a minimum of 3 characters.</li>
  <li>It contains only digits (0–9), and English letters (uppercase and lowercase).</li>
  <li>It includes at least one vowel.</li>
  <li>It includes at least one consonant.</li>
</ul>

<p>You are given a string <code>word</code>.</p>

<p>Return <code>true</code> if <code>word</code> is valid, otherwise, return <code>false</code>.</p>

<p><strong>Notes:</strong></p>
<ul>
  <li>'a', 'e', 'i', 'o', 'u' and their uppercase variants are vowels.</li>
  <li>A consonant is an English letter that is not a vowel.</li>
</ul>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> word = "234Adas"
<strong>Output:</strong> true

<strong>Explanation:</strong>
This word meets all conditions. </pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> word = "b3"
<strong>Output:</strong> false

<strong>Explanation:</strong>
The word has fewer than 3 characters and no vowel. </pre>

<h4>Example 3:</h4>
<pre>
<strong>Input:</strong> word = "a3$e"
<strong>Output:</strong> false

<strong>Explanation:</strong>
The word contains a '\$' character and does not have a consonant. </pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= word.length <= 20</code></li>
  <li><code>word</code> consists of English uppercase and lowercase letters, digits, <code>'@'</code>, <code>'#'</code>, and <code>'$'</code>.</li>
</ul>
