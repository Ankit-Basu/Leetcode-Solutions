### <h2><a href="https://leetcode.com/problems/maximum-number-of-tasks-you-can-assign/">2071. Maximum Number of Tasks You Can Assign</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>You have <code>n</code> tasks and <code>m</code> workers. Each task has a strength requirement stored in a 0-indexed integer array <code>tasks</code>, with the <code>i<sup>th</sup></code> task requiring <code>tasks[i]</code> strength to complete. The strength of each worker is stored in a 0-indexed integer array <code>workers</code>, with the <code>j<sup>th</sup></code> worker having <code>workers[j]</code> strength. Each worker can only be assigned to a single task and must have a strength greater than or equal to the task's strength requirement (i.e., <code>workers[j] >= tasks[i]</code>).</p>

<p>Additionally, you have <code>pills</code> magical pills that will increase a worker's strength by <code>strength</code>. You can decide which workers receive the magical pills, however, you may only give each worker at most one magical pill.</p>

<p>Given the 0-indexed integer arrays <code>tasks</code> and <code>workers</code>, and the integers <code>pills</code> and <code>strength</code>, return the <strong>maximum number of tasks</strong> that can be completed.</p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> tasks = [3,2,1], workers = [0,3,3], pills = 1, strength = 1  
<strong>Output:</strong> 3  
<strong>Explanation:</strong>  
We can assign the magical pill and tasks as follows:  
- Give the magical pill to worker 0.  
- Assign worker 0 to task 2 (0 + 1 >= 1)  
- Assign worker 1 to task 1 (3 >= 2)  
- Assign worker 2 to task 0 (3 >= 3)
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong> tasks = [5,4], workers = [0,0,0], pills = 1, strength = 5  
<strong>Output:</strong> 1  
<strong>Explanation:</strong>  
We can assign the magical pill and tasks as follows:  
- Give the magical pill to worker 0.  
- Assign worker 0 to task 0 (0 + 5 >= 5)
</pre>

<p><strong>Example 3:</strong></p>
<pre>
<strong>Input:</strong> tasks = [10,15,30], workers = [0,10,10,10,10], pills = 3, strength = 10  
<strong>Output:</strong> 2  
<strong>Explanation:</strong>  
We can assign the magical pills and tasks as follows:  
- Give the magical pill to worker 0 and worker 1.  
- Assign worker 0 to task 0 (0 + 10 >= 10)  
- Assign worker 1 to task 1 (10 + 10 >= 15)  
The last pill is not given because it will not make any worker strong enough for the last task.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>n == tasks.length</code></li>
  <li><code>m == workers.length</code></li>
  <li><code>1 <= n, m <= 5 * 10<sup>4</sup></code></li>
  <li><code>0 <= pills <= m</code></li>
  <li><code>0 <= tasks[i], workers[j], strength <= 10<sup>9</sup></code></li>
</ul>
</div>
