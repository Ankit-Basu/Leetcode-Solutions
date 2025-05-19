### <h2><a href="https://leetcode.com/problems/type-of-triangle/">3024. Type of Triangle</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>You are given a <code>0-indexed</code> integer array <code>nums</code> of size <code>3</code>, which represents the lengths of three sides that can potentially form a triangle.</p>

<p>Determine the type of triangle that can be formed using these sides, based on the following criteria:</p>

<ul>
  <li><strong>Equilateral:</strong> All sides are of equal length.</li>
  <li><strong>Isosceles:</strong> Exactly two sides are of equal length.</li>
  <li><strong>Scalene:</strong> All sides are of different lengths.</li>
</ul>

<p>Return a string representing the type of triangle that can be formed, or <code>"none"</code> if the given sides cannot form a triangle.</p>

<p><strong>Example 1:</strong></p>  
<pre>
<strong>Input:</strong> nums = [3, 3, 3]  
<strong>Output:</strong> "equilateral"  
<strong>Explanation:</strong> All sides are equal, hence the triangle is equilateral.
</pre>

<p><strong>Example 2:</strong></p>  
<pre>
<strong>Input:</strong> nums = [3, 4, 5]  
<strong>Output:</strong> "scalene"  
<strong>Explanation:</strong> All three sides are of different lengths. Also, the triangle inequality holds:
3 + 4 > 5, 3 + 5 > 4, and 4 + 5 > 3. Hence, it forms a valid scalene triangle.
</pre>

<p><strong>Constraints:</strong></p>  
<ul>  
  <li><code>nums.length == 3</code></li>  
  <li><code>1 <= nums[i] <= 100</code></li>  
</ul>  
</div>
