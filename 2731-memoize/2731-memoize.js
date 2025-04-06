/**
 * @param {Function} fn
 * @return {Function}
 */
function memoize(fn) {

    const mp= new Map();
    let callCount=0;
    
    return function(...args) {
        const key=JSON.stringify(args);

        if(!mp.has(key)){
            callCount++;
            mp.set(key, fn(...args));
        }
        return mp.get(key);
    }
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */