#include <stdio.h>

int main() {
    int nof, pf = 0, nor;

    int ref[30];
    int frames[30];
    int lru[30]; // Array to store the least recently used positions

    printf("Enter the number of frames: ");
    scanf("%d", &nof);

    printf("Enter the number of reference strings: ");
    scanf("%d", &nor);

    printf("Enter the reference string:\n");

    for (int i = 0; i < nor; i++) {
        scanf("%d", &ref[i]);
    }

    for (int i = 0; i < nof; i++) {
        frames[i] = -1; // Initialize frames with an invalid page number
        lru[i] = 0; // Initialize LRU counter
    }

    int inc = 0;

    for (int i = 0; i < nor; i++) {
        int flag = 0;

        // Check if the page already exists in the frames
        for (int j = 0; j < nof; j++) {
            if (frames[j] == ref[i]) {
                flag = 1;
                lru[j] = i + 1; // Update the LRU counter for the page
                break;
            }
        }

        // Page not found in frames
        if (flag == 0) {
            int lruPos = 0;
            int min = lru[0];

            // Find the least recently used page
            for (int j = 1; j < nof; j++) {
                if (lru[j] < min) {
                    min = lru[j];
                    lruPos = j;
                }
            }

            frames[lruPos] = ref[i]; // Replace the least recently used page
            lru[lruPos] = i + 1; // Update the LRU counter for the new page
            pf++;
        }
    }

    printf("Page Faults: %d\n", pf);

    return 0;
}
