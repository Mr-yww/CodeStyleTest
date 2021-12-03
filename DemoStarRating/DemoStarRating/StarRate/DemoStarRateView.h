//
//  DemoStarRateView.h
//  StarRateDemo
//

#import <UIKit/UIKit.h>

@class DemoStarRateView;
@protocol DemoStarRateViewDelegate <NSObject>
@optional
- (void)starRateView:(DemoStarRateView *)starRateView scroePercentDidChange:(CGFloat)newScorePercent;
@end

@interface DemoStarRateView : UIView

@property (nonatomic, assign) CGFloat scorePercent;//得分值，范围为0--1，默认为1
@property (nonatomic, assign) BOOL hasAnimation;//是否允许动画，默认为NO
@property (nonatomic, assign) BOOL allowIncompleteStar;//评分时是否允许不是整星，默认为NO

@property (nonatomic, weak) id<DemoStarRateViewDelegate>delegate;

- (instancetype)initWithFrame:(CGRect)frame numberOfStars:(NSInteger)numberOfStars;

@end