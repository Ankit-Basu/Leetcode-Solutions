### <h2><a href="https://leetcode.com/problems/maximum-employees-to-be-invited-to-a-meeting/">2127. Maximum Employees to Be Invited to a Meeting</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>A company is organizing a meeting and has a list of <code>n</code> employees, waiting to be invited. They have arranged for a large circular table, capable of seating any number of employees.</p>  

<p>The employees are numbered from <code>0</code> to <code>n - 1</code>. Each employee has a favorite person, and they will attend the meeting only if they can sit next to their favorite person at the table. The favorite person of an employee is not themself.</p>  

<p>Given a 0-indexed integer array <code>favorite</code>, where <code>favorite[i]</code> denotes the favorite person of the <code>i<sup>th</sup></code> employee, return the maximum number of employees that can be invited to the meeting.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> favorite = [2,2,1,2]  
<strong>Output:</strong> 3  
<strong>Explanation:</strong>  
The above figure shows how the company can invite employees 0, 1, and 2, and seat them at the round table.  
All employees cannot be invited because employee 2 cannot sit beside employees 0, 1, and 3, simultaneously.  
Note that the company can also invite employees 1, 2, and 3, and give them their desired seats.  
The maximum number of employees that can be invited to the meeting is <code>3</code>.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> favorite = [1,2,0]  
<strong>Output:</strong> 3  
<strong>Explanation:</strong>  
Each employee is the favorite person of at least one other employee, and the only way the company can invite them is if they invite every employee.  
The seating arrangement will be the same as that in the figure given in Example 1:  
- Employee 0 will sit between employees 2 and 1.  
- Employee 1 will sit between employees 0 and 2.  
- Employee 2 will sit between employees 1 and 0.  
The maximum number of employees that can be invited to the meeting is <code>3</code>.  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>  
<strong>Input:</strong> favorite = [3,0,1,4,1]  
<strong>Output:</strong> 4  
<strong>Explanation:</strong>  
The above figure shows how the company will invite employees 0, 1, 3, and 4, and seat them at the round table.  
Employee 2 cannot be invited because the two spots next to their favorite employee 1 are taken.  
So the company leaves them out of the meeting.  
The maximum number of employees that can be invited to the meeting is <code>4</code>.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>n == favorite.length</code></li>  
<li><code>2 <= n <= 10<sup>5</sup></code></li>  
<li><code>0 <= favorite[i] <= n - 1</code></li>  
<li><code>favorite[i] != i</code></li>  
</ul>  
</div>  
