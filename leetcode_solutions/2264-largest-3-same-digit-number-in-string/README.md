<h2><a href="https://leetcode.com/problems/largest-3-same-digit-number-in-string/">2264. Largest 3-Same-Digit Number in String</a></h2>
<h3>Easy</h3>
<hr>
<div>
<p>You are given a string <code>num</code> representing a large integer. An integer is good if it meets the following conditions:</p>
<ul>
  <li>It is a substring of <code>num</code> with length 3.</li>
  <li>It consists of only one unique digit.</li>
</ul>

<p>Return the maximum good integer as a string or an empty string <code>""</code> if no such integer exists.</p>

<p><strong>Note:</strong></p>
<ul>
  <li>A substring is a contiguous sequence of characters within a string.</li>
  <li>There may be leading zeroes in <code>num</code> or a good integer.</li>
</ul>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> num = "6777133339"
<strong>Output:</strong> "777"
<strong>Explanation:</strong> There are two distinct good integers: "777" and "333".
"777" is the largest, so we return "777".
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> num = "2300019"
<strong>Output:</strong> "000"
<strong>Explanation:</strong> "000" is the only good integer.
</pre>

<p><strong class="example">Example 3:</strong></p>
<pre><strong>Input:</strong> num = "42352338"
<strong>Output:</strong> ""
<strong>Explanation:</strong> No substring of length 3 consists of only one unique digit. Therefore, there are no good integers.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>3 &le; num.length &le; 1000</code></li>
  <li><code>num</code> only consists of digits.</li>
</ul>
</div>
