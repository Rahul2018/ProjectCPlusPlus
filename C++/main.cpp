    #include<iostream>
    #include<vector>
    #include<string>

    using namespace std;

    int main() {

    cout<<"Hello World \n";

    vector<string> msg{"Hello", "C++", "World", "from", "VS Code!", "and the C++ extensions!"};

    for (const string& word : msg){
        cout<<word<<" ";
    }
    cout<<endl;

    return 0;

    }