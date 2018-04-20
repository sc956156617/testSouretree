//
//  SegamentSliderViewMenuAutoView.h
//  QDCommentProject
//
//  Created by chao shen on 2018/4/8.
//  Copyright © 2018年 chao shen. All rights reserved.
// 滑动菜单 。同上 。适配宽度和文字有关系



我是神的你说是不是








#import <UIKit/UIKit.h>

@interface SegamentSliderViewMenuAutoView : UIViewController
/**  定义ScorllCtrl的contenoffset 创建的时候偏移量   */
@property (nonatomic,assign)NSInteger ScorllviewIndex;

/**  定义滑块背景色  默认绿 */
@property (nonatomic,copy)UIColor *sliderBackColor;

/**  定义标题栏背景色   */
@property (nonatomic,copy)UIColor *titleScrollviewBackColor;

/**   btn。即标签 未选中正常颜色  */
@property (nonatomic,copy)UIColor *btnNormolColor;

/**  btn 即标签 选中时颜色   */
@property (nonatomic,copy)UIColor *btnSlectColor;

/**
 初始化
 
 @param viewCtrl 务必传入装控制器的数组
 @return self
 */
-(instancetype)initWithCtrltitle:(NSArray *)viewCtrl;
@end
