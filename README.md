
顶部滚动视图菜单 （APP中常见顶部滚动菜单选项，使用UIScrollView进行封装，使用起来极其简单、实用、方便）

一：使用方法一：

    1、将项目中SGTopScrollMenu文件夹拖入工程

    2、导入#import "SGTopScrollMenu.h"头文件

    3、通过alloc、initWithFrame或者类方法topScrollMenuWithFrame去创建

    4、遵循SGTopScrollMenuDelegate协议的topScrollMenuDelegate方法（- (void)SGTopScrollMenu:(SGTopScrollMenu *)topScrollMenu didSelectTitleAtIndex:(NSInteger)index；）

二、使用方法二：（详细使用方法，请参考Demo）

三、父子控制器的使用

四、通过Label创建并在其上添加手势（UITapGestureRecognizer）

五、通过
        - (CGRect)boundingRectWithSize:(CGSize)size options:(NSStringDrawingOptions)options attributes:(nullable NSDictionary<NSString *, id> *)attributes context:(nullable NSStringDrawingContext *)context；
    方法，根据标题内容：实现标题宽度自适应
