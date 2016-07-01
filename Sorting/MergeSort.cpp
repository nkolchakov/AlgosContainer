Merge(L,R,A){
	nL <- length(L)
	nR <- length(R)
	i <- j <- k <- 0 // i(L), j(R), k(A)
	while(i<nL && j<nR){
		if(L[i] <= R[j]){
			A[k] = L[i]
			i <- i+1
		}
		else{
			A[k] <- R[j]
			j <- j+1
		}
		k <- k+1
	}
	while(i < nL){
		A[k] <- L[i]
		i <- i+1
		k <- k+1
	}
	while(j < nR){
		A[k] <- R[j]
		j <- j+1
		k <- k+1
	}
}

MergeSort(A){
	n <- length(A)
	if (n<2)	
		return 

	mid <- n/2
	left <- array of size(mid)
	right <- array of size(n-mid)
	for i <- 0 to mid:
		left[i] <- A[i]
	for j <- mid to n:
		right[i-mid] <- A[i]

	MergeSort(left)
	MergeSort(right)
	Merge(left, right,A)
}