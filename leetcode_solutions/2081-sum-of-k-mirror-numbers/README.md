### <h2><a href="https://leetcode.com/problems/sum-of-k-mirror-numbers/">2081. Sum of k-Mirror Numbers</a></h2>
<h3>Hard</h3>
<hr>
<div>

<p>A <strong>k-mirror number</strong> is a positive integer without leading zeros that reads the same forward and backward both in base-10 and in base-k.</p>

<ul>
  <li>For example, <code>9</code> is a 2-mirror number because its base-10 representation is <code>"9"</code> and its base-2 representation is <code>"1001"</code>, both of which are palindromes.</li>
  <li>On the other hand, <code>4</code> is not a 2-mirror number because its base-2 representation is <code>"100"</code>, which is not a palindrome.</li>
</ul>

<p>Given a base <code>k</code> and an integer <code>n</code>, return the sum of the <code>n</code> smallest <code>k</code>-mirror numbers.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> k = 2, n = 5
<strong>Output:</strong> 25
<strong>Explanation:</strong>
The 5 smallest 2-mirror numbers are:
  Base-10    Base-2
     1         "1"
     3         "11"
     5         "101"
     7         "111"
     9         "1001"
Their sum is 1 + 3 + 5 + 7 + 9 = 25.
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> k = 3, n = 7
<strong>Output:</strong> 499
<strong>Explanation:</strong>
The 7 smallest 3-mirror numbers are:
  Base-10    Base-3
     1         "1"
     2         "2"
     4         "11"
     8         "22"
    121        "11111"
    151        "12121"
    212        "21212"
Their sum is 1 + 2 + 4 + 8 + 121 + 151 + 212 = 499.
</pre>

<h4>Example 3:</h4>
<pre>
<strong>Input:</strong> k = 7, n = 17
<strong>Output:</strong> 20379000
<strong>Explanation:</strong>
The 17 smallest 7-mirror numbers are:
1, 2, 3, 4, 5, 6, 8, 121, 171, 242, 292, 16561, 65656, 2137312, 4602064, 6597956, 6958596
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>2 <= k <= 9</code></li>
  <li><code>1 <= n <= 30</code></li>
</ul>

</div>
