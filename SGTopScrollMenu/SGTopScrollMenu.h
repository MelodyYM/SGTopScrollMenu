//
//  SGTopScrollMenu.h
//  SGTopScrollMenu
//
//  Created by Sorgle on 16/8/14.
//  Copyright © 2016年 Sorgle. All rights reserved.
//

// 欢迎来Github上下载最完整的Demo
// Github下载地址 https://github.com/Hanymore/SGTopScrollMenu.git


#import <UIKit/UIKit.h>
@class SGTopScrollMenu;

@protocol SGTopScrollMenuDelegate <NSObject>

- (void)SGTopScrollMenu:(SGTopScrollMenu *)topScrollMenu didSelectTitleAtIndex:(NSInteger)index;

@end

@interface SGTopScrollMenu : UIScrollView
/** 顶部标题数组 */
@property (nonatomic, strong) NSArray *titlesArr;
/** 存入所有Label */
@property (nonatomic, strong) NSMutableArray *allTitleLabel;
@property (nonatomic, weak) id<SGTopScrollMenuDelegate> topScrollMenuDelegate;


/** 类方法 */
+ (instancetype)topScrollMenuWithFrame:(CGRect)frame;



#pragma mark - - - 给外界ScrollView提供的方法以及自身的方法实现
/** 选中标题颜色改变以及指示器位置变化（只是为了让外界去调用）*/
- (void)selectedLabel:(UILabel *)label;
/** 选中标题居中（只是为了让外界去调用）*/
- (void)selectedTitleCenter:(UILabel *)centerLabel;


@end


