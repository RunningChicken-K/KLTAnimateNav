//
//  AnimationContoller.h
//  ChongZu
//
//  Created by 孔令涛 on 2016/10/9.
//  Copyright © 2016年 cz10000. All rights reserved.
//

#import <UIKit/UIKit.h>
/**
 导航栏操作类型
 */
#define ScreenWidth [UIScreen mainScreen].bounds.size.width
#define ScreenHeight [UIScreen mainScreen].bounds.size.height

@interface AnimationContoller : NSObject<UIViewControllerAnimatedTransitioning>

+ (instancetype)AnimationControllerWithOperation:(UINavigationControllerOperation)operation;
+ (instancetype)AnimationControllerWithOperation:(UINavigationControllerOperation)operation NavigationController:(UINavigationController *)navigationController;

@property(nonatomic,assign)UINavigationControllerOperation  navigationOperation;
@property(nonatomic,weak)UINavigationController * navigationController;

//@property(nonatomic,strong)UIImage * lastVCScreenShot;
//@property(nonatomic,strong)UIImage * nextVCScreenShot;


/**
 当通过手势pop时 调用此方法删除数组最后一张截图
 */
- (void)removeLastScreenShot;
@end
