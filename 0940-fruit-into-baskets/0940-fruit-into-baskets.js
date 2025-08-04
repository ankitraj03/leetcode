/**
 * @param {number[]} fruits
 * @return {number}
 */
var totalFruit = function(fruits) {
    let left = 0;
    let maxLen = 0;
    const map = new Map();

    for (let right = 0; right < fruits.length; right++) {
        const fruit = fruits[right];
        map.set(fruit, (map.get(fruit) || 0) + 1);

        while (map.size > 2) {
            const leftFruit = fruits[left];
            map.set(leftFruit, map.get(leftFruit) - 1);
            if (map.get(leftFruit) === 0) {
                map.delete(leftFruit);
            }
            left++;
        }

        maxLen = Math.max(maxLen, right - left + 1);
    }

    return maxLen;
};
