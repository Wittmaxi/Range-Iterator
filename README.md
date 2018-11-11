# Range-Iterator
C++ for-each style iterators over a range

## use

use it like this: 
```
for (auto i : L4F::range_iterator(begin, end))
```

Example:
```
std::vector<std::string> studentnames;
std::cout << "how many students are there? \n";
int amount;
std::cin >> amount;
for (const auto i : L4F::range_iterator(0, amount)) {
  std::cout << "Please enter the student's name \n";
  std::cin >> studentnames [i];
}

```

## Background
This file was implemented for CLINL (https://clinl.org)
