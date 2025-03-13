  // Problem - https://leetcode.com/problems/length-of-last-word/description/

void main () {  
  String s = "luffy is still joyboy";
  print(lengthOfLastWord(s)); 
}

int lengthOfLastWord(String str) {
  List<String> tokens = str.split(' ');
  tokens.removeWhere((element)=> element.isEmpty);
  return tokens.last.length;
}