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
//     front = 0;
//     rear = 0;
//     Q = new int[size];
// }


// void Queue::display()
// {
//     if(front == rear)
//     {
//         std::cout << "Queue is Empty" << std::endl;
//     }
//     else
//     {   
//         int i = front;
//         std::cout<<"Output front "<<front <<std::endl;
//         std::cout<<"Output rear "<< rear <<std::endl;
//         while(i != rear)
//         {
//             i = ((i+1)%size);
//             std::cout << Q[i] << std::endl;
//         }
//     }
// }

// void Queue::enqueue(int x)
// {
//     if( ((rear+1)%size) == front)
//     {
//         std::cout << "Queue is Full" << std::endl;
//         return;
//     }
//     else
//     {
//         rear = ((rear+1) % size);
//         Q[rear] = x;
//         return;
//     }
// }

// int Queue::dequeue()
// {
//     int x = -1;
//     if(front == rear)
//     {
//         std::cout << "Queue is Empty" << std::endl;
//     }
//     else
//     {
//         front = ((front+1)%size);
//         x=Q[front];
//         Q[front] == 0;
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

//     a = q.dequeue();
//     std::cout << "Dequeue element is " << a << std::endl;

//     q.enqueue(6);
//     q.display();

// }