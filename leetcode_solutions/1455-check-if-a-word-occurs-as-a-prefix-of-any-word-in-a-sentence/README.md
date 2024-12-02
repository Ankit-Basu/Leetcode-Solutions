<h2><a href="https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/">1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence</a></h2>
<h3>Easy</h3>
<hr>
<div>
<p>Given a sentence that consists of some words separated by a single space, and a <code>searchWord</code>, check if <code>searchWord</code> is a prefix of any word in <code>sentence</code>.</p>

<p>Return the index of the word in <code>sentence</code> (1-indexed) where <code>searchWord</code> is a prefix of this word. If <code>searchWord</code> is a prefix of more than one word, return the index of the first word (minimum index). If there is no such word, return <code>-1</code>.</p>

<p>A prefix of a string <code>s</code> is any leading contiguous substring of <code>s</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> sentence = "i love eating burger", searchWord = "burg"
<strong>Output:</strong> 4
<strong>Explanation:</strong> "burg" is prefix of "burger" which is the 4th word in the sentence.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> sentence = "this problem is an easy problem", searchWord = "pro"
<strong>Output:</strong> 2
<strong>Explanation:</strong> "pro" is prefix of "problem" which is the 2nd and the 6th word in the sentence, but we return 2 as it's the minimal index.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> sentence = "i am tired", searchWord = "you"
<strong>Output:</strong> -1
<strong>Explanation:</strong> "you" is not a prefix of any word in the sentence.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
  <li><code>1 &lt;= sentence.length &lt;= 100</code></li>
  <li><code>1 &lt;= searchWord.length &lt;= 10</code></li>
  <li><code>sentence</code> consists of lowercase English letters and spaces.</li>
  <li><code>searchWord</code> consists of lowercase English letters.</li>
</ul>
</div>
