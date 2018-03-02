

template <class inputIterator, class T>
T my_accumulate(inputIterator first, inputIterator last, T start){
    while(first != last){
        start+= *first;
        ++first;
    }
    return start;
}
