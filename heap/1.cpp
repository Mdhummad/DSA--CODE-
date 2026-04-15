// what is a heap?
// it is a complete binary tree that come witha heap order property
// heap order property can be max or min


// we will impliment heap using array
//if node==i;
//left child ==2*i;
//right child==2*i+1;



class heap{
public:
    int arr[100];
    int size;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    // INSERTION
    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;   // corrected

        while(index > 1){
            int parent = index / 2;

            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i = 1; i <= size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // 🔥 DELETION (remove root element)
    void deleteFromHeap(){
        // Step 1: if heap is empty
        if(size == 0){
            cout << "Heap is empty\n";
            return;
        }

        // Step 2: replace root with last element
        arr[1] = arr[size];

        // Step 3: reduce size
        size--;

        // Step 4: heapify (move root to correct position)
        int i = 1;

        while(i <= size){
            int left = 2 * i;
            int right = 2 * i + 1;

            int largest = i;

            // check left child
            if(left <= size && arr[left] > arr[largest]){
                largest = left;
            }

            // check right child
            if(right <= size && arr[right] > arr[largest]){
                largest = right;
            }

            // if root is largest, stop
            if(largest == i){
                return;
            }

            // otherwise swap and continue
            swap(arr[i], arr[largest]);
            i = largest;
        }
    }


    void heapify(int arr[], int n, int i){
    int largest = i;       // assume root is largest
    int left = 2 * i;      // left child
    int right = 2 * i + 1; // right child

    // check left child
    if(left <= n && arr[left] > arr[largest]){
        largest = left;
    }

    // check right child
    if(right <= n && arr[right] > arr[largest]){
        largest = right;
    }

    // if largest is not root
    if(largest != i){
        swap(arr[i], arr[largest]);

        // recursively heapify the affected subtree
        heapify(arr, n, largest);
    }
} 
};