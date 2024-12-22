class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String, List<String>> mp = new HashMap();
        List<List<String>> list = new ArrayList();
        
        for(String str : strs){
            char[] array = str.toCharArray();
            Arrays.sort(array);
            String sorted = new String(array);
            mp.putIfAbsent(sorted, new ArrayList());
            mp.get(sorted).add(str);
        }
        list.addAll(mp.values());
        return list;
    }
}