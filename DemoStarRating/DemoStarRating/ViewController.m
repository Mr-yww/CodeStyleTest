//
//  ViewController.m
//  DemoStarRating
//
//  Created by 杨新财 on 2021/12/3.
//

#import "ViewController.h"
#import "DemoStarRateView.h"

@interface ViewController ()
@property (strong, nonatomic) DemoStarRateView *starRateView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.starRateView = [[DemoStarRateView alloc] initWithFrame:CGRectMake(10, 100, 300, 40) numberOfStars:5];
    self.starRateView.scorePercent = 0.3;
    self.starRateView.allowIncompleteStar = YES;
    self.starRateView.hasAnimation = YES;
    [self.view addSubview:self.starRateView];
}


@end
