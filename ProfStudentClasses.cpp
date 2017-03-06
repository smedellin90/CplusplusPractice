class Person{
    protected:
    string name;
    int age;
    public:
    
    static int prof_id;
    static int stud_id;
    virtual void getdata()=0;
    virtual void putdata()=0;
};

int Person::prof_id=0;
int Person::stud_id=0;

class Professor:public Person{
    
    int publications;
    int cur_id;
    
    public:
     Professor(){
        prof_id++;
    }
    void getdata();
    void putdata();
    
};

void Professor::getdata(){
    cin>>name;
    cin>>age;
    cin>>publications;
    cur_id=prof_id;
    }

void Professor::putdata(){
    cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id<<endl;
    }


class Student:public Person{
    
    int marks[6];
    int cur_id;
    public:
    void getdata();
    void putdata();
    Student(){
        stud_id++;
    }   
};
void Student::getdata(){
    cin>>name>>age;
    for(int i=0;i<6;i++){
        cin>>marks[i];
    }
    cur_id=stud_id;
}

void Student::putdata(){
    
    int total=0;
    cout<<name<<" "<<age<<" ";
    for(int j=0;j<6;j++){
        total+=marks[j];
    }
    cout<<total<<" "<<cur_id<<endl; 
}