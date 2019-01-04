// def test=[1,2,3]
// test.each{
//     println it
// }
// def process = "ls -l".execute()
// println "${process.text}"

// new File('.','git_proxy.sh').eachLine{
//     line -> println line
// }
//  def dir=new File('.')
// dir.eachFileMatch(~/.*\.json/){
//     file-> println file.name
// }
// proc1 = 'ls'.execute()
// proc2 = 'tr -d o'.execute()
// proc3 = 'tr -d e'.execute()
// proc4 = 'tr -d i'.execute()
// proc1 | proc2 | proc3 | proc4
// proc4.waitFor()
// if (proc4.exitValue()) {
//     println proc4.err.text
// } else {
//     println proc4.text
// }
class InterceptTest implements GroovyInterceptable{

}

def Inter =new InterceptTest()