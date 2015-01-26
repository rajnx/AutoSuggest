#include <iostream>
#include <vector>
using namespace std;

#define CHARSET_SIZE 26
#define INDEX (c - 'a')

struct TrieNode
{
    char value;
    TrieNode *childs[CHARSET_SIZE];

    TrieNode()
    {
        value = '\0';
        for (int i = 0; i < CHARSET_SIZE; i++) {
            childs[i] = NULL;
        }
    }
};

class Trie
{
public:
    Trie();
    ~Trie();

    void insertKey(char *key);
    bool searchKey(char *key);
    vector<char*> getAllRelatedKeys(char *key);

protected:
    TrieNode* createTrieNode(char value);

private:
    TrieNode *root;
};

Trie::Trie()
{
    root = NULL;
}

Trie::~Trie()
{

}

TrieNode* Trie::createTrieNode(char value)
{
    TrieNode *node = new TrieNode();

    if (NULL != node) {
        node->value = value;
    }

    return node;
}

void Trie::insertKey(char *key)
{
    // Parse string until null char
    // Find index in root node using key to index mapping
    //  if index is null, add index and continue.
    //  if index is not null,  mark root that node and continue

    while (*key != '\0')
    {
        root[INDEX(*key)]
    }
}
