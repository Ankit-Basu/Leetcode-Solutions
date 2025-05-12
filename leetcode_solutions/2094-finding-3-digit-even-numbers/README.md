### <h2><a href="https://leetcode.com/problems/finding-3-digit-even-numbers/">2094. Finding 3-Digit Even Numbers</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>You are given an integer array <code>digits</code>, where each element is a digit. The array may contain duplicates.</p>  

<p>You need to find all the unique integers that follow the given requirements:</p>  
<ul>  
  <li>The integer consists of the concatenation of three elements from <code>digits</code> in any arbitrary order.</li>  
  <li>The integer does not have leading zeros.</li>  
  <li>The integer is even.</li>  
</ul>  

<p>Return a sorted array of the unique integers.</p>  

<p><strong>Example 1:</strong></p>  
<pre>
<strong>Input:</strong> digits = [2,1,3,0]
<strong>Output:</strong> [102,120,130,132,210,230,302,310,312,320]
<strong>Explanation:</strong> All the possible integers that follow the requirements are in the output array. 
Notice that there are no odd integers or integers with leading zeros.
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>
<strong>Input:</strong> digits = [2,2,8,8,2]
<strong>Output:</strong> [222,228,282,288,822,828,882]
<strong>Explanation:</strong> The same digit can be used as many times as it appears in digits. 
In this example, the digit 8 is used twice each time in 288, 828, and 882.
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>
<strong>Input:</strong> digits = [3,7,5]
<strong>Output:</strong> []
<strong>Explanation:</strong> No even integers can be formed using the given digits.
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
  <li><code>3 &le; digits.length &le; 100</code></li>  
  <li><code>0 &le; digits[i] &le; 9</code></li>  
</ul>  
</div>
