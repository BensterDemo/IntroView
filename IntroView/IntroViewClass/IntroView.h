//
//  IntroView.h
//  IntroView
//
//  Created by Benster on 15/4/13.
//  Copyright (c) 2015年 Benster. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^DidSelectedEnter)();

@interface IntroView : UIViewController

@property (nonatomic, strong) UIScrollView *pagingScrollView;

@property (nonatomic, strong) UIButton *enterButton;

@property (nonatomic, copy) DidSelectedEnter didSelectedEnter;

@property (nonatomic, strong) NSArray *backgroundImageNames;

@property (nonatomic, strong) NSArray *coverImageNames;

#pragma mark - 

- (id)initWithCoverImageNames:(NSArray*)coverNames backgroundImageNames:(NSArray*)bgNames;

- (id)initWithCoverImageNames:(NSArray*)coverNames backgroundImageNames:(NSArray*)bgNames button:(UIButton*)button;

@end
