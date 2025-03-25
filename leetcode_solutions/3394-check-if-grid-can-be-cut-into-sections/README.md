### <h2><a href="https://leetcode.com/problems/check-if-grid-can-be-cut-into-sections/">3394. Check if Grid can be Cut into Sections</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given an integer <code>n</code> representing the dimensions of an <code>n × n</code> grid, with the origin at the bottom-left corner of the grid. You are also given a 2D array <code>rectangles</code>, where <code>rectangles[i]</code> is in the form <code>[startx, starty, endx, endy]</code>, representing a rectangle on the grid. Each rectangle is defined as follows:</p>  

<ul>  
<li><code>(startx, starty)</code>: The bottom-left corner of the rectangle.</li>  
<li><code>(endx, endy)</code>: The top-right corner of the rectangle.</li>  
</ul>  

<p><strong>Note:</strong> The rectangles do not overlap.</p>  

<p>Your task is to determine if it is possible to make either two horizontal or two vertical cuts on the grid such that:</p>  

<ul>  
<li>Each of the three resulting sections formed by the cuts contains at least one rectangle.</li>  
<li>Every rectangle belongs to exactly one section.</li>  
</ul>  

<p>Return <code>true</code> if such cuts can be made; otherwise, return <code>false</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> n = 5, rectangles = [[1,0,5,2],[0,2,2,4],[3,2,5,3],[0,4,4,5]]  
<strong>Output:</strong> true  
<strong>Explanation:</strong>  
The grid is shown in the diagram. We can make horizontal cuts at <code>y = 2</code> and <code>y = 4</code>. Hence, output is <code>true</code>.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> n = 4, rectangles = [[0,0,1,1],[2,0,3,4],[0,2,2,3],[3,0,4,3]]  
<strong>Output:</strong> true  
<strong>Explanation:</strong>  
We can make vertical cuts at <code>x = 2</code> and <code>x = 3</code>. Hence, output is <code>true</code>.  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>  
<strong>Input:</strong> n = 4, rectangles = [[0,2,2,4],[1,0,3,2],[2,2,3,4],[3,0,4,2],[3,2,4,4]]  
<strong>Output:</strong> false  
<strong>Explanation:</strong>  
We cannot make two horizontal or two vertical cuts that satisfy the conditions. Hence, output is <code>false</code>.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>3 ≤ n ≤ 10⁹</code></li>  
<li><code>3 ≤ rectangles.length ≤ 10⁵</code></li>  
<li><code>0 ≤ rectangles[i][0] < rectangles[i][2] ≤ n</code></li>  
<li><code>0 ≤ rectangles[i][1] < rectangles[i][3] ≤ n</code></li>  
<li>No two rectangles overlap.</li>  
</ul>  
</div>  
