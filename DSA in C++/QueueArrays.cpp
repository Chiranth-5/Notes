// #include<iostream>

// class Queue
// {
//    private: 
//         int size;
//         int front;
//         int rear;
//         int *Q;

//     public:
//         Queue(int size);
//         void display ();
//         void enqueue (int x);
//         int dequeue();
// };

// Queue::Queue(int size)
// {
//     this->size = size;
//     front = rear = -1;
//     Q = new int[size];
// }


// void Queue::display()
// {
//     if( rear == front)
//     {
//         std::cout << "Queue is Empty" << std::endl;
//     }
//     else
//     {
//         for(int i = front +1; i<=rear; i++ )
//         {
//             std::cout << Q[i] <<std::endl;
//         }
//     }
// }

// void Queue::enqueue(int x)
// {
//     if( rear == size-1)
//     {
//         std::cout << "Queue is Full" << std::endl;
//         return;
//     }
//     else
//     {
//         rear++;
//         Q[rear] = x;
//         return;
//     }
// }

// int Queue::dequeue()
// {
//     int x = -1;
//     if(front == rear)
//     {
//         std::cout << "The Queue is Empty"<<std::endl;
//     }
//     else
//     {
//         front++;
//         x=Q[front];
//         Q[front] == 0;
//         if (front == rear)
//         {
//             front = rear = -1; //resetting of the queue
//         }
//     }
//     return x;
// }

// int main()
// {
    
//     int x;
//     std::cout << "Enter the size of the Queue" << std::endl;
//     std::cin >> x;
//     Queue q(x);
//     q.display();

//     q.enqueue(1);
//     q.enqueue(2);
//     q.enqueue(3);
//     q.enqueue(4);
//     q.enqueue(5);

//     q.display();
//     int a = q.dequeue();
//     std::cout << "Dequeue element is " << a << std::endl;

// }