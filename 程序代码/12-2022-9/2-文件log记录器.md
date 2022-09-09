      给定一个log数组，其中包含多种操作；
      ../
      ./
      file/
      
      【思路】
      if == './' current path
      if !='../' depth需要自增，因为需要不断的环文件夹
      elif depth:
          自减
        
        class Solution:
            def minOperations(self, logs: List[str]) -> int:
                depth = 0
                for log in logs:
                    if log == "./":
                        continue
                    if log != "../":
                        depth += 1
                    elif depth:
                        depth -= 1
                return depth
