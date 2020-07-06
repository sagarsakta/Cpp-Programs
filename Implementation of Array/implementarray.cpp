  #include <iostream>
  #include <string>
  #include <cstdlib>
  #include <array>
  using namespace std;
  int main()
 {
    array<int, 10> arr;
    int choice, item;
    arr.fill(0);
    int count = 0;
    while (1)
    {
        cout<<"1.Insert Elements"<<endl;
        cout<<"2.Size of array"<<endl;
        cout<<"3.Front Element of Array"<<endl;
        cout<<"4.Back Element of Array"<<endl;
        cout<<"5.Display elements "<<endl;
        cout<<"6.Exit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter value to be inserted: ";
            cin>>item;
            arr.at(count) = item;
            count++;
            break;
        case 2:
            cout<<"Size of the Array: ";
            cout<<arr.size()<<endl;
            break;
        case 3:
            cout<<"Front Element of the Array: ";
            cout<<arr.front()<<endl;
            break;
        case 4:
            cout<<"Back Element of the Stack: ";
            cout<<arr.back()<<endl;
            break;
        case 5:
            for (arr = arr.begin(); arr != arr.end(); arr++ )
                cout <<" "<< *it;
            cout<<endl;
            break;
        case 6:
            exit(1);
            break;
        default:
            cout<<"Wrong Choice"<<endl;
        }
    }
    return 0;
}
