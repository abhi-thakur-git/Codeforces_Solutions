import java.util.Scanner
fun calculate(x: Long,y: Long,z: Long){
    var a=(x-y+z)/2
    var b=(z-x+y)/2
    var c=(y-z+x)/2
    print("$a $b $c")
}

fun main(args: Array<String>){
    val reader=Scanner(System.`in`)
    var x=reader.nextLong()
    var y=reader.nextLong()
    var z=reader.nextLong()
    var w=reader.nextLong()
    var max= maxOf(x,y, maxOf(z,w))
    if(max==x) {
        calculate(y, z, w)
    }
    else if(max==y) {
        calculate(x, z, w)
    }
    else if(max==z) {
        calculate(y, x, w)
    }
    else{
        calculate(x,y,z)
    }
}