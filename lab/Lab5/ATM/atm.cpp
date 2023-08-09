#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> queue_index;

    int n, x;
    cin >> n >> x;
    int deposit_values[n];

    // Input deposit values and initialize the queue with indices
    for (int i = 0; i < n; i++)
    {
        int a_temp = 0;
        cin >> a_temp;
        deposit_values[i] = a_temp;
        queue_index.push(i);
    }

    while (!queue_index.empty())
    {
        int current_index = queue_index.front();
        int deposit_value = deposit_values[current_index];

        if (deposit_value <= x)
        {
            // The deposit is less than or equal to the withdrawal amount x
            cout << (current_index + 1) << " "; // Adding 1 to index to display the original index (1-based)
            queue_index.pop();
        }
        else
        {
            // The deposit is greater than x, deduct x and move it to the end of the queue
            deposit_values[current_index] -= x;
            queue_index.push(current_index);
            queue_index.pop();
        }
    }

    return 0;
}
