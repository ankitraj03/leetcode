/**
 * @param {string} word
 * @param {number} numFriends
 * @return {string}
 */
var answerString = function(word, numFriends) {
    if(numFriends==1)
    return word;
    let maxlen=word.length-numFriends+1;
    let str="";

    for(let i=0;i<word.length;i++){
        let len=Math.min(word.length-i, maxlen);
        let substr=word.substr(i,len);
        if (substr > str) {
            str = substr;
        }
    }
    return str;
};