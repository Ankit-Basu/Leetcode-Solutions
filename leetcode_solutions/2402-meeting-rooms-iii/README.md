### <h2><a href="https://leetcode.com/problems/meeting-rooms-iii/">2402. Meeting Rooms III</a></h2>

<h3>Hard</h3>
<hr>

<p>You are given an integer <code>n</code> representing the number of meeting rooms, numbered from <code>0</code> to <code>n - 1</code>.</p>

<p>You are also given a 2D integer array <code>meetings</code>, where <code>meetings[i] = [start<sub>i</sub>, end<sub>i</sub>]</code> indicates a meeting that will be held during the half-closed interval <code>[start<sub>i</sub>, end<sub>i</sub>)</code>. All start times are unique.</p>

<p>Meetings are scheduled in rooms according to the following rules:</p>
<ul>
  <li>Each meeting is scheduled in the unused room with the <strong>lowest number</strong>.</li>
  <li>If no room is available, the meeting is <strong>delayed</strong> until a room is free. It will still take the same amount of time as originally planned.</li>
  <li>If multiple meetings are waiting, the one with the earliest original start time gets scheduled first.</li>
</ul>

<p>Return the number of the room that held the <strong>most</strong> meetings. If there are multiple such rooms, return the one with the <strong>lowest number</strong>.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> n = 2, meetings = [[0,10],[1,5],[2,7],[3,4]]
<strong>Output:</strong> 0

<strong>Explanation:</strong>

* Meeting \[0,10] → Room 0
* Meeting \[1,5] → Room 1
* Meeting \[2,7] → Delayed
* Meeting \[3,4] → Delayed
* Meeting \[1,5] ends → \[2,7] assigned to Room 1 at \[5,10]
* Meeting \[0,10] ends → \[3,4] assigned to Room 0 at \[10,11]
  Both rooms host 2 meetings. Return the lowest-numbered room → 0.

  </pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> n = 3, meetings = [[1,20],[2,10],[3,5],[4,9],[6,8]]
<strong>Output:</strong> 1

<strong>Explanation:</strong>
Room 0 → \[1,20]
Room 1 → \[2,10]
Room 2 → \[3,5]
→ \[4,9] delayed to \[5,10] in Room 2
→ \[6,8] delayed to \[10,12] in Room 1
Room 0: 1 meeting, Room 1: 2 meetings, Room 2: 2 meetings → return 1 (lowest number). </pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= n <= 100</code></li>
  <li><code>1 <= meetings.length <= 10<sup>5</sup></code></li>
  <li><code>meetings[i].length == 2</code></li>
  <li><code>0 <= start<sub>i</sub> < end<sub>i</sub> <= 5 × 10<sup>5</sup></code></li>
  <li>All <code>start<sub>i</sub></code> values are unique.</li>
</ul>
