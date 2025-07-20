<h2><a href="https://leetcode.com/problems/delete-duplicate-folders-in-system/">1948. Delete Duplicate Folders in System</a></h2>
<h3>Hard</h3>
<hr>
<div>
<p>Due to a bug, there are many duplicate folders in a file system. You are given a 2D array <code>paths</code>, where <code>paths[i]</code> is an array representing an absolute path to the <code>i<sup>th</sup></code> folder in the file system.</p>

<p>For example, <code>["one", "two", "three"]</code> represents the path <code>"/one/two/three"</code>.</p>

<p>Two folders (not necessarily on the same level) are <strong>identical</strong> if they contain the same non-empty set of identical subfolders and underlying subfolder structure. The folders do not need to be at the root level to be identical. If two or more folders are identical, then mark the folders as well as all their subfolders.</p>

<p>Once all the identical folders and their subfolders have been marked, the file system will delete all of them. The file system only runs the deletion once, so any folders that become identical after the initial deletion are not deleted.</p>

<p>Return the 2D array <code>ans</code> containing the paths of the remaining folders after deleting all the marked folders. The paths may be returned in any order.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> paths = [["a"],["c"],["d"],["a","b"],["c","b"],["d","a"]]
<strong>Output:</strong> [["d"],["d","a"]]
<strong>Explanation:</strong> Folders "/a" and "/c" are marked for deletion because they both contain an empty folder named "b".
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> paths = [["a"],["c"],["a","b"],["c","b"],["a","b","x"],["a","b","x","y"],["w"],["w","y"]]
<strong>Output:</strong> [["c"],["c","b"],["a"],["a","b"]]
<strong>Explanation:</strong> Folders "/a/b/x" and "/w" are marked for deletion because they both contain an empty folder named "y".
</pre>

<p><strong class="example">Example 3:</strong></p>
<pre><strong>Input:</strong> paths = [["a","b"],["c","d"],["c"],["a"]]
<strong>Output:</strong> [["c"],["c","d"],["a"],["a","b"]]
<strong>Explanation:</strong> All folders are unique in the file system.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 &lt;= paths.length &lt;= 2 * 10<sup>4</sup></code></li>
  <li><code>1 &lt;= paths[i].length &lt;= 500</code></li>
  <li><code>1 &lt;= paths[i][j].length &lt;= 10</code></li>
  <li><code>1 &lt;= sum(paths[i][j].length) &lt;= 2 * 10<sup>5</sup></code></li>
  <li><code>path[i][j]</code> consists of lowercase English letters.</li>
  <li>No two paths lead to the same folder.</li>
  <li>For any folder not at the root level, its parent folder will also be in the input.</li>
</ul>
</div>
