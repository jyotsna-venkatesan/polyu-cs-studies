def myIntersection(A, B): 
    sim=[]
    for i in range (0,len(A)):
        for j in range(0,len(B)):
            if A[i]==B[j]:
                if A[i] not in sim:
                    sim.append(A[i])
    return sim

def main():
    A=eval(input("Enter values of A seperated by commas: "))
    B=eval(input("Enter values of B seperated by commas: "))
    print(myIntersection(A,B))
    
main()
    
                
            