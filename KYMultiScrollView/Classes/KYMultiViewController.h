//
//  KYMultiViewController.h
//  KYMultiScrollView
//
//  Created by yxf on 2020/8/27.
//

#import <UIKit/UIKit.h>
#import "KYMultiHeader.h"

@class KYMultiViewController;

NS_ASSUME_NONNULL_BEGIN

@protocol KYMultiViewControllerDelegate <NSObject>

-(void)multiViewController:(KYMultiViewController *)multiVc
          currentVcChanged:(UIViewController *)currentVc
                     index:(NSInteger)index;

@end

@interface KYMultiViewController : UIViewController

@property (nonatomic,strong)UIColor *bgColor;

@property (nonatomic,copy,readonly)NSArray<UIViewController *> *subVcs;
@property (nonatomic,assign,readonly)NSInteger currentIndex;

@property (nonatomic,weak)id<KYMultiViewControllerDelegate> delegate;

-(instancetype)initWithSubVcs:(NSArray<UIViewController *> *)subVcs
                 defaultIndex:(NSInteger)index;

//选中某个子vc,子类继承用
-(BOOL)selectVcAtIndex:(NSInteger)index;

@end

NS_ASSUME_NONNULL_END
