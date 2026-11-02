function getValue<T>(value :T)T{
    return value;
}
console.log(getValue<string>('hello'));
console.log(getValue<number>(10));