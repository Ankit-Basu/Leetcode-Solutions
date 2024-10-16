<h2><a href="https://leetcode.com/problems/longest-happy-string/">1405. Longest Happy String</a></h2><h3>Medium</h3><hr><div><p>A string <code>s</code> is called happy if it satisfies the following conditions:</p>

<ul>
    <li><code>s</code> only contains the letters 'a', 'b', and 'c'.</li>
    <li><code>s</code> does not contain any of "aaa", "bbb", or "ccc" as a substring.</li>
    <li><code>s</code> contains at most <code>a</code> occurrences of the letter 'a'.</li>
    <li><code>s</code> contains at most <code>b</code> occurrences of the letter 'b'.</li>
    <li><code>s</code> contains at most <code>c</code> occurrences of the letter 'c'.</li>
</ul>

<p>Given three integers <code>a</code>, <code>b</code>, and <code>c</code>, return the longest possible happy string. If there are multiple longest happy strings, return any of them. If there is no such string, return the empty string <code>""</code>.</p>

<p>A substring is a contiguous sequence of characters within a string.</p>

<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> a = 1, b = 1, c = 7
<strong>Output:</strong> "ccaccbcc"
<strong>Explanation:</strong> "ccbccacc" would also be a correct answer.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> a = 7, b = 1, c = 0
<strong>Output:</strong> "aabaa"
<strong>Explanation:</strong> It is the only correct answer in this case.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
    <li><code>0 &lt;= a, b, c &lt;= 100</code></li>
    <li><code>a + b + c &gt; 0</code></li>
</ul>
</div>