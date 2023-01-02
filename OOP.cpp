/*
절차지향이 단순한 논리식의 나열이라면
객체지향은 논리식을 큰 틀로 묶고, 논리식이 필요할 때마다 그 큰 틀을 호출하는 것이다(아님말고).

객체지향에는 4가지 요소가 존재한다.
1. 캡슐화
2. 추상화
3. 상속성
4. 다형성

1. 캡슐화 - 변수/함수를 큰 클래스로 묶는 것, 클래스 속의 정보들을 은닉하는것
이는 내부에서 일어나는 처리 과정을 클래스 밖에 노출시키지 않게 함으로써 다른 거시기들과 엮이는 것을 방지하고, 효율성을 높일 수 있다.
public, protected, private 세 종류가 주로 사용된다.
public - 클래스 외부에서 클래스 속 기능을 사용 가능하도록 하는 것
protected - 자식 클래스에게만 권한이 주어지는 것
private - 클래스 속 기능을 오로지 클래스 내부에서만 사용 가능하게 하는것

여기서 protected 의 자식 클래스라는 것은 상속을 얘기하는 것이다

클래스 - 객체의 상태/행위가 정의되어 있는 것. 간단히 말해서 사과라는 객체를 만든다고 했을 때, 클래스 안에는 사과의 생김새, 사과의 맛, 사과의 식감 등이 정의되어 있고
추후 사과라는 객체를 호출할 때 해당 클래스에서 꺼내오는 것이다.

2. 추상화 - 마치 물체의 특성만을 집어내 그리는 추상주의 화풍처럼
쓸데없는 상세한 정보들은 제외하고, 필요한 정보만으로 구성하는 것이다.
예를 들어 사과라는 객체에서 나에게 필요한 것이 사과의 생김새와 맛 뿐이라면
사과의 식감이라는 정보는 굳이 추가하지 않는 것이다.

3. 상속성
상속성은 상위 개념의 특성을 하위 개념이 물려받는 것이다.
상속성은 부모 클래스가 있고, 자식 클래스가 있다.
자식 클래스는 부모 클래스로부터 정보를 상속받고, 또한 기능이 추가되는 것이다.
예를 들어 '쿠키'라는 부모 클래스가 있다.
이 쿠키는 동그랗게 생겼고, 바삭하고, 달달하다는 특징이 있다.
이 쿠키에 건포도를 추가하고 싶다면
자식 클래스로 '건포도맛 쿠키' 를 생성한다.
이렇게 되면 자식 클래스인 '건포도맛 쿠키'에는 부모 클래스인 '쿠키' 의 동그랗게 생겼고, 바삭하고, 달달하다는 특징을 상속한다.
그렇다면 건포도맛 쿠키는 쿠키의 모든 특징과 함께 건포도알이 박혀있다는 특징까지 가질 수 있게 되는 것이다.


4. 다형성
'다형성이란 하나의 부모타입 참조변수가 여러 자식 타입의 인스턴스를 가질 수 있는것' 이라고 한다. 그러나 잘 모르겠다. 추후 수정


제대로 썼는지 잘 모르겠다.

*/


