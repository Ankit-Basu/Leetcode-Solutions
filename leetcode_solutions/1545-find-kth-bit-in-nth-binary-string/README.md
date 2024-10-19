<h2><a href="https://leetcode.com/problems/find-kth-bit-in-nth-binary-string/">1545. Find Kth Bit in Nth Binary String</a></h2>
<h3>Medium</h3>
<hr>
<div>
<p>Given two positive integers <code>n</code> and <code>k</code>, the binary string Sn is formed as follows:</p>
<p><code>S1 = "0"</code></p>
<p><code>Si = Si - 1 + "1" + reverse(invert(Si - 1))</code> for <code>i > 1</code></p>
<p>Where <strong>+</strong> denotes the concatenation operation, <strong>reverse(x)</strong> returns the reversed string <code>x</code>, and <strong>invert(x)</strong> inverts all the bits in <code>x</code> (0 changes to 1 and 1 changes to 0).</p>
<p>For example, the first four strings in the sequence are:</p>
<ul>
<li><code>S1 = "0"</code></li>
<li><code>S2 = "011"</code></li>
<li><code>S3 = "0111001"</code></li>
<li><code>S4 = "011100110110001"</code></li>
</ul>
<p>Return the <code>k</code>th bit in <code>Sn</code>. It is guaranteed that <code>k</code> is valid for the given <code>n</code>.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> n = 3, k = 1
<strong>Output:</strong> "0"
<strong>Explanation:</strong> S3 is "0111001". The 1st bit is "0".
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> n = 4, k = 11
<strong>Output:</strong> "1"
<strong>Explanation:</strong> S4 is "011100110110001". The 11th bit is "1".
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>
<ul>
<li><code>1 &lt;= n &lt;= 20</code></li>
<li><code>1 &lt;= k &lt;= 2^n - 1</code></li>
</ul>
</div>
