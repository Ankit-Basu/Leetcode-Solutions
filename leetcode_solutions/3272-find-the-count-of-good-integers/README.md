### <h2><a href="https://leetcode.com/problems/find-the-count-of-good-integers/">3272. Find the Count of Good Integers</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>You are given two positive integers <code>n</code> and <code>k</code>.</p>  

<p>An integer <code>x</code> is called <strong>k-palindromic</strong> if the base <code>k</code> representation of <code>x</code> is a palindrome (i.e., it reads the same forward and backward).</p>  

<p>Return the total number of k-palindromic integers in the range <code>[1, n]</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> n = 9, k = 2  
<strong>Output:</strong> 1  
<strong>Explanation:</strong>  
The only 2-palindromic number from 1 to 9 is:  
<code>1</code> → "1" in binary (palindromic)  
<code>3</code> → "11" in binary (palindromic)  
<code>5</code> → "101" in binary (palindromic)  
<code>7</code> → "111" in binary (palindromic)  
<code>9</code> → "1001" in binary (palindromic)  
So, the count is <strong>5</strong>.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> n = 13, k = 10  
<strong>Output:</strong> 12  
<strong>Explanation:</strong>  
All integers from 1 to 9 are palindromic in base 10. Additionally, 11 and 12 are not palindromes, but 13 is not either.  
So total palindromic numbers in base 10 from 1 to 13 are: 1-9, and 11.  
Count = 10.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= n <= 10<sup>5</sup></code></li>  
<li><code>2 <= k <= 10</code></li>  
</ul>  
</div>
