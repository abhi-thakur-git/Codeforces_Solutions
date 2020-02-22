//make boolean array
import java.util.Scanner

fun main(args: Array<String>){
    val reader=Scanner(System.`in`)
    var n=reader.nextInt()
    var array=IntArray(n)
    var array2= arrayOfNulls<Int>(n)
    var temp=0
    var visit= arrayOfNulls<Boolean>(1001)
    for(i in visit.indices){
        visit[i]=false
    }
    var size=0
    for(i in array.indices){
        temp=reader.nextInt()
        array[i]=temp

    }
    for(i in n-1 downTo 0){
       if(visit[array[i]]==false){
           visit[(array[i])]=true
           array2[i]=array[i]
           size++
       }
       else{
           array2[i]=-1
       }
    }
    println(size)
    for(i in array2.indices){
        if(array2[i]!=-1){
            print("${array2[i]} ")
        }
    }




}