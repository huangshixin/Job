给定一个序列，从小到大或者从大到小排序

        int main(){
            int value[] = {1,3,73,2,5,9,2,5,61}
            for(int j=value.length-1;j>=1;j--){
                  for(int i=j-1;j>=0;j--){
                      if(value[j]>value[j+1]){
                        int temp = value[j]
                        value[j+1] = value[j]
                        value[j] = temp
                       }
                  }
            
            }

        }
