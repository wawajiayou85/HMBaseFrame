//
//  HMTools.h
//  HMBaseFrame
//
//  Created by leo on 15/12/1.
//  Copyright © 2015年 leo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Masonry.h"
#import "AFNetworking.h"
#import "UIImageView+WebCache.h"
#import "MBProgressHUD.h"
#import "ActionSheetPicker.h"

@interface HMTools : NSObject



+(instancetype)getInstance;

/**
 *  倒计时代码
 *
 *  @param blockYes 倒计时结束时调用
 *  @param blockNo  倒计时没结束时调用
 *  @param time     倒计时时间
 */
+ (void)verificationCode:(void(^)())blockYes blockNo:(void(^)(id time))blockNo :(NSInteger) time ;

/**
 *  将unicode转成utf-8
 *
 */
+(NSString *)replaceUnicode:(NSString *)unicodeStr;
/**
 *  获取屏幕尺寸 */
+(CGSize)sceenSize;

/**
 *  移出空白字符串
 */
+(NSString*)removeNullString :(NSString*)string;

/**
 当网址中含有中文字符时我们无法直接使用,需要把网址的字符串编码后再转为URL。
 */
+(void)replaceURLUTF8 :(NSString*)url;


+(BOOL)isNullString :(NSString*) string;
+(BOOL)iSNULLOrNil:(id)obj;

/**
 *  判断是否有网络
 */
+ (BOOL) connectedToNetwork;


/**
 *  将若干view等宽布局于容器containerView中
 *
 *  @param views         viewArray
 *  @param containerView 容器view
 *  @param LRpadding     距容器的左右边距
 *  @param viewPadding   各view的左右边距
 */

+(void)makeEqualWidthViews:(NSArray *)views inView:(UIView *)containerView LRpadding:(CGFloat)LRpadding viewPadding :(CGFloat)viewPadding;


/**
 * 计算指定时间与当前的时间差
 * @param compareDate   某一指定时间
 * @return 多少(秒or分or天or月or年)+前 (比如，3天前、10分钟前)
 */
+(NSString *) compareCurrentTime:(long long)millisecond;
+(NSString*)millisecondFormatDateString:(long long)millisecond;

+(NSString*)millisecondFormatDateForyyyyMMddHHssmm:(long long)millisecond;

@end
