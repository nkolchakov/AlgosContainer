Partition(A, start, end){
	
	pivot <- A[end] // or random
	pIndex <- start
	
	for i <- start to end-1{
		if (A[i] <= pivot){
			swap(A[i], a[pIndex])
			pIndex <- pIndex+1
		}
	}
	
	swap(A[pIndex] ,A[end])
	return pIndex
		
}

QuickSort(A, start, end){
	
	if (start >= end)
		return
	
	pIndex <- Partition(A, start, end)
	QuickSort(A, start, pIndex-1)
	QuickSort(A, pIndex+1, end)
}