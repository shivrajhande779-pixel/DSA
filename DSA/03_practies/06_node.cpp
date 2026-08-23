#include <iostream>
#include <vector>
using namespace std;

class TrieNode {
public:
    TrieNode* child[2];

    TrieNode() {
        child[0] = nullptr;
        child[1] = nullptr;
    }
};

class BinaryTrie {
    TrieNode* root;

public:
    BinaryTrie() {
        root = new TrieNode();
    }

    void insert(int num) {
        TrieNode* node = root;

        for (int i = 31; i >= 0; i--) {
            int bit = (num >> i) & 1;

            if (node->child[bit] == nullptr)
                node->child[bit] = new TrieNode();

            node = node->child[bit];
        }
    }

    int getMaxXOR(int num) {
        TrieNode* node = root;
        int result = 0;

        for (int i = 31; i >= 0; i--) {
            int bit = (num >> i) & 1;
            int opposite = 1 - bit;

            if (node->child[opposite] != nullptr) {
                result |= (1 << i);
                node = node->child[opposite];
            } else {
                node = node->child[bit];
            }
        }

        return result;
    }
};

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    BinaryTrie trie;

    int prefixXOR = 0;
    int answer = 0;

    trie.insert(0);

    for (int i = 0; i < n; i++) {
        prefixXOR ^= arr[i];

        answer = max(answer, trie.getMaxXOR(prefixXOR));

        trie.insert(prefixXOR);
    }

    cout << "\nMaximum Subarray XOR = " << answer << endl;

    return 0;
}