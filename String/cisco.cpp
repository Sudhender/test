


/*#include <iostream>
#include <vector>

using namespace std;

int dropped_packets(vector<vector<int>>& requests, int max_packets, int rate) {
    int packets_dropped = 0;
    int packets_in_pipeline = 0;
    int n = requests.size();
    int time_elapsed = 0;
    for (int i = 0; i < n; i++) {
        int packets_sent = requests[i][1];
        int packets_to_send = min(max_packets - packets_in_pipeline, packets_sent);
        packets_in_pipeline += packets_to_send;
        packets_dropped += packets_sent - packets_to_send;
        time_elapsed = requests[i][0];
        while (packets_to_send > 0) {
            packets_in_pipeline -= rate;
            packets_to_send -= rate;
            time_elapsed++;
        }
    }
    while (packets_in_pipeline > 0) {
        packets_in_pipeline -= rate;
        time_elapsed++;
    }
    return packets_dropped;
}

int main() {
    vector<vector<int>> requests = {{1, 8}, {4, 9}, {6, 7}};
    int max_packets = 10;
    int rate = 2;
    int packets_dropped = dropped_packets(requests, max_packets, rate);
    cout << packets_dropped << endl;
    return 0;
}*/

/*#include <iostream>
#include <vector>

int calculateDroppedPackets(const std::vector<std::pair<int, int>>& requests, int maxPackets, int rate) {
    int droppedPackets = 0;
    int currentPackets = 0;
    
    for (const auto& request : requests) {
        int arrivalTime = request.first;
        int packetsToSend = request.second;
        
        // Remove packets that have already been delivered
        currentPackets -= (arrivalTime - currentPackets / rate) * rate;
        
        // Add new packets to the queue
        currentPackets += packetsToSend;
        
        // Drop packets if the number exceeds the maximum allowed
        if (currentPackets > maxPackets) {
            droppedPackets += (currentPackets - maxPackets);
            currentPackets = maxPackets;
        }
    }
    
    return droppedPackets;
}

int main() {
    // Example usage
    std::vector<std::pair<int, int>> requests = {
        {0, 5},
        {2, 7},
        {4, 3},
        {5, 2},
        {10, 8}
    };
    
    int maxPackets = 10;
    int rate = 3;
    
    int droppedPackets = calculateDroppedPackets(requests, maxPackets, rate);
    
    std::cout << "Total dropped packets: " << droppedPackets << std::endl;
    
    return 0;
}*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int GetMaxPoints(vector<int>& markers) {
    // Sort the markers in descending order
    sort(markers.rbegin(), markers.rend());

    // Initialize variables
    int james_points = 0;
    int bob_points = 0;

    // Determine the maximum number of points for James
    for (int i = 0; i < markers.size(); i++) {
        if (i % 2 == 0) {
            james_points += markers[i];
        }
    }

    return james_points;
}

int main() {
    int num_markers;
    cin >> num_markers; // Read the number of markers

    vector<int> markers(num_markers);
    for (int i = 0; i < num_markers; i++) {
        cin >> markers[i]; // Read the marker values
    }

    int max_points = GetMaxPoints(markers);
    cout << max_points << endl;

    return 0;
}
