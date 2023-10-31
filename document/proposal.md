# Trie-Tree Proposal
## Project Summary

Our proposed final project is the implementation of the Trie-Tree (or Prefix Tree) data structure. This tree-like data structure is primarily used for dynamic string storage and provides efficient methods for string searches, insertions, and deletions. Trie-Tree ensures that common prefixes of strings are stored on a single path, enabling fast look-ups.

## Code

All code files related to the Trie-Tree implementation and tests can be found in the `code/` directory.

To compile and run the code:

1. Navigate to the `code/` directory.
2. Use the appropriate compilation commands, depending on the specific files you wish to execute.
3. Modify the main functions if necessary to test specific functionalities or datasets.

## Data

Our datasets are sourced from commonly used English word lists, ranging from basic daily-use words to specialized technical jargon. We've processed these lists into varying sizes to test the efficiency and scalability of our Trie-Tree implementation. The datasets can be found in the `data/` directory and range from 100 words to 1,000,000 words.

## Documents

- The detailed proposal and academic references for our project can be found in the `documents/` directory under the file `proposal.md`.
  
- The tests and their descriptions are housed within the `testcase/` directory.

## Feedback

Any feedback we receive from our project mentor, as well as revisions based on this feedback, will be documented and stored in the `feedback/` directory for reference.

## Academic References

1. Morrison, R. (1968). PATRICIA—Practical Algorithm To Retrieve Information Coded In Alphanumeric. *Journal of the ACM (JACM)*, 15(4), 514-534. [Link](https://dl.acm.org/doi/10.1145/321479.321481)
  
2. Kumar, A., Sharma, P. K., & Singh, D. (2020). The Role of Trie Data Structure in String Processing. *International Journal of Computer Applications*, 175(10). [Link](https://www.researchgate.net/publication/341998459_The_Role_of_Trie_data_structure_in_string_processing)

3. Gupta, S., Jangra, A., & Yadav, S. (2021). A Novel Approach for Designing Trie Data Structure for Pattern Matching in Genomic DNA Sequences. *Journal of Computer Science and Technology*, 21(01), 23-31. [Link](https://www.ncbi.nlm.nih.gov/pmc/articles/PMC7875400/)

## Algorithm Summary
The Trie-Tree, also known as a prefix tree, is a tree-like data structure used for storing a dynamic set of strings. In the Trie-Tree, keys are usually strings. Unlike binary search trees, the Trie-Tree does not store the key within its nodes. Its structure ensures that common prefixes of the keys are stored on a single path, enabling efficient search and insertion operations.

## Function I/O

### `insert(string word)`
- **Input**: The word to be inserted.
- **Output**: None.
This function inserts a word into the Trie-Tree. The test set includes tests for this functionality, ensuring that words are correctly inserted.

### `search(string word)`
- **Input**: The word to be searched.
- **Output**: Returns true if the word is present, otherwise false.
This function checks whether a word exists in the Trie-Tree. The test set ensures the accuracy of the search.

### `delete(string word)`
- **Input**: The word to be deleted.
- **Output**: None.
This function deletes a word from the Trie-Tree. The test set ensures that a deleted word can no longer be searched for.

For this project, we don't need to convert .csv input, as we are using .txt files containing words to be inserted into the Trie-Tree. Additionally, our algorithm only requires the dataset as input without any additional input requirements.

## Data Description
The data comes from commonly used English word lists, such as open-source word lists or English dictionaries. This data has been processed into .txt format with each word occupying a line. Data processing was done manually without the use of automation scripts.
