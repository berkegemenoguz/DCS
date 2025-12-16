🚀 TCP Flow Control Simulation: Nagle's Algorithm vs Clark's Algorithm
This project was developed for the LCEN301 - Data Communications and Computer Networks course. It is a C++ simulation designed to model TCP flow control mechanisms and analyze the solutions for Silly Window Syndrome by comparing Nagle's Algorithm (Sender-side) and Clark's Solution (Receiver-side).d

📖 About the Project
The primary goal of this simulation is to analyze the inefficiency caused by small packet traffic and small window advertisements in a TCP connection.

Key Features:

Sender Simulation: Implements Nagle’s Algorithm logic.

Receiver Simulation: Implements Clark’s Algorithm / Delayed Window Updates.

Performance Metrics: Calculates total packets sent, effective data throughput, header overhead, and transmission time.

🧠 Theoretical Background
1. Silly Window Syndrome (SWS)
SWS occurs when the sender transmits data in small segments or the receiver advertises small window sizes. This leads to extremely poor network efficiency due to high header-to-data ratios.

2. Nagle's Algorithm (Sender-Side Solution)
Proposed by John Nagle, this algorithm reduces the number of small packets by ensuring the sender buffers small amounts of data until a full Maximum Segment Size (MSS) packet can be sent, or all previously sent data has been acknowledged.

3. Clark's Solution (Receiver-Side Solution)
Proposed by David Clark, this solution prevents the receiver from advertising small window sizes. The receiver advertises a "0" window size until there is enough space in the buffer to accommodate either a full Maximum Segment Size (MSS) or half of the buffer size.


