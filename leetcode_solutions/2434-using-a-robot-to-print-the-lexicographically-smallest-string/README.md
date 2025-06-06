### <h2><a href="https://leetcode.com/problems/using-a-robot-to-print-the-lexicographically-smallest-string/">2434. Using a Robot to Print the Lexicographically Smallest String</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given a string <code>s</code> and a robot that holds an initially empty string <code>t</code>. The robot can perform two operations repeatedly until both <code>s</code> and <code>t</code> are empty:</p>

<ul>
  <li>Remove the first character from <code>s</code> and append it to the end of <code>t</code>.</li>
  <li>Remove the last character from <code>t</code> and write it onto paper (i.e., append it to the result string).</li>
</ul>

<p>Your task is to return the <strong>lexicographically smallest</strong> string that can be written on the paper by performing the above operations optimally.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> s = "zza"
<strong>Output:</strong> "azz"
<strong>Explanation:</strong>
p = "", s = "zza", t = ""
→ Move 'z' from s to t: t = "z"
→ Move 'z' from s to t: t = "zz"
→ Move 'a' from s to t: t = "zza"
→ Pop 'a' from t to p: p = "a"
→ Pop 'z': p = "az"
→ Pop 'z': p = "azz"
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> s = "bac"
<strong>Output:</strong> "abc"
<strong>Explanation:</strong>
→ Move 'b' → t = "b"
→ Move 'a' → t = "ba"
→ Pop 'a' → p = "a"
→ Pop 'b' → p = "ab"
→ Move 'c' → t = "c"
→ Pop 'c' → p = "abc"
</pre>

<h4>Example 3:</h4>
<pre>
<strong>Input:</strong> s = "bdda"
<strong>Output:</strong> "addb"
<strong>Explanation:</strong>
→ Move all characters to t: t = "bdda"
→ Pop in reverse: "a", "d", "d", "b" → p = "addb"
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= s.length <= 10<sup>5</sup></code></li>
  <li><code>s</code> consists only of lowercase English letters.</li>
</ul>
</div>
