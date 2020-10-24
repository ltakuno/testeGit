/*
  A person is getting ready to leave and needs a pair of matching socks. If there are n  colors of socks in the drawer, how many socks need to be removed to be certain of having a matching pair?

Example n = 2

There are 2 colors of socks in the drawer. If they remove 2 socks, they may not match. The minimum number to insure success is 3.

Function Description

Complete the maximumDraws function in the editor below.

maximumDraws has the following parameter:

int n: the number of colors of socks


Returns

int: the minimum number of socks to remove to guarantee a matching pair.

Input Format
The first line contains the number of test cases, t.
Each of the following t lines contains an integer n.


Constraints

1 <= t <= 1000
0 < n < 10^6

Sample Input

2
1
2

Sample Output

2
3

Explanation
Case 1 : Only 1 color of sock is in the drawer. Any 2 will match.
Case 2 : 2 colors of socks are in the drawer. The first two removed may not match. At least 3  socks need to be removed to guarantee success.
*/


import Foundation

/*
 * Complete the maximumDraws function below.
 */
func maximumDraws(n: Int) -> Int {
    return n+1
}

let stdout = ProcessInfo.processInfo.environment["OUTPUT_PATH"]!
FileManager.default.createFile(atPath: stdout, contents: nil, attributes: nil)
let fileHandle = FileHandle(forWritingAtPath: stdout)!

guard let t = Int((readLine()?.trimmingCharacters(in: .whitespacesAndNewlines))!)
else { fatalError("Bad input") }

for tItr in 1...t {
    guard let n = Int((readLine()?.trimmingCharacters(in: .whitespacesAndNewlines))!)
    else { fatalError("Bad input") }

    let result = maximumDraws(n: n)

    fileHandle.write(String(result).data(using: .utf8)!)
    fileHandle.write("\n".data(using: .utf8)!)
}

