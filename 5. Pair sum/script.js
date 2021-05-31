// Pair sum

//  Approach 1 - Brute force method
const pairSum = (nums, target) => {
  for (let i = 0; i < nums.length; i++) {
    for (j = i + 1; j < nums.length; j++) {
      if (nums[i] + nums[j] === target) {
        return [nums[i], nums[j]];
      }
    }
  }
};

// Approach 2 - searching
const pairSum = (nums, target) => {
  let pair, index;
  for (let i = 0; i < nums.length - 1; ++i) {
    pair = target - nums[i];
    if (nums.slice(i + 1).includes(pair)) {
      return [nums[i], pair];
    }
  }
};

// Approach 3 - hash table
const pairSum = (nums, target) => {
  let pair;
  const hashMap = {};
  for (let i = 0; i < nums.length; i++) {
    pair = target - nums[i];
    if (hashMap[nums[i]]) {
      return [nums[i], pair];
    } else {
      hashMap[pair] = true;
    }
  }
};

console.log(pairSum([2, 11, 7, 15], 9));
console.log(pairSum([3, 2, 4], 6));
console.log(pairSum([3, 3], 6));
