vaddress = int(input("The virtual address: "))
pageSize = 4096

print('The address ', vaddress, 'contains:')
print('page no. = ', int(vaddress/pageSize))
print('offset = ', vaddress%pageSize)
