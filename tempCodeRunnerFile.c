void main(){
    struct queue q;
    q.size = 100;
    q.f = q.r = 0;
    q.arr = (int*)malloc(q.size*sizeof(int));

    //BSF Implimentation 
    int node;
    int i=1 ;        //Starting Point of Traversal
    int visited[7] = {0,0,0,0,0,0,0};
    int a[7][7] = { {0,1,1,1,0,0,0},
                    {1,0,1,0,0,0,0},
                    {1,1,0,1,1,0,0},
                    {1,0,1,0,1,0,0},
                    {0,0,1,1,0,1,1},
                    {0,0,0,0,1,0,0},
                    {0,0,0,0,1,0,0}};
    printf("%d ",i);
    visited[i] = 1;
    Enqueue(&q, i); //Enqueue i for exploration
    while (!isEmpty(&q)){
        int node = Dequeue(&q);
        for (int j = 0; j < 7; j++){
            if (a[node][j] == 1 && visited[j]==0){
                printf("%d ",j);
                visited[j]= 1;
                Enqueue(&q,j);   
            }
        }
        
    }
    
}