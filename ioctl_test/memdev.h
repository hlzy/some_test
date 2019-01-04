/*mem设备描述结构体*/
struct mem_dev                                     
{                                                        
  char *data;                      
  unsigned long size;       
};
 
/* 定义幻数 */
#define MEMDEV_IOC_MAGIC  'k'
 
/* 定义命令 */
#define MEMDEV_IOCPRINT   _IO(MEMDEV_IOC_MAGIC, 1)
#define MEMDEV_IOCGETDATA _IOR(MEMDEV_IOC_MAGIC, 2, int)
#define MEMDEV_IOCSETDATA _IOW(MEMDEV_IOC_MAGIC, 3, int)
 
#define MEMDEV_IOC_MAXNR 3
 
#endif /* _MEMDEV_H_ */

